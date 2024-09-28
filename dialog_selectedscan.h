#ifndef DIALOG_SELECTEDSCAN_H
#define DIALOG_SELECTEDSCAN_H

#include <QDialog>

namespace Ui {
class Dialog_selectedScan;
}

class Dialog_selectedScan : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_selectedScan(QWidget *parent = nullptr);
    ~Dialog_selectedScan();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_scanSelected_clicked();

private:
    Ui::Dialog_selectedScan *ui;
};

#endif // DIALOG_SELECTEDSCAN_H
