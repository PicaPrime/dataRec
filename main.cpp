#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // w.setFixedSize(640, 480);
    w.setWindowTitle("Shinygleam Dta Rcovery");

    QIcon icon(":/images/shinygleam data recovery logo.jpg");  // Make sure the icon file exists at this path
    w.setWindowIcon(icon);

    w.show();

    return a.exec();
}
