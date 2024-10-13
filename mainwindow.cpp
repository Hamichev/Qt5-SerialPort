#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    //m_AltSerialPort = new AltSerialPort(ui->W_ForAltSerialPort);
}

MainWindow::~MainWindow()
{
    delete ui;
}

