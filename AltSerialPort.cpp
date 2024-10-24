#include "AltSerialPort.h"
#include "ui_AltSerialPort.h"

AltSerialPort::AltSerialPort(QWidget *parent, QString pathConfig) :
    QWidget(parent),
    ui(new Ui::AltSerialPort)
{
    ui->setupUi(this);

    if("" != pathConfig){
        m_PathConfig = pathConfig;
    }

    m_SerialPort = new QSerialPort();

    /*---------------------------------Start-INIT_TAB_COM----------------------------------*/
    m_TimerSendData = new QTimer();

    m_PB_Connect = ui->PB_AltSerialPort_ConnectSerialPort;
    m_PB_Refresh = ui->PB_AltSerialPort_RefreshCOMPort;

    m_CB_COM = ui->CB_AltSerialPort_COM;
    m_CB_BaudRate = ui->CB_AltSerialPort_BaudRate;
    m_CB_DataBits = ui->CB_AltSerialPort_DataBits;
    m_CB_Parity = ui->CB_AltSerialPort_Parity;
    m_CB_StopBits = ui->CB_AltSerialPort_StopBits;
    m_CB_FlowControl = ui->CB_AltSerialPort_FlowControl;

    m_LE_State = ui->LE_AltSerialPort_StateConnect;
    m_LE_Timeout = ui->CB_AltSerialPort_Timeout;

    connect(m_TimerSendData, &QTimer::timeout, [this](){emit SendData();});

    connect(m_PB_Connect, SIGNAL(clicked()), this, SLOT(COMPushButtonClicked()));
    connect(m_PB_Refresh, SIGNAL(clicked()), this, SLOT(COMPushButtonClicked()));

    connect(m_LE_Timeout, &QLineEdit::editingFinished, [this](){
        if(m_LE_Timeout->text().toUInt() <= 0){
            QMessageBox::warning(this, tr("Error timeout"),
                                       tr("The value cannot be less than or equal to 0."),
                                       QMessageBox::Ok);
            m_LE_Timeout->setText(QString::number(DEFAULT_TIMEOUT));
        }
    });

    SearchSerialPort(&m_L_COM);
    /*---------------------------------End-INIT_TAB_COM----------------------------------*/


    /*---------------------------------Start-INIT_TAB_PARSE----------------------------------*/

    m_LE_Parse_Char = ui->LE_AltSerialPort_Parse_Char;
    m_LE_Parse_UInt8 = ui->LE_AltSerialPort_Parse_UInt8;
    m_LE_Parse_Int8 = ui->LE_AltSerialPort_Parse_Int8;
    m_LE_Parse_UInt16 = ui->LE_AltSerialPort_Parse_UInt16;
    m_LE_Parse_Int16 = ui->LE_AltSerialPort_Parse_Int16;
    m_LE_Parse_UInt32 = ui->LE_AltSerialPort_Parse_UInt32;
    m_LE_Parse_Int32 = ui->LE_AltSerialPort_Parse_Int32;
    m_LE_Parse_Float = ui->LE_AltSerialPort_Parse_Float;
    m_CB_FormatUInt32 = ui->CB_AltSerialPort_Parse_FormatUInt32;
    m_CB_FormatInt32 = ui->CB_AltSerialPort_Parse_FormatInt32;
    m_CB_FormatFloat = ui->CB_AltSerialPort_Parse_FormatFloat;
    m_TE_Packet = ui->TE_AltSerialPort_Parse_Packet;
    m_CB_Packets = ui->CB_AltSerialPort_Parse_Packets;
    m_PB_ReadPackets = ui->PB_AltSerialPort_Parse_ReadPackets;
    m_PB_Back = ui->PB_AltSerialPort_Parse_Back;
    m_PB_Next = ui->PB_AltSerialPort_Parse_Next;

    connect(m_PB_ReadPackets, SIGNAL(clicked()), this, SLOT(ParsePushButtonClicked()));
    connect(m_PB_Back, SIGNAL(clicked()), this, SLOT(ParsePushButtonClicked()));
    connect(m_PB_Next, SIGNAL(clicked()), this, SLOT(ParsePushButtonClicked()));

    connect(m_CB_FormatUInt32, static_cast<void (QComboBox::*)(int ind)>(&QComboBox::currentIndexChanged), [this](int index){
        Q_UNUSED(index);
        ConvertAndPrintCurrentData(&m_L_DataUint8, m_CurrentIndexData);
    });
    connect(m_CB_FormatInt32, static_cast<void (QComboBox::*)(int ind)>(&QComboBox::currentIndexChanged), [this](int index){
        Q_UNUSED(index);
        ConvertAndPrintCurrentData(&m_L_DataUint8, m_CurrentIndexData);
    });
    connect(m_CB_FormatFloat, static_cast<void (QComboBox::*)(int ind)>(&QComboBox::currentIndexChanged), [this](int index){
        Q_UNUSED(index);
        ConvertAndPrintCurrentData(&m_L_DataUint8, m_CurrentIndexData);
    });

    connect(m_CB_Packets, static_cast<void (QComboBox::*)(int ind)>(&QComboBox::currentIndexChanged), [this](int index){
        if(index >= m_L_DataByteArray.size() || index == -1){
            return;
        }

        m_L_DataUint8.clear();
        m_CurrentIndexData = 0;

        QDataStream dataStream(m_L_DataByteArray[index]);
        uint8_t buf;
        for(uint16_t i = 0; i<m_L_DataByteArray[index].size(); i++){
            dataStream >> buf;
            m_L_DataUint8.append(buf);
        }

        ConvertAndPrintCurrentData(&m_L_DataUint8, m_CurrentIndexData);

        m_TE_Packet->clear();
        m_TE_Packet->setText(QString(m_L_DataByteArray[index]));
    });

    m_CB_Packets->view()->setMinimumSize(DEFAULT_WIDTH_SIZE_CB_PARSE_PACKETS,DEFAULT_HEIGTH_SIZE_CB_PARSE_PACKETS);
    m_CB_FormatUInt32->view()->setMinimumSize(DEFAULT_WIDTH_SIZE_CB_FORMAT_DATA,DEFAULT_HEIGTH_SIZE_CB_FORMAT_DATA);
    m_CB_FormatInt32->view()->setMinimumSize(DEFAULT_WIDTH_SIZE_CB_FORMAT_DATA,DEFAULT_HEIGTH_SIZE_CB_FORMAT_DATA);
    m_CB_FormatFloat->view()->setMinimumSize(DEFAULT_WIDTH_SIZE_CB_FORMAT_DATA,DEFAULT_HEIGTH_SIZE_CB_FORMAT_DATA);
    /*---------------------------------End-INIT_TAB_PARSE----------------------------------*/


    /*---------------------------------Start-INIT_TAB_WRITE----------------------------------*/
    m_LE_Write_Packet = ui->LE_AltSerialPort_Write_Packet;
    m_LE_Write_Symbol = ui->LE_AltSerialPort_Write_Symbol;
    m_LE_Write_Preview = ui->LE_AltSerialPort_Write_Preview;
    m_PB_Write_Back = ui->PB_AltSerialPort_Write_Back;
    m_PB_Write_Next = ui->PB_AltSerialPort_Write_Next;
    m_PB_Write_WriteSymbol = ui->PB_AltSerialPort_Write_WriteSymbol;
    m_PB_Write_WritePacket = ui->PB_AltSerialPort_Write_WritePacket;
    connect(m_PB_Write_Back, SIGNAL(clicked()), this, SLOT(WritePushButtonClicked()));
    connect(m_PB_Write_Next, SIGNAL(clicked()), this, SLOT(WritePushButtonClicked()));
    connect(m_PB_Write_WriteSymbol, SIGNAL(clicked()), this, SLOT(WritePushButtonClicked()));
    connect(m_PB_Write_WritePacket, SIGNAL(clicked()), this, SLOT(WritePushButtonClicked()));

    connect(m_LE_Write_Packet, SIGNAL(editingFinished()), this, SLOT(WriteLineEditChanged()));
    connect(m_LE_Write_Symbol, SIGNAL(editingFinished()), this, SLOT(WriteLineEditChanged()));
    connect(m_LE_Write_Preview, SIGNAL(editingFinished()), this, SLOT(WriteLineEditChanged()));
    /*---------------------------------End-INIT_TAB_WRITE----------------------------------*/


    ReadJsonAltSerialPort(m_PathConfig);

    ui->CB_AltSerialPort_Parse_Packets->addItem(QByteArray("000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000123456789"));
    m_L_DataByteArray.append(QByteArray("000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000123456789"));

    ui->CB_AltSerialPort_Parse_Packets->addItem(QByteArray("A2Z45&78@"));
    m_L_DataByteArray.append(QByteArray("A2Z45&78@"));
}

