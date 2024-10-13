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
    QList<QByteArray>   Data;
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
      ConnectError_NotFoundTimeout,
      ConnectError_AlreadyConnected
    } ConnectError_t;

    typedef enum {
      DisconnectError_None = 0,
      DisconnectError_AlreadyDisconnected
    } DisconnectError_t;


public slots:
    void addQueue(QByteArray data){
        m_Queue.Data.append(data);
    };

    QByteArray QueueTakeFirst(){
        return m_Queue.Data.takeFirst();
    };

private slots:

    bool SearchSerialPort(QList<QString> *list_com);

    ConnectError_t ConnectSerialPort();
    DisconnectError_t DisconnectSerialPort();

    void IntermediateFuncReadyRead();

    void COMPushButtonClicked();
    void ParsePushButtonClicked();

    QJsonObject ReadJson(QString path_file);

    void WriteJsonAltSerialPort(QString pathConfig);
    void ReadJsonAltSerialPort(QString pathConfig);

    uint16_t SetByteOrder(TypeByteOrder_t type, uint16_t *data);
    int32_t SetByteOrder(TypeByteOrder_t type, int32_t *data);
    uint32_t SetByteOrder(TypeByteOrder_t type, uint32_t *data);
    float SetByteOrder(TypeByteOrder_t type, float *data);

    void ConvertAndPrintCurrentData(QList<uint8_t> *data, uint16_t index);

private:
    Ui::AltSerialPort *ui;

    QSerialPort *m_SerialPort;

    QList<QString> m_L_COM;

    AltSerialPortQueue_t m_Queue;

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
