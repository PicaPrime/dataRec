#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include<QPixmap>
#include<QDesktopServices>

// #include "ui_MainWindow.h"
#include "DiskScanner.h"
#include "MP4Recovery.h"
#include <QMessageBox>
#include "dialog_selectedscan.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int w;
    int h;
    QPixmap pixmap_label_deepScan(":/images/deep scan.png");
    w = ui->label_deepScan->width();
    h = ui->label_deepScan->height();

    ui->label_deepScan->setPixmap(pixmap_label_deepScan.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pixmap_label_partitionScan(":/images/partition scan.png");
    w = ui->label_partitionScan->width();
    h = ui->label_partitionScan->height();

    ui->label_partitionScan->setPixmap(pixmap_label_partitionScan.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pixmap_label_selectedDriveScan(":/images/selected drive scan.png");
    w = ui->label_selectedDriveScan->width();
    h = ui->label_selectedDriveScan->height();

    ui->label_selectedDriveScan->setPixmap(pixmap_label_selectedDriveScan.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


// void MainWindow::on_pushButton_scanSelected_clicked()
// {
//     // QString sourcePath = ui->textEdit_selectedFolder->toPlainText();
//     // QString destinationPath = ui->textEdit_destinationFolder->toPlainText();

//     // if(sourcePath.isEmpty() || destinationPath.isEmpty()){
//     //     ui->label_signal->setText("Path not Specified");
//     // }
//     // else{
//     //     ui->label_signal->setText("Scaning please wait...");

//     //     //implement ur data recovery logic here


//     // }

//     // ---------------------------------------- code from shamim bhai -------------------------------------------------------------------------------

//     // QString drive = ui->drivePathEdit->text();
//     QString drive = ui->textEdit_selectedFolder->toPlainText();
//     drive = "\\\\.\\"+drive;
//     // drive.chop(1);
//     qDebug() << "updated path: "<<drive<<" length: "<<drive.size();
//     // drive = drive[drive.length()]
//     // QString outputDir = ui->outputDirEdit->text();
//     QString outputDir = ui->textEdit_destinationFolder->toPlainText();
//     outputDir = "\\\\.\\"+outputDir;

//     if (drive.isEmpty() || outputDir.isEmpty()) {
//         QMessageBox::warning(this, "Input Error", "Please provide both drive and output directory.");
//         return;
//     }

//     // Disable the button before starting the recovery process
//     ui->pushButton_scanSelected->setEnabled(false);

//     DiskScanner scanner(drive.toStdString());
//     if (!scanner.openDrive()) {
//         QMessageBox::critical(this, "Error", "Failed to open drive.");
//         ui->pushButton_scanSelected->setEnabled(true); // Re-enable the button on failure
//         return;
//     }

//     QMessageBox::information(this, "Drive Open", "Successfully Open Drive for recovery.");

//     MP4Recovery recovery(outputDir.toStdString());

//     QMessageBox::information(this, "Recovery Start", "Successfully Start For recovery.");

//     recovery.recoverMP4(scanner);

//     scanner.closeDrive();

//     // Re-enable the button after the recovery process completes
//     ui->pushButton_scanSelected->setEnabled(true);

//     QMessageBox::information(this, "Recovery Completed", "MP4 recovery process completed.");

// }



void MainWindow::on_pushButton_selectedScan_clicked()
{
    Dialog_selectedScan selectedScan;
    selectedScan.setModal(true);
    selectedScan.exec();
}

