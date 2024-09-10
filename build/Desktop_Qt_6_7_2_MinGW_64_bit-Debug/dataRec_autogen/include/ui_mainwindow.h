/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_scan;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_scan_2;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_scan_3;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(499, 403);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(270, 190, 211, 29));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(270, 240, 211, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 210, 231, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 101, 71));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 20, 262, 60));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_scan = new QLabel(widget);
        label_scan->setObjectName("label_scan");

        verticalLayout->addWidget(label_scan);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_scan_2 = new QLabel(widget);
        label_scan_2->setObjectName("label_scan_2");

        verticalLayout_2->addWidget(label_scan_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_scan_3 = new QLabel(widget);
        label_scan_3->setObjectName("label_scan_3");

        verticalLayout_3->addWidget(label_scan_3);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_3->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 499, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName("menuSettings");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Select a folder to scan ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "select destination folder ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "For custom scan select a folder", nullptr));
        label_2->setText(QString());
        label_scan->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        label_scan_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Rescan", nullptr));
        label_scan_3->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
