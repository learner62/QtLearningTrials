#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_etunimi_textEdited(const QString &arg1);
    void on_sukunimi_textEdited(const QString &arg1);
    void on_puhelinnumero_textEdited(const QString &arg1);
    void on_tulosta_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
