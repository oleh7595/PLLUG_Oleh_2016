#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;


    QPushButton *first = new QPushButton("Push me", &w);

    // Сигнально-слотові зєднання (інший синтаксис)
    //QObject::connect(first, &QPushButton::clicked, label,
                     //&QLabel::hide);

    w.show();

    qDebug() << "Programm srarted!";

    int result = a.exec();

    qDebug() << "Programm terminated!";

    return result;
}
