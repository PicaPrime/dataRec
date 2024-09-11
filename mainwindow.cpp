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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QIcon icon(":/images/shinygleam data recovery logo.jpg");
    setWindowIcon(icon);
    setWindowTitle("SHINYGLEAM DataRecovery");

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

    QPixmap pixmap5(":/images/magnifying glass.png");
    w = ui->label_selectedScanImg->width();
    h = ui->label_selectedScanImg->height();

    ui->label_selectedScanImg->setPixmap(pixmap5.scaled(w, h, Qt::KeepAspectRatio));
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
    // QString sourcePath = ui->textEdit_selectedFolder->toPlainText();
    // QString destinationPath = ui->textEdit_destinationFolder->toPlainText();

    // if(sourcePath.isEmpty() || destinationPath.isEmpty()){
    //     ui->label_signal->setText("Path not Specified");
    // }
    // else{
    //     ui->label_signal->setText("Scaning please wait...");

    //     //implement ur data recovery logic here


    // }

    // ---------------------------------------- code from shamim bhai -------------------------------------------------------------------------------

    // QString drive = ui->drivePathEdit->text();
    QString drive = ui->textEdit_selectedFolder->toPlainText();
    drive = "\\\\.\\"+drive;
    // drive.chop(1);
    qDebug() << "updated path: "<<drive<<" length: "<<drive.size();
    // drive = drive[drive.length()]
    // QString outputDir = ui->outputDirEdit->text();
    QString outputDir = ui->textEdit_destinationFolder->toPlainText();
    outputDir = "\\\\.\\"+outputDir;

    if (drive.isEmpty() || outputDir.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please provide both drive and output directory.");
        return;
    }

    // Disable the button before starting the recovery process
    ui->pushButton_scanSelected->setEnabled(false);

    DiskScanner scanner(drive.toStdString());
    if (!scanner.openDrive()) {
        QMessageBox::critical(this, "Error", "Failed to open drive.");
        ui->pushButton_scanSelected->setEnabled(true); // Re-enable the button on failure
        return;
    }

    QMessageBox::information(this, "Drive Open", "Successfully Open Drive for recovery.");

    MP4Recovery recovery(outputDir.toStdString());

    QMessageBox::information(this, "Recovery Start", "Successfully Start For recovery.");

    recovery.recoverMP4(scanner);

    scanner.closeDrive();

    // Re-enable the button after the recovery process completes
    ui->pushButton_scanSelected->setEnabled(true);

    QMessageBox::information(this, "Recovery Completed", "MP4 recovery process completed.");

}


void MainWindow::on_label_2_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl("https://www.shinygleam.com/", QUrl::TolerantMode));
}

