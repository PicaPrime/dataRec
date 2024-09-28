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
    QTextEdit *textEdit;
    QPushButton *pushButton_scanSelected_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_selectedFolder;
    QTextEdit *textEdit_destinationFolder;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_scanSelected;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Dialog_selectedScan)
    {
        if (Dialog_selectedScan->objectName().isEmpty())
            Dialog_selectedScan->setObjectName("Dialog_selectedScan");
        Dialog_selectedScan->resize(640, 480);
        Dialog_selectedScan->setMinimumSize(QSize(0, 75));
        Dialog_selectedScan->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        textEdit = new QTextEdit(Dialog_selectedScan);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 180, 591, 221));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 5;"));
        pushButton_scanSelected_2 = new QPushButton(Dialog_selectedScan);
        pushButton_scanSelected_2->setObjectName("pushButton_scanSelected_2");
        pushButton_scanSelected_2->setGeometry(QRect(520, 420, 101, 40));
        pushButton_scanSelected_2->setMinimumSize(QSize(50, 40));
        pushButton_scanSelected_2->setMaximumSize(QSize(16777215, 40));
        pushButton_scanSelected_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 5;"));
        pushButton_scanSelected_2->setIconSize(QSize(25, 25));
        widget = new QWidget(Dialog_selectedScan);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 591, 141));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMaximumSize(QSize(16777215, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";\n"
"border-radius: 5;"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMaximumSize(QSize(16777215, 25));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";\n"
"border-radius: 5;"));

        verticalLayout_2->addWidget(pushButton_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        textEdit_selectedFolder = new QTextEdit(widget);
        textEdit_selectedFolder->setObjectName("textEdit_selectedFolder");
        textEdit_selectedFolder->setMaximumSize(QSize(16777215, 25));
        textEdit_selectedFolder->setStyleSheet(QString::fromUtf8("border-radius: 5;\n"
"background-color: rgb(255, 255, 255);"));
        textEdit_selectedFolder->setReadOnly(true);

        verticalLayout->addWidget(textEdit_selectedFolder);

        textEdit_destinationFolder = new QTextEdit(widget);
        textEdit_destinationFolder->setObjectName("textEdit_destinationFolder");
        textEdit_destinationFolder->setMaximumSize(QSize(16777215, 25));
        textEdit_destinationFolder->setStyleSheet(QString::fromUtf8("border-radius: 5;\n"
"background-color: rgb(255, 255, 255);"));
        textEdit_destinationFolder->setReadOnly(true);

        verticalLayout->addWidget(textEdit_destinationFolder);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_scanSelected = new QPushButton(widget);
        pushButton_scanSelected->setObjectName("pushButton_scanSelected");
        pushButton_scanSelected->setMinimumSize(QSize(50, 50));
        pushButton_scanSelected->setMaximumSize(QSize(16777215, 50));
        pushButton_scanSelected->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 5;"));
        pushButton_scanSelected->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(pushButton_scanSelected);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 50));
        label->setMaximumSize(QSize(16777215, 50));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 5;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(Dialog_selectedScan);

        QMetaObject::connectSlotsByName(Dialog_selectedScan);
    } // setupUi

    void retranslateUi(QDialog *Dialog_selectedScan)
    {
        Dialog_selectedScan->setWindowTitle(QCoreApplication::translate("Dialog_selectedScan", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Dialog_selectedScan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Results</p></body></html>", nullptr));
        pushButton_scanSelected_2->setText(QCoreApplication::translate("Dialog_selectedScan", "Cancel Scan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog_selectedScan", "Select Folder ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog_selectedScan", "  Select Destination  ", nullptr));
        textEdit_selectedFolder->setHtml(QCoreApplication::translate("Dialog_selectedScan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Path:</p></body></html>", nullptr));
        textEdit_destinationFolder->setHtml(QCoreApplication::translate("Dialog_selectedScan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Path:</p></body></html>", nullptr));
        pushButton_scanSelected->setText(QCoreApplication::translate("Dialog_selectedScan", "  Scan Selected  ", nullptr));
        label->setText(QCoreApplication::translate("Dialog_selectedScan", "Scan Status ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_selectedScan: public Ui_Dialog_selectedScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SELECTEDSCAN_H
