#include "landingdialog.h"
#include "ui_landingdialog.h"

LandingDialog::LandingDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LandingDialog)
{
    ui->setupUi(this);
}

LandingDialog::~LandingDialog()
{
    delete ui;
}
