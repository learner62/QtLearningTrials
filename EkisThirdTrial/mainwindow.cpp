#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

extern QString firstName, familyName, telephoneNumber;

QString firstName = NULL, familyName = NULL, telephoneNumber = NULL;

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

void MainWindow::on_firstName_textEdited(const QString &arg1)
{
    firstName = arg1;
}

void MainWindow::on_familyName_textEdited(const QString &arg1)
{
    familyName = arg1;
}

void MainWindow::on_telephoneNumber_textEdited(const QString &arg1)
{
    telephoneNumber = arg1;
}

void MainWindow::on_print_pressed()
{
    qDebug() << "First name is " << firstName << endl;
    qDebug() << "Last name is " << familyName << endl;
    qDebug() << "Telephone number is " << telephoneNumber << endl;
}

void MainWindow::on_actionPrint_triggered()
{
    if (firstName != NULL)
        qDebug() << "First name is " << firstName << endl;
    else
        qDebug() << "First name not set." << endl;

    if (familyName != NULL)
        qDebug() << "Family name is " << familyName << endl;
    else
        qDebug() << "Family name not set." << endl;

    if (telephoneNumber != NULL)
        qDebug() << "Telephone number is " << telephoneNumber << endl;
    else
        qDebug() << "Telephone number not set." << endl;
}
