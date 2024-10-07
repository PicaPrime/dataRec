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
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_deepScan;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton_partitionScan;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_11;
    QPushButton *pushButton_selectedScan;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
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
"background-color: rgb(37,123,232);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        pushButton_deepScan = new QPushButton(centralwidget);
        pushButton_deepScan->setObjectName("pushButton_deepScan");
        pushButton_deepScan->setMinimumSize(QSize(100, 100));
        pushButton_deepScan->setStyleSheet(QString::fromUtf8("image: url(:/images/deep scan.png);"));

        verticalLayout_9->addWidget(pushButton_deepScan);


        horizontalLayout_5->addLayout(verticalLayout_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        pushButton_partitionScan = new QPushButton(centralwidget);
        pushButton_partitionScan->setObjectName("pushButton_partitionScan");
        pushButton_partitionScan->setMinimumSize(QSize(100, 100));
        pushButton_partitionScan->setStyleSheet(QString::fromUtf8("image: url(:/images/partition scan.png);"));

        verticalLayout_10->addWidget(pushButton_partitionScan);


        horizontalLayout_5->addLayout(verticalLayout_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        pushButton_selectedScan = new QPushButton(centralwidget);
        pushButton_selectedScan->setObjectName("pushButton_selectedScan");
        pushButton_selectedScan->setMinimumSize(QSize(100, 100));
        pushButton_selectedScan->setStyleSheet(QString::fromUtf8("image: url(:/images/selected drive scan.png);"));

        verticalLayout_11->addWidget(pushButton_selectedScan);


        horizontalLayout_5->addLayout(verticalLayout_11);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

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
        pushButton_deepScan->setText(QString());
        pushButton_partitionScan->setText(QString());
        pushButton_selectedScan->setText(QString());
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
