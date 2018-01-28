#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_MainWindow.h"
#include "StaticTest.h"

class MainWindow : public QMainWindow, public StaticTest
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);


private slots:
  void on_pushButton_2_toggled(bool checked);

  void on_pushButton_toggled(bool checked);

  void on_pushButton_3_toggled(bool checked);

private:
    Ui::MainWindow ui;
};

#endif // MAINWINDOW_H