AltSerialPort::~AltSerialPort()
{
    WriteJsonAltSerialPort(m_PathConfig);

    if(m_SerialPort->isOpen()){
        m_SerialPort->close();
    }

    delete ui;
}

bool AltSerialPort::SearchSerialPort(QList<QString> *list_com)
{
    if(!m_SerialPort){
        return false;
    }

    if(m_SerialPort->isOpen()){
        m_SerialPort->close();
    }

    if(m_CB_COM->count() != 0){
        m_CB_COM->clear();
    }

    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        m_SerialPort->setPort(info);
        if(m_SerialPort->open(QIODevice::ReadWrite))
        {
            list_com->append((QString)info.portName());
            m_CB_COM->addItem((QString)info.portName());
            m_SerialPort->close();
        }
    }

    return true;
}

AltSerialPort::ConnectError_t AltSerialPort::ConnectSerialPort()
{
    if(false == m_Flag_ConnectionOn){
        m_Flag_ConnectionOn = true;

        if(m_SerialPort){
            if(!m_SerialPort->isOpen()){

                if("" == m_CB_COM->currentText()){
                    return ConnectError_NotFoundCOM;
                }
                if("-" == m_CB_Parity->currentText()){
                    return ConnectError_NotFoundParity;
                }
                if("-" == m_CB_StopBits->currentText()){
                    return ConnectError_NotFoundStopBits;
                }

                m_SerialPort->setPortName(m_CB_COM->currentText());
                m_SerialPort->setBaudRate(m_CB_BaudRate->currentText().toInt());
                m_SerialPort->setDataBits((QSerialPort::DataBits) ((QString)m_CB_DataBits->currentText()[4]).toInt()); //Data(#Num)
                m_SerialPort->setParity((QSerialPort::Parity) m_CB_Parity->currentText().toInt());
                m_SerialPort->setStopBits((QSerialPort::StopBits) m_CB_StopBits->currentIndex());
                m_SerialPort->setFlowControl((QSerialPort::FlowControl) m_CB_FlowControl->currentIndex());
                m_SerialPort->open(QIODevice::ReadWrite);
            }
            connect(m_SerialPort, &QIODevice::readyRead, this, &AltSerialPort::IntermediateFuncReadyRead);
        }

        if(!m_TimerSendData->isActive()){

            if(0 == m_LE_Timeout->text().toUInt()){
                return ConnectError_NotFoundTimeout;
            }

            m_TimerSendData->start(m_LE_Timeout->text().toUInt());
        }


        if(m_PB_Connect){
            m_PB_Connect->setText("Disconnect");
        }

        return ConnectError_None;
    }
    else{
        return ConnectError_AlreadyConnected;
    }
}

