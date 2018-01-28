#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    std::vector<char> test = {-5,-4,-3,-2,-1};
    test.insert(test.end(), mTest.begin(), mTest.end());
    int i = 0;
    i++;
}

void MainWindow::on_pushButton_2_toggled(bool checked)
{
  if(checked)
  {
    ui.pushButton->setChecked(false);
    ui.pushButton_3->setChecked(false);
  }
}

void MainWindow::on_pushButton_toggled(bool checked)
{
  if(checked)
  {
    ui.pushButton_2->setChecked(false);
    ui.pushButton_3->setChecked(false);
  }
}

void MainWindow::on_pushButton_3_toggled(bool checked)
{
  if(checked)
  {
    ui.pushButton->setChecked(false);
    ui.pushButton_2->setChecked(false);
  }
}
