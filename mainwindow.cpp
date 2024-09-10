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

    QIcon icon(":/images/shinygleam data recovery logo.jpg");
    setWindowIcon(icon);
    setWindowTitle("SHINY GLEAM DataRecovery");

    QPixmap pixmap1(":/images/shinygleam data recovery logo.jpg");
    // int w = ui->label_2->width();
    // int h = ui->label_2->height();
    int w = 50;
    int h = 50;

    ui->label_2->setPixmap(pixmap1.scaled(w, h, Qt::KeepAspectRatio));



    QPixmap pixmap2(":/images/magnifying glass.png");
    w = ui->label_scan->width();
    h = ui->label_scan->height();

    ui->label_scan->setPixmap(pixmap2.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pixmap3(":/images/close.png");
    w = ui->label_close->width();
    h = ui->label_close->height();

    ui->label_close->setPixmap(pixmap3.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pixmap4(":/images/zondicons_refresh.png");
    w = ui->label_rescan->width();
    h = ui->label_rescan->height();

    ui->label_rescan->setPixmap(pixmap4.scaled(w, h, Qt::KeepAspectRatio));
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
        ui->textEdit_selectedFolder->setText(folderPath);
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
        ui->textEdit_destinationFolder->setText(folderPath);
    } else {
        // User cancelled the dialog
        qDebug() << "no folder selected";
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QApplication::quit();
}


void MainWindow::on_pushButton_scanSelected_clicked()
{
    QString sourcePath = ui->textEdit_destinationFolder->toPlainText();
    QString destinationPath = ui->textEdit_destinationFolder->toPlainText();

    if(sourcePath.isEmpty() || destinationPath.isEmpty()){
        ui->label_signal->setText("Path not Specified");
    }
    else{
        ui->label_signal->setText("Scaning please wait...");

        //implement ur data recovery logic here


    }
}