AltSerialPort::DisconnectError_t AltSerialPort::DisconnectSerialPort()
{
    if(true == m_Flag_ConnectionOn){
        m_Flag_ConnectionOn = false;

        if(m_SerialPort){
            if(m_SerialPort->isOpen()){
                m_SerialPort->close();
            }
            disconnect(m_SerialPort, &QIODevice::readyRead, this, &AltSerialPort::IntermediateFuncReadyRead);
        }

        if(m_TimerSendData->isActive()){
            m_TimerSendData->stop();
        }


        if(m_PB_Connect){
            m_PB_Connect->setText("Connect");
        }

        return DisconnectError_None;
    }
    else{
        return DisconnectError_AlreadyDisconnected;
    }
}

void AltSerialPort::IntermediateFuncReadyRead()
{
    QByteArray data = m_SerialPort->readAll();
    if(m_Flag_StartReadDataByteArray){
        m_L_DataByteArray.append(data);
    }
    emit RawDataReady(data);
}

void AltSerialPort::COMPushButtonClicked()
{
    QObject* button = QObject::sender();

    if(m_PB_Connect == button){
        if(m_Flag_ConnectionOn){
            switch(DisconnectSerialPort()){
            case DisconnectError_None:
                break;
            case DisconnectError_AlreadyDisconnected:
                QMessageBox::warning(this, tr("Error disconnect Serial port"),
                                           tr("The device is already turned off."),
                                           QMessageBox::Ok);
                break;
            default:
                break;
            }
            ConnectWidgetEnabled(true);
        }
        else {
            switch(ConnectSerialPort()){
            case ConnectError_None:
                ConnectWidgetEnabled(false);
                break;
            case ConnectError_NotFoundCOM:
                QMessageBox::warning(this, tr("Error COM"),
                                           tr("COM port is not found."),
                                           QMessageBox::Ok);
                break;
            case ConnectError_NotFoundParity:
                QMessageBox::warning(this, tr("Error Parity"),
                                           tr("Parity is not found."),
                                           QMessageBox::Ok);
                break;
            case ConnectError_NotFoundStopBits:
                QMessageBox::warning(this, tr("Error StopBits"),
                                           tr("StopBits is not found."),
                                           QMessageBox::Ok);
                break;
            case ConnectError_NotFoundTimeout:
                QMessageBox::warning(this, tr("Error timeout"),
                                           tr("The value cannot be less than or equal to 0."),
                                           QMessageBox::Ok);
                break;
            case ConnectError_AlreadyConnected:
                QMessageBox::warning(this, tr("Error connect Serial port"),
                                           tr("The device is already connected."),
                                           QMessageBox::Ok);
                break;
            default:
                break;
            }
        }
    }
    else if(m_PB_Refresh == button){
        SearchSerialPort(&m_L_COM);
    }
}

