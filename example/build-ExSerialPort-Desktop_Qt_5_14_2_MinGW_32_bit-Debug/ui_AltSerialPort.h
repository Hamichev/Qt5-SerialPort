/********************************************************************************
** Form generated from reading UI file 'AltSerialPort.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTSERIALPORT_H
#define UI_ALTSERIALPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AltSerialPort
{
public:
    QGroupBox *GB_AltSerialPort_SerialPort;
    QTabWidget *tabWidget;
    QWidget *COMTab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_20;
    QLabel *L_AltSerialPort_COM;
    QSpacerItem *horizontalSpacer_21;
    QComboBox *CB_AltSerialPort_COM;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *PB_AltSerialPort_RefreshCOMPort;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_10;
    QLabel *L_AltSerialPort_Baudrate;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *CB_AltSerialPort_BaudRate;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_12;
    QLabel *L_AltSerialPort_DataBits;
    QSpacerItem *horizontalSpacer_13;
    QComboBox *CB_AltSerialPort_DataBits;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_14;
    QLabel *L_AltSerialPort_Parity;
    QSpacerItem *horizontalSpacer_15;
    QComboBox *CB_AltSerialPort_Parity;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_16;
    QLabel *L_AltSerialPort_StopBits;
    QSpacerItem *horizontalSpacer_17;
    QComboBox *CB_AltSerialPort_StopBits;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_18;
    QLabel *L_AltSerialPort_FlowControl;
    QSpacerItem *horizontalSpacer_19;
    QComboBox *CB_AltSerialPort_FlowControl;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_22;
    QLabel *L_AltSerialPort_Timeout;
    QSpacerItem *horizontalSpacer_23;
    QLineEdit *CB_AltSerialPort_Timeout;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *PB_AltSerialPort_ConnectSerialPort;
    QSpacerItem *horizontalSpacer_8;
    QLabel *L_AltSerialPort_StateConnect;
    QLineEdit *LE_AltSerialPort_StateConnect;
    QWidget *ParseTab;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_24;
    QComboBox *CB_AltSerialPort_Parse_Packets;
    QPushButton *PB_AltSerialPort_Parse_ReadPackets;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_25;
    QTextEdit *TE_AltSerialPort_Parse_Packet;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_22;
    QPushButton *PB_AltSerialPort_Parse_Back;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *LE_AltSerialPort_Parse_Char;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_13;
    QLineEdit *LE_AltSerialPort_Parse_UInt8;
    QLineEdit *LE_AltSerialPort_Parse_Int8;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *LE_AltSerialPort_Parse_UInt16;
    QLineEdit *LE_AltSerialPort_Parse_Int16;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_6;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *LE_AltSerialPort_Parse_UInt32;
    QComboBox *CB_AltSerialPort_Parse_FormatUInt32;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_7;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_19;
    QLineEdit *LE_AltSerialPort_Parse_Int32;
    QComboBox *CB_AltSerialPort_Parse_FormatInt32;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_8;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_21;
    QLineEdit *LE_AltSerialPort_Parse_Float;
    QComboBox *CB_AltSerialPort_Parse_FormatFloat;
    QVBoxLayout *verticalLayout_23;
    QPushButton *PB_AltSerialPort_Parse_Next;
    QSpacerItem *horizontalSpacer_4;
    QWidget *WriteTab;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_28;
    QLineEdit *LE_AltSerialPort_Write_Packet;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_26;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *PB_AltSerialPort_Write_Back;
    QLineEdit *LE_AltSerialPort_Write_Symbol;
    QPushButton *PB_AltSerialPort_Write_Next;
    QSpacerItem *horizontalSpacer_26;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *PB_AltSerialPort_Write_WriteSymbol;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_12;
    QLabel *L_AltSerialPort_Write_Preview;
    QLineEdit *LE_AltSerialPort_Write_Preview;
    QSpacerItem *horizontalSpacer_25;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *PB_AltSerialPort_Write_WritePacket;

    void setupUi(QWidget *AltSerialPort)
    {
        if (AltSerialPort->objectName().isEmpty())
            AltSerialPort->setObjectName(QString::fromUtf8("AltSerialPort"));
        AltSerialPort->resize(809, 159);
        GB_AltSerialPort_SerialPort = new QGroupBox(AltSerialPort);
        GB_AltSerialPort_SerialPort->setObjectName(QString::fromUtf8("GB_AltSerialPort_SerialPort"));
        GB_AltSerialPort_SerialPort->setGeometry(QRect(10, 0, 791, 151));
        tabWidget = new QTabWidget(GB_AltSerialPort_SerialPort);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 771, 121));
        COMTab = new QWidget();
        COMTab->setObjectName(QString::fromUtf8("COMTab"));
        layoutWidget = new QWidget(COMTab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 751, 91));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_20);

        L_AltSerialPort_COM = new QLabel(layoutWidget);
        L_AltSerialPort_COM->setObjectName(QString::fromUtf8("L_AltSerialPort_COM"));
        L_AltSerialPort_COM->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(L_AltSerialPort_COM);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_21);


        verticalLayout_11->addLayout(horizontalLayout);

        CB_AltSerialPort_COM = new QComboBox(layoutWidget);
        CB_AltSerialPort_COM->setObjectName(QString::fromUtf8("CB_AltSerialPort_COM"));

        verticalLayout_11->addWidget(CB_AltSerialPort_COM);


        horizontalLayout_9->addLayout(verticalLayout_11);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        PB_AltSerialPort_RefreshCOMPort = new QPushButton(layoutWidget);
        PB_AltSerialPort_RefreshCOMPort->setObjectName(QString::fromUtf8("PB_AltSerialPort_RefreshCOMPort"));

        verticalLayout_3->addWidget(PB_AltSerialPort_RefreshCOMPort);


        horizontalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        L_AltSerialPort_Baudrate = new QLabel(layoutWidget);
        L_AltSerialPort_Baudrate->setObjectName(QString::fromUtf8("L_AltSerialPort_Baudrate"));
        L_AltSerialPort_Baudrate->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(L_AltSerialPort_Baudrate);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);


        verticalLayout_6->addLayout(horizontalLayout_2);

        CB_AltSerialPort_BaudRate = new QComboBox(layoutWidget);
        CB_AltSerialPort_BaudRate->addItem(QString());
        CB_AltSerialPort_BaudRate->addItem(QString());
        CB_AltSerialPort_BaudRate->addItem(QString());
        CB_AltSerialPort_BaudRate->addItem(QString());
        CB_AltSerialPort_BaudRate->addItem(QString());
        CB_AltSerialPort_BaudRate->addItem(QString());
        CB_AltSerialPort_BaudRate->addItem(QString());
        CB_AltSerialPort_BaudRate->addItem(QString());
        CB_AltSerialPort_BaudRate->setObjectName(QString::fromUtf8("CB_AltSerialPort_BaudRate"));

        verticalLayout_6->addWidget(CB_AltSerialPort_BaudRate);


        horizontalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        L_AltSerialPort_DataBits = new QLabel(layoutWidget);
        L_AltSerialPort_DataBits->setObjectName(QString::fromUtf8("L_AltSerialPort_DataBits"));
        L_AltSerialPort_DataBits->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(L_AltSerialPort_DataBits);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_13);


        verticalLayout_7->addLayout(horizontalLayout_3);

        CB_AltSerialPort_DataBits = new QComboBox(layoutWidget);
        CB_AltSerialPort_DataBits->addItem(QString());
        CB_AltSerialPort_DataBits->addItem(QString());
        CB_AltSerialPort_DataBits->addItem(QString());
        CB_AltSerialPort_DataBits->addItem(QString());
        CB_AltSerialPort_DataBits->setObjectName(QString::fromUtf8("CB_AltSerialPort_DataBits"));

        verticalLayout_7->addWidget(CB_AltSerialPort_DataBits);


        horizontalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);

        L_AltSerialPort_Parity = new QLabel(layoutWidget);
        L_AltSerialPort_Parity->setObjectName(QString::fromUtf8("L_AltSerialPort_Parity"));
        L_AltSerialPort_Parity->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(L_AltSerialPort_Parity);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_15);


        verticalLayout_8->addLayout(horizontalLayout_4);

        CB_AltSerialPort_Parity = new QComboBox(layoutWidget);
        CB_AltSerialPort_Parity->addItem(QString());
        CB_AltSerialPort_Parity->addItem(QString());
        CB_AltSerialPort_Parity->addItem(QString());
        CB_AltSerialPort_Parity->addItem(QString());
        CB_AltSerialPort_Parity->addItem(QString());
        CB_AltSerialPort_Parity->addItem(QString());
        CB_AltSerialPort_Parity->setObjectName(QString::fromUtf8("CB_AltSerialPort_Parity"));

        verticalLayout_8->addWidget(CB_AltSerialPort_Parity);


        horizontalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_16);

        L_AltSerialPort_StopBits = new QLabel(layoutWidget);
        L_AltSerialPort_StopBits->setObjectName(QString::fromUtf8("L_AltSerialPort_StopBits"));
        L_AltSerialPort_StopBits->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(L_AltSerialPort_StopBits);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_17);


        verticalLayout_9->addLayout(horizontalLayout_11);

        CB_AltSerialPort_StopBits = new QComboBox(layoutWidget);
        CB_AltSerialPort_StopBits->addItem(QString());
        CB_AltSerialPort_StopBits->addItem(QString());
        CB_AltSerialPort_StopBits->addItem(QString());
        CB_AltSerialPort_StopBits->addItem(QString());
        CB_AltSerialPort_StopBits->setObjectName(QString::fromUtf8("CB_AltSerialPort_StopBits"));

        verticalLayout_9->addWidget(CB_AltSerialPort_StopBits);


        horizontalLayout_9->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_18);

        L_AltSerialPort_FlowControl = new QLabel(layoutWidget);
        L_AltSerialPort_FlowControl->setObjectName(QString::fromUtf8("L_AltSerialPort_FlowControl"));
        L_AltSerialPort_FlowControl->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(L_AltSerialPort_FlowControl);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_19);


        verticalLayout_10->addLayout(horizontalLayout_13);

        CB_AltSerialPort_FlowControl = new QComboBox(layoutWidget);
        CB_AltSerialPort_FlowControl->addItem(QString());
        CB_AltSerialPort_FlowControl->addItem(QString());
        CB_AltSerialPort_FlowControl->addItem(QString());
        CB_AltSerialPort_FlowControl->setObjectName(QString::fromUtf8("CB_AltSerialPort_FlowControl"));

        verticalLayout_10->addWidget(CB_AltSerialPort_FlowControl);


        horizontalLayout_9->addLayout(verticalLayout_10);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_22);

        L_AltSerialPort_Timeout = new QLabel(layoutWidget);
        L_AltSerialPort_Timeout->setObjectName(QString::fromUtf8("L_AltSerialPort_Timeout"));
        L_AltSerialPort_Timeout->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(L_AltSerialPort_Timeout);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_23);


        verticalLayout_12->addLayout(horizontalLayout_14);

        CB_AltSerialPort_Timeout = new QLineEdit(layoutWidget);
        CB_AltSerialPort_Timeout->setObjectName(QString::fromUtf8("CB_AltSerialPort_Timeout"));
        CB_AltSerialPort_Timeout->setAlignment(Qt::AlignCenter);
        CB_AltSerialPort_Timeout->setReadOnly(false);

        verticalLayout_12->addWidget(CB_AltSerialPort_Timeout);


        horizontalLayout_9->addLayout(verticalLayout_12);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        PB_AltSerialPort_ConnectSerialPort = new QPushButton(layoutWidget);
        PB_AltSerialPort_ConnectSerialPort->setObjectName(QString::fromUtf8("PB_AltSerialPort_ConnectSerialPort"));

        horizontalLayout_10->addWidget(PB_AltSerialPort_ConnectSerialPort);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        L_AltSerialPort_StateConnect = new QLabel(layoutWidget);
        L_AltSerialPort_StateConnect->setObjectName(QString::fromUtf8("L_AltSerialPort_StateConnect"));

        horizontalLayout_10->addWidget(L_AltSerialPort_StateConnect);

        LE_AltSerialPort_StateConnect = new QLineEdit(layoutWidget);
        LE_AltSerialPort_StateConnect->setObjectName(QString::fromUtf8("LE_AltSerialPort_StateConnect"));
        LE_AltSerialPort_StateConnect->setReadOnly(true);

        horizontalLayout_10->addWidget(LE_AltSerialPort_StateConnect);


        verticalLayout_4->addLayout(horizontalLayout_10);

        tabWidget->addTab(COMTab, QString());
        ParseTab = new QWidget();
        ParseTab->setObjectName(QString::fromUtf8("ParseTab"));
        layoutWidget1 = new QWidget(ParseTab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 751, 91));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        CB_AltSerialPort_Parse_Packets = new QComboBox(layoutWidget1);
        CB_AltSerialPort_Parse_Packets->setObjectName(QString::fromUtf8("CB_AltSerialPort_Parse_Packets"));
        CB_AltSerialPort_Parse_Packets->setMaximumSize(QSize(60, 16777215));
        CB_AltSerialPort_Parse_Packets->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        verticalLayout_24->addWidget(CB_AltSerialPort_Parse_Packets);

        PB_AltSerialPort_Parse_ReadPackets = new QPushButton(layoutWidget1);
        PB_AltSerialPort_Parse_ReadPackets->setObjectName(QString::fromUtf8("PB_AltSerialPort_Parse_ReadPackets"));
        PB_AltSerialPort_Parse_ReadPackets->setMaximumSize(QSize(60, 16777215));

        verticalLayout_24->addWidget(PB_AltSerialPort_Parse_ReadPackets);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_24->addItem(horizontalSpacer_5);


        horizontalLayout_6->addLayout(verticalLayout_24);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        TE_AltSerialPort_Parse_Packet = new QTextEdit(layoutWidget1);
        TE_AltSerialPort_Parse_Packet->setObjectName(QString::fromUtf8("TE_AltSerialPort_Parse_Packet"));
        TE_AltSerialPort_Parse_Packet->setMaximumSize(QSize(16777215, 20));
        TE_AltSerialPort_Parse_Packet->setFrameShape(QFrame::Box);
        TE_AltSerialPort_Parse_Packet->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TE_AltSerialPort_Parse_Packet->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TE_AltSerialPort_Parse_Packet->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        TE_AltSerialPort_Parse_Packet->setReadOnly(true);

        verticalLayout_25->addWidget(TE_AltSerialPort_Parse_Packet);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        PB_AltSerialPort_Parse_Back = new QPushButton(layoutWidget1);
        PB_AltSerialPort_Parse_Back->setObjectName(QString::fromUtf8("PB_AltSerialPort_Parse_Back"));
        PB_AltSerialPort_Parse_Back->setMaximumSize(QSize(40, 16777215));

        verticalLayout_22->addWidget(PB_AltSerialPort_Parse_Back);

        horizontalSpacer_3 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_22->addItem(horizontalSpacer_3);


        horizontalLayout_5->addLayout(verticalLayout_22);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LE_AltSerialPort_Parse_Char = new QLineEdit(layoutWidget1);
        LE_AltSerialPort_Parse_Char->setObjectName(QString::fromUtf8("LE_AltSerialPort_Parse_Char"));
        LE_AltSerialPort_Parse_Char->setMaximumSize(QSize(30, 16777215));
        LE_AltSerialPort_Parse_Char->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LE_AltSerialPort_Parse_Char);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_5->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        LE_AltSerialPort_Parse_UInt8 = new QLineEdit(layoutWidget1);
        LE_AltSerialPort_Parse_UInt8->setObjectName(QString::fromUtf8("LE_AltSerialPort_Parse_UInt8"));
        LE_AltSerialPort_Parse_UInt8->setMaximumSize(QSize(30, 16777215));
        LE_AltSerialPort_Parse_UInt8->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(LE_AltSerialPort_Parse_UInt8);

        LE_AltSerialPort_Parse_Int8 = new QLineEdit(layoutWidget1);
        LE_AltSerialPort_Parse_Int8->setObjectName(QString::fromUtf8("LE_AltSerialPort_Parse_Int8"));
        LE_AltSerialPort_Parse_Int8->setMaximumSize(QSize(30, 16777215));
        LE_AltSerialPort_Parse_Int8->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(LE_AltSerialPort_Parse_Int8);


        horizontalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_14->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_14->addWidget(label_5);


        horizontalLayout_5->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        LE_AltSerialPort_Parse_UInt16 = new QLineEdit(layoutWidget1);
        LE_AltSerialPort_Parse_UInt16->setObjectName(QString::fromUtf8("LE_AltSerialPort_Parse_UInt16"));
        LE_AltSerialPort_Parse_UInt16->setMaximumSize(QSize(45, 16777215));
        LE_AltSerialPort_Parse_UInt16->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(LE_AltSerialPort_Parse_UInt16);

        LE_AltSerialPort_Parse_Int16 = new QLineEdit(layoutWidget1);
        LE_AltSerialPort_Parse_Int16->setObjectName(QString::fromUtf8("LE_AltSerialPort_Parse_Int16"));
        LE_AltSerialPort_Parse_Int16->setMaximumSize(QSize(45, 16777215));
        LE_AltSerialPort_Parse_Int16->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(LE_AltSerialPort_Parse_Int16);


        horizontalLayout_5->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_16->addWidget(label_6);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_16->addWidget(label_9);


        horizontalLayout_5->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        LE_AltSerialPort_Parse_UInt32 = new QLineEdit(layoutWidget1);
        LE_AltSerialPort_Parse_UInt32->setObjectName(QString::fromUtf8("LE_AltSerialPort_Parse_UInt32"));
        LE_AltSerialPort_Parse_UInt32->setMaximumSize(QSize(80, 16777215));
        LE_AltSerialPort_Parse_UInt32->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(LE_AltSerialPort_Parse_UInt32);

        CB_AltSerialPort_Parse_FormatUInt32 = new QComboBox(layoutWidget1);
        CB_AltSerialPort_Parse_FormatUInt32->addItem(QString());
        CB_AltSerialPort_Parse_FormatUInt32->addItem(QString());
        CB_AltSerialPort_Parse_FormatUInt32->addItem(QString());
        CB_AltSerialPort_Parse_FormatUInt32->addItem(QString());
        CB_AltSerialPort_Parse_FormatUInt32->setObjectName(QString::fromUtf8("CB_AltSerialPort_Parse_FormatUInt32"));
        CB_AltSerialPort_Parse_FormatUInt32->setMaximumSize(QSize(60, 16777215));

        verticalLayout_17->addWidget(CB_AltSerialPort_Parse_FormatUInt32);


        horizontalLayout_5->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_18->addWidget(label_7);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_18->addWidget(label_10);


        horizontalLayout_5->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        LE_AltSerialPort_Parse_Int32 = new QLineEdit(layoutWidget1);
        LE_AltSerialPort_Parse_Int32->setObjectName(QString::fromUtf8("LE_AltSerialPort_Parse_Int32"));
        LE_AltSerialPort_Parse_Int32->setMaximumSize(QSize(80, 16777215));
        LE_AltSerialPort_Parse_Int32->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(LE_AltSerialPort_Parse_Int32);

        CB_AltSerialPort_Parse_FormatInt32 = new QComboBox(layoutWidget1);
        CB_AltSerialPort_Parse_FormatInt32->addItem(QString());
        CB_AltSerialPort_Parse_FormatInt32->addItem(QString());
        CB_AltSerialPort_Parse_FormatInt32->addItem(QString());
        CB_AltSerialPort_Parse_FormatInt32->addItem(QString());
        CB_AltSerialPort_Parse_FormatInt32->setObjectName(QString::fromUtf8("CB_AltSerialPort_Parse_FormatInt32"));
        CB_AltSerialPort_Parse_FormatInt32->setMaximumSize(QSize(60, 16777215));

        verticalLayout_19->addWidget(CB_AltSerialPort_Parse_FormatInt32);


        horizontalLayout_5->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_20->addWidget(label_8);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_20->addWidget(label_11);


        horizontalLayout_5->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        LE_AltSerialPort_Parse_Float = new QLineEdit(layoutWidget1);
        LE_AltSerialPort_Parse_Float->setObjectName(QString::fromUtf8("LE_AltSerialPort_Parse_Float"));
        LE_AltSerialPort_Parse_Float->setMaximumSize(QSize(80, 16777215));
        LE_AltSerialPort_Parse_Float->setAlignment(Qt::AlignCenter);

        verticalLayout_21->addWidget(LE_AltSerialPort_Parse_Float);

        CB_AltSerialPort_Parse_FormatFloat = new QComboBox(layoutWidget1);
        CB_AltSerialPort_Parse_FormatFloat->addItem(QString());
        CB_AltSerialPort_Parse_FormatFloat->addItem(QString());
        CB_AltSerialPort_Parse_FormatFloat->addItem(QString());
        CB_AltSerialPort_Parse_FormatFloat->addItem(QString());
        CB_AltSerialPort_Parse_FormatFloat->setObjectName(QString::fromUtf8("CB_AltSerialPort_Parse_FormatFloat"));
        CB_AltSerialPort_Parse_FormatFloat->setMaximumSize(QSize(60, 16777215));

        verticalLayout_21->addWidget(CB_AltSerialPort_Parse_FormatFloat);


        horizontalLayout_5->addLayout(verticalLayout_21);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        PB_AltSerialPort_Parse_Next = new QPushButton(layoutWidget1);
        PB_AltSerialPort_Parse_Next->setObjectName(QString::fromUtf8("PB_AltSerialPort_Parse_Next"));
        PB_AltSerialPort_Parse_Next->setMaximumSize(QSize(40, 16777215));

        verticalLayout_23->addWidget(PB_AltSerialPort_Parse_Next);

        horizontalSpacer_4 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_23->addItem(horizontalSpacer_4);


        horizontalLayout_5->addLayout(verticalLayout_23);


        verticalLayout_25->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_25);

        tabWidget->addTab(ParseTab, QString());
        WriteTab = new QWidget();
        WriteTab->setObjectName(QString::fromUtf8("WriteTab"));
        layoutWidget2 = new QWidget(WriteTab);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(8, 0, 751, 91));
        verticalLayout_28 = new QVBoxLayout(layoutWidget2);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        LE_AltSerialPort_Write_Packet = new QLineEdit(layoutWidget2);
        LE_AltSerialPort_Write_Packet->setObjectName(QString::fromUtf8("LE_AltSerialPort_Write_Packet"));
        LE_AltSerialPort_Write_Packet->setAlignment(Qt::AlignCenter);

        verticalLayout_28->addWidget(LE_AltSerialPort_Write_Packet);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_27);

        PB_AltSerialPort_Write_Back = new QPushButton(layoutWidget2);
        PB_AltSerialPort_Write_Back->setObjectName(QString::fromUtf8("PB_AltSerialPort_Write_Back"));
        PB_AltSerialPort_Write_Back->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_7->addWidget(PB_AltSerialPort_Write_Back);

        LE_AltSerialPort_Write_Symbol = new QLineEdit(layoutWidget2);
        LE_AltSerialPort_Write_Symbol->setObjectName(QString::fromUtf8("LE_AltSerialPort_Write_Symbol"));
        LE_AltSerialPort_Write_Symbol->setMaximumSize(QSize(50, 16777215));
        LE_AltSerialPort_Write_Symbol->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(LE_AltSerialPort_Write_Symbol);

        PB_AltSerialPort_Write_Next = new QPushButton(layoutWidget2);
        PB_AltSerialPort_Write_Next->setObjectName(QString::fromUtf8("PB_AltSerialPort_Write_Next"));
        PB_AltSerialPort_Write_Next->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_7->addWidget(PB_AltSerialPort_Write_Next);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_26);


        verticalLayout_26->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        PB_AltSerialPort_Write_WriteSymbol = new QPushButton(layoutWidget2);
        PB_AltSerialPort_Write_WriteSymbol->setObjectName(QString::fromUtf8("PB_AltSerialPort_Write_WriteSymbol"));
        PB_AltSerialPort_Write_WriteSymbol->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_8->addWidget(PB_AltSerialPort_Write_WriteSymbol);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_26->addLayout(horizontalLayout_8);


        horizontalLayout_16->addLayout(verticalLayout_26);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        L_AltSerialPort_Write_Preview = new QLabel(layoutWidget2);
        L_AltSerialPort_Write_Preview->setObjectName(QString::fromUtf8("L_AltSerialPort_Write_Preview"));

        horizontalLayout_12->addWidget(L_AltSerialPort_Write_Preview);

        LE_AltSerialPort_Write_Preview = new QLineEdit(layoutWidget2);
        LE_AltSerialPort_Write_Preview->setObjectName(QString::fromUtf8("LE_AltSerialPort_Write_Preview"));
        LE_AltSerialPort_Write_Preview->setMaximumSize(QSize(30, 16777215));
        LE_AltSerialPort_Write_Preview->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(LE_AltSerialPort_Write_Preview);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_25);


        verticalLayout_27->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_9);

        PB_AltSerialPort_Write_WritePacket = new QPushButton(layoutWidget2);
        PB_AltSerialPort_Write_WritePacket->setObjectName(QString::fromUtf8("PB_AltSerialPort_Write_WritePacket"));
        PB_AltSerialPort_Write_WritePacket->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_15->addWidget(PB_AltSerialPort_Write_WritePacket);


        verticalLayout_27->addLayout(horizontalLayout_15);


        horizontalLayout_16->addLayout(verticalLayout_27);


        verticalLayout_28->addLayout(horizontalLayout_16);

        tabWidget->addTab(WriteTab, QString());

        retranslateUi(AltSerialPort);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AltSerialPort);
    } // setupUi

    void retranslateUi(QWidget *AltSerialPort)
    {
        AltSerialPort->setWindowTitle(QCoreApplication::translate("AltSerialPort", "Form", nullptr));
        GB_AltSerialPort_SerialPort->setTitle(QCoreApplication::translate("AltSerialPort", "SerialPort", nullptr));
        L_AltSerialPort_COM->setText(QCoreApplication::translate("AltSerialPort", "COM", nullptr));
        PB_AltSerialPort_RefreshCOMPort->setText(QCoreApplication::translate("AltSerialPort", "Refresh", nullptr));
        L_AltSerialPort_Baudrate->setText(QCoreApplication::translate("AltSerialPort", "BaudRate", nullptr));
        CB_AltSerialPort_BaudRate->setItemText(0, QCoreApplication::translate("AltSerialPort", "1200", nullptr));
        CB_AltSerialPort_BaudRate->setItemText(1, QCoreApplication::translate("AltSerialPort", "2400", nullptr));
        CB_AltSerialPort_BaudRate->setItemText(2, QCoreApplication::translate("AltSerialPort", "4800", nullptr));
        CB_AltSerialPort_BaudRate->setItemText(3, QCoreApplication::translate("AltSerialPort", "9600", nullptr));
        CB_AltSerialPort_BaudRate->setItemText(4, QCoreApplication::translate("AltSerialPort", "19200", nullptr));
        CB_AltSerialPort_BaudRate->setItemText(5, QCoreApplication::translate("AltSerialPort", "38400", nullptr));
        CB_AltSerialPort_BaudRate->setItemText(6, QCoreApplication::translate("AltSerialPort", "57600", nullptr));
        CB_AltSerialPort_BaudRate->setItemText(7, QCoreApplication::translate("AltSerialPort", "115200", nullptr));

        L_AltSerialPort_DataBits->setText(QCoreApplication::translate("AltSerialPort", "DataBits", nullptr));
        CB_AltSerialPort_DataBits->setItemText(0, QCoreApplication::translate("AltSerialPort", "Data5", nullptr));
        CB_AltSerialPort_DataBits->setItemText(1, QCoreApplication::translate("AltSerialPort", "Data6", nullptr));
        CB_AltSerialPort_DataBits->setItemText(2, QCoreApplication::translate("AltSerialPort", "Data7", nullptr));
        CB_AltSerialPort_DataBits->setItemText(3, QCoreApplication::translate("AltSerialPort", "Data8", nullptr));

        L_AltSerialPort_Parity->setText(QCoreApplication::translate("AltSerialPort", "Parity", nullptr));
        CB_AltSerialPort_Parity->setItemText(0, QCoreApplication::translate("AltSerialPort", "NoParity", nullptr));
        CB_AltSerialPort_Parity->setItemText(1, QCoreApplication::translate("AltSerialPort", "-", nullptr));
        CB_AltSerialPort_Parity->setItemText(2, QCoreApplication::translate("AltSerialPort", "EvenParity", nullptr));
        CB_AltSerialPort_Parity->setItemText(3, QCoreApplication::translate("AltSerialPort", "OddParity", nullptr));
        CB_AltSerialPort_Parity->setItemText(4, QCoreApplication::translate("AltSerialPort", "SpaceParity", nullptr));
        CB_AltSerialPort_Parity->setItemText(5, QCoreApplication::translate("AltSerialPort", "MarkParity", nullptr));

        L_AltSerialPort_StopBits->setText(QCoreApplication::translate("AltSerialPort", "StopBits", nullptr));
        CB_AltSerialPort_StopBits->setItemText(0, QCoreApplication::translate("AltSerialPort", "-", nullptr));
        CB_AltSerialPort_StopBits->setItemText(1, QCoreApplication::translate("AltSerialPort", "OneStop", nullptr));
        CB_AltSerialPort_StopBits->setItemText(2, QCoreApplication::translate("AltSerialPort", "TwoStop", nullptr));
        CB_AltSerialPort_StopBits->setItemText(3, QCoreApplication::translate("AltSerialPort", "OneAndHalfStop", nullptr));

        L_AltSerialPort_FlowControl->setText(QCoreApplication::translate("AltSerialPort", "FlowControl", nullptr));
        CB_AltSerialPort_FlowControl->setItemText(0, QCoreApplication::translate("AltSerialPort", "NoFlowControl", nullptr));
        CB_AltSerialPort_FlowControl->setItemText(1, QCoreApplication::translate("AltSerialPort", "HardwareControl", nullptr));
        CB_AltSerialPort_FlowControl->setItemText(2, QCoreApplication::translate("AltSerialPort", "SoftwareControl", nullptr));

        L_AltSerialPort_Timeout->setText(QCoreApplication::translate("AltSerialPort", "Timeout", nullptr));
        CB_AltSerialPort_Timeout->setText(QCoreApplication::translate("AltSerialPort", "100", nullptr));
        PB_AltSerialPort_ConnectSerialPort->setText(QCoreApplication::translate("AltSerialPort", "Connect", nullptr));
        L_AltSerialPort_StateConnect->setText(QCoreApplication::translate("AltSerialPort", "State:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(COMTab), QCoreApplication::translate("AltSerialPort", "COM", nullptr));
        PB_AltSerialPort_Parse_ReadPackets->setText(QCoreApplication::translate("AltSerialPort", "Read", nullptr));
        PB_AltSerialPort_Parse_Back->setText(QCoreApplication::translate("AltSerialPort", "Back", nullptr));
        label->setText(QCoreApplication::translate("AltSerialPort", "Char", nullptr));
        label_2->setText(QCoreApplication::translate("AltSerialPort", "UInt8", nullptr));
        label_3->setText(QCoreApplication::translate("AltSerialPort", "Int8", nullptr));
        label_4->setText(QCoreApplication::translate("AltSerialPort", "UInt16", nullptr));
        label_5->setText(QCoreApplication::translate("AltSerialPort", "Int16", nullptr));
        label_6->setText(QCoreApplication::translate("AltSerialPort", "UInt32", nullptr));
        label_9->setText(QCoreApplication::translate("AltSerialPort", "Format:", nullptr));
        CB_AltSerialPort_Parse_FormatUInt32->setItemText(0, QCoreApplication::translate("AltSerialPort", "Big endian", nullptr));
        CB_AltSerialPort_Parse_FormatUInt32->setItemText(1, QCoreApplication::translate("AltSerialPort", "Little endian", nullptr));
        CB_AltSerialPort_Parse_FormatUInt32->setItemText(2, QCoreApplication::translate("AltSerialPort", "Big endian Byte swap", nullptr));
        CB_AltSerialPort_Parse_FormatUInt32->setItemText(3, QCoreApplication::translate("AltSerialPort", "Little endian Byte swap", nullptr));

        label_7->setText(QCoreApplication::translate("AltSerialPort", "Int32", nullptr));
        label_10->setText(QCoreApplication::translate("AltSerialPort", "Format:", nullptr));
        CB_AltSerialPort_Parse_FormatInt32->setItemText(0, QCoreApplication::translate("AltSerialPort", "Big endian", nullptr));
        CB_AltSerialPort_Parse_FormatInt32->setItemText(1, QCoreApplication::translate("AltSerialPort", "Little endian", nullptr));
        CB_AltSerialPort_Parse_FormatInt32->setItemText(2, QCoreApplication::translate("AltSerialPort", "Big endian Byte swap", nullptr));
        CB_AltSerialPort_Parse_FormatInt32->setItemText(3, QCoreApplication::translate("AltSerialPort", "Little endian Byte swap", nullptr));

        label_8->setText(QCoreApplication::translate("AltSerialPort", "Float", nullptr));
        label_11->setText(QCoreApplication::translate("AltSerialPort", "Format:", nullptr));
        CB_AltSerialPort_Parse_FormatFloat->setItemText(0, QCoreApplication::translate("AltSerialPort", "Big endian", nullptr));
        CB_AltSerialPort_Parse_FormatFloat->setItemText(1, QCoreApplication::translate("AltSerialPort", "Little endian", nullptr));
        CB_AltSerialPort_Parse_FormatFloat->setItemText(2, QCoreApplication::translate("AltSerialPort", "Big endian Byte swap", nullptr));
        CB_AltSerialPort_Parse_FormatFloat->setItemText(3, QCoreApplication::translate("AltSerialPort", "Little endian Byte swap", nullptr));

        PB_AltSerialPort_Parse_Next->setText(QCoreApplication::translate("AltSerialPort", "Next", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ParseTab), QCoreApplication::translate("AltSerialPort", "Parse", nullptr));
        PB_AltSerialPort_Write_Back->setText(QCoreApplication::translate("AltSerialPort", "Back", nullptr));
        LE_AltSerialPort_Write_Symbol->setText(QCoreApplication::translate("AltSerialPort", "1", nullptr));
        PB_AltSerialPort_Write_Next->setText(QCoreApplication::translate("AltSerialPort", "Next", nullptr));
        PB_AltSerialPort_Write_WriteSymbol->setText(QCoreApplication::translate("AltSerialPort", "Write Symbol", nullptr));
        L_AltSerialPort_Write_Preview->setText(QCoreApplication::translate("AltSerialPort", "Preview", nullptr));
        PB_AltSerialPort_Write_WritePacket->setText(QCoreApplication::translate("AltSerialPort", "Write Packet", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(WriteTab), QCoreApplication::translate("AltSerialPort", "Write", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AltSerialPort: public Ui_AltSerialPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTSERIALPORT_H
