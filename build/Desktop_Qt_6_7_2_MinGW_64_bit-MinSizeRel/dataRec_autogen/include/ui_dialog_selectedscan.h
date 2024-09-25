/********************************************************************************
** Form generated from reading UI file 'dialog_selectedscan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SELECTEDSCAN_H
#define UI_DIALOG_SELECTEDSCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_selectedScan
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_close;
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

    void setupUi(QDialog *Dialog_selectedScan)
    {
        if (Dialog_selectedScan->objectName().isEmpty())
            Dialog_selectedScan->setObjectName("Dialog_selectedScan");
        Dialog_selectedScan->resize(640, 480);
        Dialog_selectedScan->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        layoutWidget = new QWidget(Dialog_selectedScan);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 30, 531, 401));
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

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 143, 126);"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_close = new QPushButton(layoutWidget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setMinimumSize(QSize(50, 50));
        pushButton_close->setStyleSheet(QString::fromUtf8(""));
        pushButton_close->setIconSize(QSize(50, 50));

        verticalLayout_3->addWidget(pushButton_close);


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
        pushButton_scanSelected->setMinimumSize(QSize(50, 50));
        pushButton_scanSelected->setStyleSheet(QString::fromUtf8(""));
        pushButton_scanSelected->setIconSize(QSize(50, 50));

        horizontalLayout_4->addWidget(pushButton_scanSelected);


        verticalLayout_7->addLayout(horizontalLayout_4);


        retranslateUi(Dialog_selectedScan);

        QMetaObject::connectSlotsByName(Dialog_selectedScan);
    } // setupUi

    void retranslateUi(QDialog *Dialog_selectedScan)
    {
        Dialog_selectedScan->setWindowTitle(QCoreApplication::translate("Dialog_selectedScan", "Dialog", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialog_selectedScan", "Scan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_selectedScan", "Rescan", nullptr));
        pushButton_close->setText(QString());
        label->setText(QCoreApplication::translate("Dialog_selectedScan", " For custom scan\n"
" select a Drive ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog_selectedScan", "Select a folder to scan ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog_selectedScan", "select destination folder ", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_selectedScan", "Selected Source Drive Path", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_selectedScan", "Selected Destination Path", nullptr));
        label_signal->setText(QString());
        label_selectedScanImg->setText(QString());
        pushButton_scanSelected->setText(QCoreApplication::translate("Dialog_selectedScan", "Scan Selected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_selectedScan: public Ui_Dialog_selectedScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SELECTEDSCAN_H