void AltSerialPort::ParsePushButtonClicked()
{
    QObject* button = QObject::sender();

    if(m_PB_ReadPackets == button){
        if(m_Flag_StartReadDataByteArray){
            m_PB_ReadPackets->setText("Read");
            m_Flag_StartReadDataByteArray = false;
        }
        else {
            m_PB_ReadPackets->setText("Reading...");
            m_L_DataByteArray.clear();
            m_CB_Packets->clear();
            m_Flag_StartReadDataByteArray = true;
        }
    }
    else if (m_PB_Back == button){
        if(m_CurrentIndexData == 0){
            return;
        }

        m_CurrentIndexData--;
        ConvertAndPrintCurrentData(&m_L_DataUint8, m_CurrentIndexData);
    }
    else if (m_PB_Next == button){
        if((m_CurrentIndexData + 1) == m_L_DataUint8.size()){
            return;
        }

        m_CurrentIndexData++;
        ConvertAndPrintCurrentData(&m_L_DataUint8, m_CurrentIndexData);
    }
}

void AltSerialPort::WritePushButtonClicked()
{
    static QByteArray byteArray;
    unsigned char symbol;

    QObject* button = QObject::sender();

    if(button == m_PB_Write_Back){
        if(m_LE_Write_Symbol->text().toUInt() == 0){
            return;
        }
        else {
            m_LE_Write_Symbol->setText(QString::number(m_LE_Write_Symbol->text().toUInt() - 1));
        }
        byteArray.clear();
        QDataStream dataStream(&byteArray, QIODevice::ReadWrite);
        symbol = m_LE_Write_Symbol->text().toUInt();
        dataStream << symbol;
        //qDebug() << byteArray;
        m_LE_Write_Preview->setText(byteArray.data()); //TODO: Some characters are not output
    }
    else if (button == m_PB_Write_Next){
        if(m_LE_Write_Symbol->text().toUInt() == 255){
            return;
        }
        else {
            m_LE_Write_Symbol->setText(QString::number(m_LE_Write_Symbol->text().toUInt() + 1));
        }
        byteArray.clear();
        QDataStream dataStream(&byteArray, QIODevice::ReadWrite);
        symbol = m_LE_Write_Symbol->text().toUInt();
        dataStream << symbol;
        m_LE_Write_Preview->setText(byteArray.data()); //TODO: Some characters are not output
    }
    else if (button == m_PB_Write_WriteSymbol){
        m_LE_Write_Packet->setText(m_LE_Write_Packet->text() + QString(byteArray));
    }
    else if (button == m_PB_Write_WritePacket){
        writeData(m_LE_Write_Packet->text().toUtf8());
    }
}

void AltSerialPort::WriteLineEditChanged()
{
    QObject* lineEdit = QObject::sender();

    if(lineEdit == m_LE_Write_Packet){
    }
    else if(lineEdit == m_LE_Write_Symbol){
        if(m_LE_Write_Symbol->text().toUInt() < 0 || m_LE_Write_Symbol->text().toUInt() > 255){
            m_LE_Write_Symbol->setText("127");
        }
    }
    else if(lineEdit == m_LE_Write_Preview){
    }
}

