/*
 *  Autor: Kalugin Artem (programmer-every-day@yandex.ru)
 *
 *
*/

/*
 *
 *  WARNING: IT IS NECESSARY TO ADD serialbus AND serialport TO .THE PRO FILE!
 *
*/


#ifndef ALTSERIALPORT_H
#define ALTSERIALPORT_H

#include <QWidget>
#include <QAbstractItemView>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

#include <QPushButton>
#include <QComboBox>
#include <QLineEdit>
#include <QTextEdit>

#include <QFile>
#include <QDir>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QTextStream>

#include <QDebug>

#include <QMessageBox>

#include <QTimer>

#define DEFAULT_TIMEOUT     100

#define DEFAULT_WIDTH_SIZE_CB_PARSE_PACKETS     700
#define DEFAULT_HEIGTH_SIZE_CB_PARSE_PACKETS    100

#define DEFAULT_WIDTH_SIZE_CB_FORMAT_DATA     120
#define DEFAULT_HEIGTH_SIZE_CB_FORMAT_DATA    40

typedef struct {
    QByteArray   Data;
} AltSerialPortQueue_t;

#define BYTE_SWAP(__MAJOR__,__MINOR__){ \
    typeof(*(__MAJOR__)) t = *(__MAJOR__); \
    *(__MAJOR__) = *(__MINOR__); \
    *(__MINOR__) = t; \
}

namespace Ui {
class AltSerialPort;
}

class AltSerialPort : public QWidget
{
    Q_OBJECT


public:
    explicit AltSerialPort(QWidget *parent = nullptr, QString pathConfig = "");
    ~AltSerialPort();

    typedef enum {
      BigEnding = 0,
      LittleEnding,
      BigEndingByteSwap,
      LittleEndingByteSwap
    } TypeByteOrder_t;

    typedef enum {
      ConnectError_None = 0,
      ConnectError_NotFoundCOM,
      ConnectError_NotFoundParity,
      ConnectError_NotFoundStopBits,
      ConnectError_NotFoundTimeout,
      ConnectError_AlreadyConnected
    } ConnectError_t;

    typedef enum {
      DisconnectError_None = 0,
      DisconnectError_AlreadyDisconnected
    } DisconnectError_t;

    const float Version = 0.02;

public slots:
    bool isQueueEmpty(){
        return m_L_Queue.isEmpty();
    };

    void addQueue(QByteArray data){
        AltSerialPortQueue_t t_AltSerialPortQueue;
        t_AltSerialPortQueue.Data.append(data);
        m_L_Queue.append(t_AltSerialPortQueue);
    };

    AltSerialPortQueue_t queueTakeFirst(){
        return m_L_Queue.takeFirst();
    };

    void writeData(QByteArray data){
        if(!m_SerialPort && m_SerialPort->isOpen()){
            m_SerialPort->write(data);
        }
    }

private slots:

    bool SearchSerialPort(QList<QString> *list_com);

    ConnectError_t ConnectSerialPort();
    DisconnectError_t DisconnectSerialPort();

    void IntermediateFuncReadyRead();

    void COMPushButtonClicked();
    void ParsePushButtonClicked();
    void WritePushButtonClicked();

    void WriteLineEditChanged();

    QJsonObject ReadJson(QString path_file);

    void WriteJsonAltSerialPort(QString pathConfig);
    void ReadJsonAltSerialPort(QString pathConfig);

    uint16_t SetByteOrder(TypeByteOrder_t type, uint16_t *data);
    int32_t SetByteOrder(TypeByteOrder_t type, int32_t *data);
    uint32_t SetByteOrder(TypeByteOrder_t type, uint32_t *data);
    float SetByteOrder(TypeByteOrder_t type, float *data);

    void ConnectWidgetEnabled(bool state);

    void BoldCharTextEdit(QTextEdit *textEdit, uint16_t index);
    void ConvertAndPrintCurrentData(QList<uint8_t> *data, uint16_t index);

private:
    Ui::AltSerialPort *ui;

    QSerialPort *m_SerialPort;

    QList<QString> m_L_COM;

    QList<AltSerialPortQueue_t> m_L_Queue;

    QString m_PathConfig = "";

    QTimer *m_TimerSendData;

    bool m_Flag_ConnectionOn = false;

    /*------------------START-PARAMETERS_TAB_COM------------------*/
    QPushButton *m_PB_Connect;
    QPushButton *m_PB_Refresh;
    QComboBox *m_CB_COM;
    QComboBox *m_CB_BaudRate;
    QComboBox *m_CB_DataBits;
    QComboBox *m_CB_Parity;
    QComboBox *m_CB_StopBits;
    QComboBox *m_CB_FlowControl;
    QLineEdit *m_LE_State;
    QLineEdit *m_LE_Timeout;
    /*------------------END-PARAMETERS_TAB_COM------------------*/

    /*------------------START-PARAMETERS_TAB_PARSE------------------*/
    QLineEdit *m_LE_Parse_Char;
    QLineEdit *m_LE_Parse_UInt8;
    QLineEdit *m_LE_Parse_Int8;
    QLineEdit *m_LE_Parse_UInt16;
    QLineEdit *m_LE_Parse_Int16;
    QLineEdit *m_LE_Parse_UInt32;
    QLineEdit *m_LE_Parse_Int32;
    QLineEdit *m_LE_Parse_Float;
    QComboBox *m_CB_FormatUInt32;
    QComboBox *m_CB_FormatInt32;
    QComboBox *m_CB_FormatFloat;
    QTextEdit *m_TE_Packet;
    QComboBox *m_CB_Packets;
    QPushButton *m_PB_ReadPackets;
    QPushButton *m_PB_Back;
    QPushButton *m_PB_Next;

    QList<QByteArray> m_L_DataByteArray;
    QList<uint8_t>  m_L_DataUint8;
    uint16_t m_CurrentIndexData = 0;

    bool m_Flag_StartReadDataByteArray = false;
    /*------------------END-PARAMETERS_TAB_PARSE------------------*/

    /*------------------START-PARAMETERS_TAB_WRITE------------------*/
    QLineEdit *m_LE_Write_Packet;
    QLineEdit *m_LE_Write_Symbol;
    QLineEdit *m_LE_Write_Preview;
    QPushButton *m_PB_Write_Back;
    QPushButton *m_PB_Write_Next;
    QPushButton *m_PB_Write_WriteSymbol;
    QPushButton *m_PB_Write_WritePacket;
    /*------------------END-PARAMETERS_TAB_WRITE------------------*/


    union {
      char      m_ch[4];
      uint8_t   m_u8[4];
      uint8_t   m_i8[4];
      uint16_t  m_u16[2];
      int16_t   m_i16[2];
      uint32_t  m_u32;
      int32_t   m_i32;
      float     m_f;
    };

signals:
    void RawDataReady(QByteArray data);
    void SendData();
};

#endif // ALTSERIALPORT_H
