#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_AltSerialPort = new AltSerialPort();

    ui->gridLayout->addWidget(m_AltSerialPort);

    connect(m_AltSerialPort, SIGNAL(RawDataReady(QByteArray)), this, SLOT(parse(QByteArray)));
    connect(m_AltSerialPort, SIGNAL(SendData()), this, SLOT(requestData()));

    /*
     * If you need to add a package to the queue
     * m_AltSerialPort->addQueue(QByteArray(data));
     */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::parse(QByteArray rawData)
{
    //The data is parsed here
    QDataStream dataStream(rawData);
    QList<unsigned char> data;

    for(uint32_t i=0; i<(uint32_t(rawData.size())); i++){
        data.append(0);
        dataStream >> data[i];
    }
}

void MainWindow::requestData()
{
    //Packets are sent from the queue here

    if(m_AltSerialPort->isQueueEmpty()){
        return;
    }

    AltSerialPortQueue_t t_AltSerialPortQueue = m_AltSerialPort->queueTakeFirst();
    m_AltSerialPort->writeData(t_AltSerialPortQueue.Data);
}