QJsonObject AltSerialPort::ReadJson(QString pathFile)
{
    QFile file(pathFile);
    QJsonDocument document;

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error file",
                                   QString("Could not open the file %1 for reading: %2").arg(file.fileName()).arg(file.errorString()),
                                   QMessageBox::Ok);
        return document.object();
    }

    QByteArray jsonData = file.readAll();
    if (file.error() != QFile::NoError) {
        QMessageBox::warning(this, "Error file",
                                   QString("Failed to read from file %1, error: %2").arg(file.fileName()).arg(file.errorString()),
                                   QMessageBox::Ok);
        return document.object();
    }

    file.close();

    if (jsonData.isEmpty()) {
        QMessageBox::warning(this, "Error file",
                                   QString("No data was currently available for reading from file %1").arg(file.fileName()),
                                   QMessageBox::Ok);
        return document.object();
    }

    QJsonParseError jsonError;
    document = QJsonDocument::fromJson(jsonData, &jsonError);

    if (!document.isObject()) {
        QMessageBox::warning(this, "Error file",
                                   "Document is not an object",
                                   QMessageBox::Ok);
        return document.object();
    }

    return document.object();
}

void AltSerialPort::WriteJsonAltSerialPort(QString pathConfig)
{
    QJsonObject recordObject;
    recordObject.insert("COM", QJsonValue::fromVariant(m_CB_COM->currentText()));
    recordObject.insert("BaudRate", QJsonValue::fromVariant(m_CB_BaudRate->currentText()));
    recordObject.insert("DataBits", QJsonValue::fromVariant(m_CB_DataBits->currentText()));
    recordObject.insert("Parity", QJsonValue::fromVariant(m_CB_Parity->currentText()));
    recordObject.insert("StopBits", QJsonValue::fromVariant(m_CB_StopBits->currentText()));
    recordObject.insert("FlowControl", QJsonValue::fromVariant(m_CB_FlowControl->currentText()));
    recordObject.insert("Timeout", QJsonValue::fromVariant(m_LE_Timeout->text()));

    QJsonDocument doc(recordObject);

    QString jsonString = doc.toJson(QJsonDocument::Indented);
    QFile file;

#ifdef Q_OS_WIN32
    file.setFileName(pathConfig + "\\AltSerialPort.json");
#endif

#ifdef Q_OS_LINUX
    file.setFileName(pathConfig + "/AltSerialPort.json");
#endif

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream stream( &file );
    stream << jsonString;
    file.close();
}

void AltSerialPort::ReadJsonAltSerialPort(QString pathConfig)
{
    QJsonObject JO_base;

#ifdef Q_OS_WIN32
    JO_base = ReadJson(pathConfig + "\\AltSerialPort.json");
#endif

#ifdef Q_OS_LINUX
    JO_base = ReadJson(pathConfig + "/AltSerialPort.json");
#endif

    if(!JO_base.isEmpty()){
        m_CB_COM->setCurrentText(JO_base.value("BaudRate").toString());
        m_CB_BaudRate->setCurrentText(JO_base.value("BaudRate").toString());
        m_CB_DataBits->setCurrentText(JO_base.value("DataBits").toString());
        m_CB_Parity->setCurrentText(JO_base.value("Parity").toString());
        m_CB_StopBits->setCurrentText(JO_base.value("StopBits").toString());
        m_CB_FlowControl->setCurrentText(JO_base.value("FlowControl").toString());
        m_LE_Timeout->setText(JO_base.value("Timeout").toString());
    }
}

uint16_t AltSerialPort::SetByteOrder(AltSerialPort::TypeByteOrder_t type, uint16_t *data)
{
    uint8_t u8[4];

    for(uint8_t i=0; i<2; i++){
        u8[i*2] = (*(data + i)) >> 8;
        u8[i*2+1] = (*(data + i)) & 0xFF;
    }

    switch(type){
    case TypeByteOrder_t::BigEnding:
        *(data) = (uint16_t)(u8[0] << 8 | u8[1]);
        *(data+1) = (uint16_t)(u8[2] << 8 | u8[3]);
        break;
    case TypeByteOrder_t::LittleEnding:
        *(data) = (uint16_t)(u8[3] << 8 | u8[2]);
        *(data+1) = (uint16_t)(u8[1] << 8 | u8[0]);
        break;
    case TypeByteOrder_t::BigEndingByteSwap:
        *(data) = (uint16_t)(u8[1] << 8 | u8[0]);
        *(data+1) = (uint16_t)(u8[3] << 8 | u8[2]);
        break;
    case TypeByteOrder_t::LittleEndingByteSwap:
        *(data) = (uint16_t)(u8[2] << 8 | u8[3]);
        *(data+1) = (uint16_t)(u8[0] << 8 | u8[1]);
        break;
    }

    return *(data);
}

int32_t AltSerialPort::SetByteOrder(AltSerialPort::TypeByteOrder_t type, int32_t *data)
{
    union {
        uint16_t u16[2];
        int32_t i32;
    };

    i32 = *data;
    SetByteOrder(type, &u16[0]);
    return i32;
}

