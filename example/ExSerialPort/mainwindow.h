#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "../../AltSerialPort.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void parse(QByteArray rawData);
    void requestData();

private:
    Ui::MainWindow *ui;

    AltSerialPort   *m_AltSerialPort;
};
#endif // MAINWINDOW_H
