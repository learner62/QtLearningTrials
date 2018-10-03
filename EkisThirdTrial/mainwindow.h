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
    void on_firstName_textEdited(const QString &arg1);
    void on_familyName_textEdited(const QString &arg1);
    void on_telephoneNumber_textEdited(const QString &arg1);
    void on_print_pressed();

    void on_actionPrint_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
