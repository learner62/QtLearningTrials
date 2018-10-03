#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

extern QString etunimi, sukunimi, puhelinnumero;

QString etunimi, sukunimi, puhelinnumero;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_etunimi_textEdited(const QString &arg1)
{
    etunimi = arg1;
}

void MainWindow::on_sukunimi_textEdited(const QString &arg1)
{
    sukunimi = arg1;
}

void MainWindow::on_puhelinnumero_textEdited(const QString &arg1)
{
    puhelinnumero = arg1;
}

void MainWindow::on_tulosta_pressed()
{
    qDebug() << "Etunimi on " << etunimi << endl;
    qDebug() << "Sukunimi on " << sukunimi << endl;
    qDebug() << "Puhelinnumero on " << puhelinnumero<< endl;
}
