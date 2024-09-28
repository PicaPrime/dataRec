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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_deepScan;
    QPushButton *pushButton_deepScan;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_partitionScan;
    QPushButton *pushButton_partitionScan;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_selectedDriveScan;
    QPushButton *pushButton_selectedScan;
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
        MainWindow->resize(640, 480);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0,0,255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 150, 411, 140));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_deepScan = new QLabel(layoutWidget);
        label_deepScan->setObjectName("label_deepScan");
        label_deepScan->setMinimumSize(QSize(100, 100));
        label_deepScan->setMaximumSize(QSize(100, 100));
        label_deepScan->setStyleSheet(QString::fromUtf8(""));
        label_deepScan->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_deepScan);

        pushButton_deepScan = new QPushButton(layoutWidget);
        pushButton_deepScan->setObjectName("pushButton_deepScan");
        pushButton_deepScan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_9->addWidget(pushButton_deepScan);


        horizontalLayout_5->addLayout(verticalLayout_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_partitionScan = new QLabel(layoutWidget);
        label_partitionScan->setObjectName("label_partitionScan");
        label_partitionScan->setMinimumSize(QSize(100, 100));
        label_partitionScan->setMaximumSize(QSize(100, 100));
        label_partitionScan->setStyleSheet(QString::fromUtf8(""));
        label_partitionScan->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(label_partitionScan);

        pushButton_partitionScan = new QPushButton(layoutWidget);
        pushButton_partitionScan->setObjectName("pushButton_partitionScan");
        pushButton_partitionScan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_10->addWidget(pushButton_partitionScan);


        horizontalLayout_5->addLayout(verticalLayout_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_selectedDriveScan = new QLabel(layoutWidget);
        label_selectedDriveScan->setObjectName("label_selectedDriveScan");
        label_selectedDriveScan->setMinimumSize(QSize(100, 100));
        label_selectedDriveScan->setMaximumSize(QSize(100, 100));
        label_selectedDriveScan->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(label_selectedDriveScan);

        pushButton_selectedScan = new QPushButton(layoutWidget);
        pushButton_selectedScan->setObjectName("pushButton_selectedScan");
        pushButton_selectedScan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(pushButton_selectedScan);


        horizontalLayout_5->addLayout(verticalLayout_11);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 640, 25));
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
        label_deepScan->setText(QString());
        pushButton_deepScan->setText(QCoreApplication::translate("MainWindow", "Deep Scan", nullptr));
        label_partitionScan->setText(QString());
        pushButton_partitionScan->setText(QCoreApplication::translate("MainWindow", "Partition Scan", nullptr));
        label_selectedDriveScan->setText(QString());
        pushButton_selectedScan->setText(QCoreApplication::translate("MainWindow", "Selected  Scan", nullptr));
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
