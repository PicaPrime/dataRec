#ifndef LANDINGDIALOG_H
#define LANDINGDIALOG_H

#include <QDialog>

namespace Ui {
class LandingDialog;
}

class LandingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LandingDialog(QWidget *parent = nullptr);
    ~LandingDialog();

private:
    Ui::LandingDialog *ui;
};

#endif // LANDINGDIALOG_H
