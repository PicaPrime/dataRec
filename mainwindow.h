#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    // void on_pushButton_scanSelected_clicked();

    // void on_label_selectedDriveScan_linkActivated(const QString &link);

    void on_pushButton_selectedScan_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H


// -----------------------------------------------files that are from shamim bhai ----------------------------

// #ifndef MAINWINDOW_H
// #define MAINWINDOW_H

// #include <QMainWindow>

// QT_BEGIN_NAMESPACE
// namespace Ui { class MainWindow; }
// QT_END_NAMESPACE

// class MainWindow : public QMainWindow {
//     Q_OBJECT

// public:
//     MainWindow(QWidget *parent = nullptr);
//     ~MainWindow();

// private slots:
//     void on_startRecoveryButton_clicked();

// private:
//     Ui::MainWindow *ui;
// };

// #endif // MAINWINDOW_H
