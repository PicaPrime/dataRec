#include "dialog_selectedscan.h"
#include "ui_dialog_selectedscan.h"

#include "DiskScanner.h"
#include "MP4Recovery.h"
#include <QMessageBox>
#include "dialog_selectedscan.h"

#include <QFileDialog>
#include <QString>
#include<QPixmap>
#include<QDesktopServices>

Dialog_selectedScan::Dialog_selectedScan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_selectedScan)
{
    ui->setupUi(this);
    ui->pushButton_scanSelected->setIcon(QIcon(":/images/magnifying glass.png"));
}

Dialog_selectedScan::~Dialog_selectedScan()
{
    delete ui;
}

void Dialog_selectedScan::on_pushButton_3_clicked()
{
    QString folderPath = QFileDialog::getExistingDirectory(this, "Select Folder", QDir::homePath());
        if (!folderPath.isEmpty()) {
            // User selected a folder
            // Use folderPath as needed
            qDebug() << "Selected folder:" << folderPath;
            ui->textEdit_selectedFolder->setText(folderPath);
        } else {
            // User cancelled the dialog
            // qDebug() << "no folder selected";
        }
}


void Dialog_selectedScan::on_pushButton_4_clicked()
{
    QString folderPath = QFileDialog::getExistingDirectory(this, "Select Folder", QDir::homePath());
        if (!folderPath.isEmpty()) {
            // User selected a folder
            // Use folderPath as needed
            // qDebug() << "Selected folder:" << folderPath;
            ui->textEdit_destinationFolder->setText(folderPath);
        } else {
            // User cancelled the dialog
            // qDebug() << "no folder selected";
        }
}


void Dialog_selectedScan::on_pushButton_scanSelected_clicked()
{
    QString sourcePath = ui->textEdit_selectedFolder->toPlainText();
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

