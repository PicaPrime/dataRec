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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_scan;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_rescan;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_close;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QTextEdit *textEdit_selectedFolder;
    QLabel *label_4;
    QTextEdit *textEdit_destinationFolder;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_signal;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_selectedScanImg;
    QPushButton *pushButton_scanSelected;
    QWidget *layoutWidget1;
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
        layoutWidget->setGeometry(QRect(340, 380, 21, 20));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(140, 60));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);\n"
"border-radius: 10;\n"
"text-align: center;\n"
"font: 700 9pt \"Segoe UI\";"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_scan = new QLabel(layoutWidget);
        label_scan->setObjectName("label_scan");
        label_scan->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_scan);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_rescan = new QLabel(layoutWidget);
        label_rescan->setObjectName("label_rescan");
        label_rescan->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_rescan);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_close = new QLabel(layoutWidget);
        label_close->setObjectName("label_close");
        label_close->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_close);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);"));

        verticalLayout_3->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_8->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);\n"
"font: 700 12pt \"Segoe UI\";\n"
"border-radius: 10;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);"));

        verticalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);"));

        verticalLayout_4->addWidget(pushButton_4);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);\n"
"font: 700 12pt \"Segoe UI\";\n"
"border-radius: 10;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_3);

        textEdit_selectedFolder = new QTextEdit(layoutWidget);
        textEdit_selectedFolder->setObjectName("textEdit_selectedFolder");
        textEdit_selectedFolder->setStyleSheet(QString::fromUtf8("border-radius: 10;\n"
"background-color: rgb(255, 255, 255);"));
        textEdit_selectedFolder->setReadOnly(true);

        verticalLayout_6->addWidget(textEdit_selectedFolder);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);\n"
"font: 700 12pt \"Segoe UI\";\n"
"border-radius: 10;"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        textEdit_destinationFolder = new QTextEdit(layoutWidget);
        textEdit_destinationFolder->setObjectName("textEdit_destinationFolder");
        textEdit_destinationFolder->setStyleSheet(QString::fromUtf8("border-radius: 10;\n"
"background-color: rgb(255, 255, 255);"));
        textEdit_destinationFolder->setReadOnly(true);

        verticalLayout_6->addWidget(textEdit_destinationFolder);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_signal = new QLabel(layoutWidget);
        label_signal->setObjectName("label_signal");

        horizontalLayout_4->addWidget(label_signal);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_selectedScanImg = new QLabel(layoutWidget);
        label_selectedScanImg->setObjectName("label_selectedScanImg");
        label_selectedScanImg->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label_selectedScanImg);

        pushButton_scanSelected = new QPushButton(layoutWidget);
        pushButton_scanSelected->setObjectName("pushButton_scanSelected");
        pushButton_scanSelected->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);"));

        horizontalLayout_4->addWidget(pushButton_scanSelected);


        verticalLayout_7->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(130, 150, 411, 140));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_deepScan = new QLabel(layoutWidget1);
        label_deepScan->setObjectName("label_deepScan");
        label_deepScan->setMinimumSize(QSize(100, 100));
        label_deepScan->setMaximumSize(QSize(100, 100));
        label_deepScan->setStyleSheet(QString::fromUtf8(""));
        label_deepScan->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_deepScan);

        pushButton_deepScan = new QPushButton(layoutWidget1);
        pushButton_deepScan->setObjectName("pushButton_deepScan");
        pushButton_deepScan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_9->addWidget(pushButton_deepScan);


        horizontalLayout_5->addLayout(verticalLayout_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_partitionScan = new QLabel(layoutWidget1);
        label_partitionScan->setObjectName("label_partitionScan");
        label_partitionScan->setMinimumSize(QSize(100, 100));
        label_partitionScan->setMaximumSize(QSize(100, 100));
        label_partitionScan->setStyleSheet(QString::fromUtf8(""));
        label_partitionScan->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(label_partitionScan);

        pushButton_partitionScan = new QPushButton(layoutWidget1);
        pushButton_partitionScan->setObjectName("pushButton_partitionScan");
        pushButton_partitionScan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_10->addWidget(pushButton_partitionScan);


        horizontalLayout_5->addLayout(verticalLayout_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_selectedDriveScan = new QLabel(layoutWidget1);
        label_selectedDriveScan->setObjectName("label_selectedDriveScan");
        label_selectedDriveScan->setMinimumSize(QSize(100, 100));
        label_selectedDriveScan->setMaximumSize(QSize(100, 100));
        label_selectedDriveScan->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(label_selectedDriveScan);

        pushButton_selectedScan = new QPushButton(layoutWidget1);
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
        label_2->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "ShinyGleam Software\n"
" DataRecovery", nullptr));
        label_scan->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        label_rescan->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Rescan", nullptr));
        label_close->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " For custom scan\n"
" select a Drive ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Select a folder to scan ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "select destination folder ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Selected Source Drive Path", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Selected Destination Path", nullptr));
        label_signal->setText(QString());
        label_selectedScanImg->setText(QString());
        pushButton_scanSelected->setText(QCoreApplication::translate("MainWindow", "Scan Selected", nullptr));
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
