#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/shinygleam data recovery logo.jpg");
    int w = ui->label_2->width();
    int h = ui->label_2->height();

    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix(":/images/magnifying glass.png");
    w = ui->label_scan->width();
    h = ui->label_scan->height();

    ui->label_scan->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    QString folderPath = QFileDialog::getExistingDirectory(this, "Select Folder", QDir::homePath());
    if (!folderPath.isEmpty()) {
        // User selected a folder
        // Use folderPath as needed
        qDebug() << "Selected folder:" << folderPath;
    } else {
        // User cancelled the dialog
        qDebug() << "no folder selected";
    }
}


void MainWindow::on_pushButton_clicked()
{
    // scan the whole memory
}


void MainWindow::on_pushButton_4_clicked()
{
    QString folderPath = QFileDialog::getExistingDirectory(this, "Select Folder", QDir::homePath());
    if (!folderPath.isEmpty()) {
        // User selected a folder
        // Use folderPath as needed
        qDebug() << "Selected folder:" << folderPath;
    } else {
        // User cancelled the dialog
        qDebug() << "no folder selected";
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QApplication::quit();
}

