# Qt5.14.2 Serial Port

Для работы с надстройкой на встроенную библиотеку QSerialPort необходимо:
1) Скачать AltSerialPort(*.cpp, *.h и *.ui)

## Применение

После загрузки необходимых файлов и добавления их в окружение проекта необходимо:
1) В *.pro файле к QT       += core gui дописать serialbus serialport
2) В mainwindow.h подключить *.h файл надстройки #include "../../AltSerialPort.h" и создать приватную переменную-ссылку AltSerialPort   *m_AltSerialPort;
3) Создать GridLayout на mainwidnow.ui (необходимо для добавления AltSerialPort)
4) В mainwindow.cpp в конструкторе создаём объект класса AltSerialPort с помощью new и присваиваем возвращаемый указатель объявленному m_AltSerialPort (m_AltSerialPort = new AltSerialPort();)
5) Далее распологаем m_AltSerialPort в ранее созданном поле GridLayout с помощью функции addWidget (ui->gridLayout->addWidget(m_AltSerialPort);)
6) После подключаем создаем 2 коннекта на сигналы: RawDataReady(QByteArray) - присылает принятые данные; SendData() - вызывается каждые Timeout для отправки нового пакета из очереди

# Принцип работы с надстройкой продемонстирован в "нулевом" проекте в папке example
