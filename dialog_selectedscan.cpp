#include "dialog_selectedscan.h"
#include "ui_dialog_selectedscan.h"

Dialog_selectedScan::Dialog_selectedScan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_selectedScan)
{
    ui->setupUi(this);

    ui->pushButton_close->setIcon(QIcon(":/images/close.png"));
    ui->pushButton_scanSelected->setIcon(QIcon(":/images/magnifying glass.png"));
}

Dialog_selectedScan::~Dialog_selectedScan()
{
    delete ui;
}
