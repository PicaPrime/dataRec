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
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_signal;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_scanSelected;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_scan;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_rescan;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_close;
    QPushButton *pushButton_5;
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
        MainWindow->resize(538, 421);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 330, 451, 31));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_signal = new QLabel(widget);
        label_signal->setObjectName("label_signal");

        horizontalLayout_4->addWidget(label_signal);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButton_scanSelected = new QPushButton(widget);
        pushButton_scanSelected->setObjectName("pushButton_scanSelected");

        horizontalLayout_4->addWidget(pushButton_scanSelected);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(50, 10, 451, 306));
        verticalLayout_8 = new QVBoxLayout(widget1);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_scan = new QLabel(widget1);
        label_scan->setObjectName("label_scan");

        verticalLayout->addWidget(label_scan);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_rescan = new QLabel(widget1);
        label_rescan->setObjectName("label_rescan");

        verticalLayout_2->addWidget(label_rescan);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_close = new QLabel(widget1);
        label_close->setObjectName("label_close");

        verticalLayout_3->addWidget(label_close);

        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_3->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_8->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(widget1);
        label->setObjectName("label");

        verticalLayout_5->addWidget(label);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_4->addWidget(pushButton_4);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        verticalLayout_6->addWidget(label_3);

        textEdit_selectedFolder = new QTextEdit(widget1);
        textEdit_selectedFolder->setObjectName("textEdit_selectedFolder");
        textEdit_selectedFolder->setReadOnly(true);

        verticalLayout_6->addWidget(textEdit_selectedFolder);

        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        verticalLayout_6->addWidget(label_4);

        textEdit_destinationFolder = new QTextEdit(widget1);
        textEdit_destinationFolder->setObjectName("textEdit_destinationFolder");
        textEdit_destinationFolder->setReadOnly(true);

        verticalLayout_6->addWidget(textEdit_destinationFolder);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 538, 25));
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
        label_signal->setText(QString());
        pushButton_scanSelected->setText(QCoreApplication::translate("MainWindow", "scan selected folder", nullptr));
        label_2->setText(QString());
        label_scan->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        label_rescan->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Rescan", nullptr));
        label_close->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "For custom scan select a folder", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Select a folder to scan ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "select destination folder ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Selected folder", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Destination folder", nullptr));
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
