#include "mainwindow.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QLabel *label = new QLabel("Hello");

    QFont font = label->font();
    font.setPointSize(30);
    font.setBold(true);
    label->setFont(font);

    label->setAlignment(Qt::AlignHCenter | Qt::AlignCenter);

    setCentralWidget(label);
}

MainWindow::~MainWindow()
{

}