uint32_t AltSerialPort::SetByteOrder(AltSerialPort::TypeByteOrder_t type, uint32_t *data)
{
    union {
        uint16_t u16[2];
        uint32_t u32;
    };

    u32 = *data;
    SetByteOrder(type, &u16[0]);
    return u32;
}

float AltSerialPort::SetByteOrder(AltSerialPort::TypeByteOrder_t type, float *data)
{
    union {
        uint16_t u16[2];
        float f;
    };

    f = *data;
    SetByteOrder(type, &u16[0]);
    return f;
}

void AltSerialPort::ConnectWidgetEnabled(bool state)
{
    m_PB_Refresh->setEnabled(state);
    m_CB_COM->setEnabled(state);
    m_CB_BaudRate->setEnabled(state);
    m_CB_DataBits->setEnabled(state);
    m_CB_Parity->setEnabled(state);
    m_CB_StopBits->setEnabled(state);
    m_CB_FlowControl->setEnabled(state);
    m_LE_Timeout->setEnabled(state);
}

void AltSerialPort::BoldCharTextEdit(QTextEdit *textEdit, uint16_t index)
{
    if(!m_TE_Packet){
        return;
    }

    QTextCursor cursor = textEdit->textCursor();
    cursor.setPosition(index);
    cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor);
    QTextCharFormat format;
    (0 == index) ? (format.setFontWeight(QFont::Normal)) : (format.setFontWeight(QFont::Bold)); // TODO: You need to remove format when exiting the function
    cursor.mergeCharFormat(format);
    m_TE_Packet->setFontWeight(QFont::Normal);
    m_TE_Packet->setTextCursor(cursor);
}

void AltSerialPort::ConvertAndPrintCurrentData(QList<uint8_t> *data, uint16_t index)
{
    BoldCharTextEdit(m_TE_Packet,index);

    if(m_CurrentIndexData > (m_L_DataUint8.size() - sizeof(uint16_t))){
        for(uint8_t i=0; i<sizeof(uint8_t); i++){
            m_u8[(sizeof(uint8_t) - 1) - i] = (*data)[index + i];
        }
    }
    else if(m_CurrentIndexData > (m_L_DataUint8.size() - sizeof(uint32_t))){
        for(uint8_t i=0; i<sizeof(uint16_t); i++){
            m_u8[(sizeof(uint16_t) - 1) - i] = (*data)[index + i];
        }
    }
    else {
        for(uint8_t i=0; i<sizeof(uint32_t); i++){
            m_u8[(sizeof(uint32_t) - 1) - i] = (*data)[index + i];
        }
    }

    m_LE_Parse_Char->setText(QString(char((*data)[index])));
    m_LE_Parse_UInt8->setText(QString::number(uint8_t((*data)[index])));
    m_LE_Parse_Int8->setText(QString::number(int8_t((*data)[index])));
    (m_CurrentIndexData < (m_L_DataUint8.size() - (sizeof(uint16_t) - 1))) ? (m_LE_Parse_UInt16->setText(QString::number(m_u16[0]))) : (m_LE_Parse_UInt16->setText("None"));
    (m_CurrentIndexData < (m_L_DataUint8.size() - (sizeof(uint16_t) - 1))) ? (m_LE_Parse_Int16->setText(QString::number(m_i16[0]))) : (m_LE_Parse_Int16->setText("None"));
    (m_CurrentIndexData < (m_L_DataUint8.size() - (sizeof(uint32_t) - 1))) ? (m_LE_Parse_UInt32->setText(QString::number(SetByteOrder(TypeByteOrder_t(m_CB_FormatUInt32->currentIndex()), &m_u32))))
                                                                           : (m_LE_Parse_UInt32->setText("None"));
    (m_CurrentIndexData < (m_L_DataUint8.size() - (sizeof(uint32_t) - 1))) ? (m_LE_Parse_Int32->setText(QString::number(SetByteOrder(TypeByteOrder_t(m_CB_FormatInt32->currentIndex()), &m_i32))))
                                                                           : (m_LE_Parse_Int32->setText("None"));
    (m_CurrentIndexData < (m_L_DataUint8.size() - (sizeof(uint32_t) - 1))) ? (m_LE_Parse_Float->setText(QString::number(SetByteOrder(TypeByteOrder_t(m_CB_FormatFloat->currentIndex()), &m_f))))
                                                                           : (m_LE_Parse_Float->setText("None"));
}
