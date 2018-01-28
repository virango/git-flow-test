#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

  // fix this ugly bug
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
}
