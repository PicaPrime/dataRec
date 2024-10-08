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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
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
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
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
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_8;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(640, 480);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(211, 231, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_3);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 249, 255);\n"
"border-radius: 5;	"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        pushButton_deepScan = new QPushButton(frame);
        pushButton_deepScan->setObjectName("pushButton_deepScan");
        pushButton_deepScan->setMinimumSize(QSize(100, 100));
        pushButton_deepScan->setStyleSheet(QString::fromUtf8("image: url(:/images/deep scan.png);"));

        verticalLayout_9->addWidget(pushButton_deepScan);


        horizontalLayout_5->addLayout(verticalLayout_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        pushButton_partitionScan = new QPushButton(frame);
        pushButton_partitionScan->setObjectName("pushButton_partitionScan");
        pushButton_partitionScan->setMinimumSize(QSize(100, 100));
        pushButton_partitionScan->setStyleSheet(QString::fromUtf8("image: url(:/images/partition scan.png);"));

        verticalLayout_10->addWidget(pushButton_partitionScan);


        horizontalLayout_5->addLayout(verticalLayout_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        pushButton_selectedScan = new QPushButton(frame);
        pushButton_selectedScan->setObjectName("pushButton_selectedScan");
        pushButton_selectedScan->setMinimumSize(QSize(100, 100));
        pushButton_selectedScan->setStyleSheet(QString::fromUtf8("image: url(:/images/selected drive scan.png);"));

        verticalLayout_11->addWidget(pushButton_selectedScan);


        horizontalLayout_5->addLayout(verticalLayout_11);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        horizontalLayout->addLayout(horizontalLayout_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(frame);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_deepScan->setText(QString());
        pushButton_partitionScan->setText(QString());
        pushButton_selectedScan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
