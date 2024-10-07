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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_selectedScan
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_selectedFolder;
    QTextEdit *textEdit_destinationFolder;
    QPushButton *pushButton_scanSelected;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_scanSelected_2;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *Dialog_selectedScan)
    {
        if (Dialog_selectedScan->objectName().isEmpty())
            Dialog_selectedScan->setObjectName("Dialog_selectedScan");
        Dialog_selectedScan->resize(800, 616);
        Dialog_selectedScan->setMinimumSize(QSize(0, 0));
        Dialog_selectedScan->setStyleSheet(QString::fromUtf8("background-color: rgb(37,123,232);"));
        verticalLayout_4 = new QVBoxLayout(Dialog_selectedScan);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        frame = new QFrame(Dialog_selectedScan);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"font: 700 9pt \"Segoe UI\";\n"
"border-radius: 2;\n"
"background-color: rgb(8, 42, 129);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"font: 700 9pt \"Segoe UI\";\n"
"background-color: rgb(8, 42, 129);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 2;"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        textEdit_selectedFolder = new QTextEdit(frame);
        textEdit_selectedFolder->setObjectName("textEdit_selectedFolder");
        textEdit_selectedFolder->setMinimumSize(QSize(0, 30));
        textEdit_selectedFolder->setMaximumSize(QSize(16777215, 25));
        textEdit_selectedFolder->setStyleSheet(QString::fromUtf8("border-radius: 2;\n"
"background-color: rgb(178, 189, 216);\n"
"color: rgb(0,0,0);\n"
""));
        textEdit_selectedFolder->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_selectedFolder);

        textEdit_destinationFolder = new QTextEdit(frame);
        textEdit_destinationFolder->setObjectName("textEdit_destinationFolder");
        textEdit_destinationFolder->setMinimumSize(QSize(0, 30));
        textEdit_destinationFolder->setMaximumSize(QSize(16777215, 25));
        textEdit_destinationFolder->setStyleSheet(QString::fromUtf8("border-radius: 2;\n"
"background-color: rgb(178, 189, 216);\n"
"color: rgb(0,0,0);"));
        textEdit_destinationFolder->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_destinationFolder);


        horizontalLayout_2->addLayout(verticalLayout_2);

        pushButton_scanSelected = new QPushButton(frame);
        pushButton_scanSelected->setObjectName("pushButton_scanSelected");
        pushButton_scanSelected->setMinimumSize(QSize(0, 0));
        pushButton_scanSelected->setMaximumSize(QSize(16777215, 16777215));
        pushButton_scanSelected->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"font: 700 9pt \"Segoe UI\";\n"
"border-radius: 4;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 137, 96);\n"
""));
        pushButton_scanSelected->setIconSize(QSize(80, 60));

        horizontalLayout_2->addWidget(pushButton_scanSelected);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 40));
        label->setMaximumSize(QSize(16777215, 50));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(178, 189, 216);\n"
"border-radius: 5;\n"
"color: rgb(0,0,0);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 40));
        label_2->setMaximumSize(QSize(16777215, 50));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(178, 189, 216);\n"
"border-radius: 5;\n"
"color: rgb(0,0,0);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 40));
        label_3->setMaximumSize(QSize(16777215, 50));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(178, 189, 216);\n"
"border-radius: 5;\n"
"color: rgb(0,0,0);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_3);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_4);

        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(0, 0));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(178, 189, 216);\n"
"border-radius: 2;\n"
"color: rgb(0,0,0);"));

        verticalLayout_5->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_scanSelected_2 = new QPushButton(frame);
        pushButton_scanSelected_2->setObjectName("pushButton_scanSelected_2");
        pushButton_scanSelected_2->setMinimumSize(QSize(100, 40));
        pushButton_scanSelected_2->setMaximumSize(QSize(16777215, 40));
        pushButton_scanSelected_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255,0,0);\n"
"border-radius: 3;\n"
"color: rgb(0,0,0);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_scanSelected_2->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(pushButton_scanSelected_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);


        verticalLayout_3->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(Dialog_selectedScan);

        QMetaObject::connectSlotsByName(Dialog_selectedScan);
    } // setupUi

    void retranslateUi(QDialog *Dialog_selectedScan)
    {
        Dialog_selectedScan->setWindowTitle(QCoreApplication::translate("Dialog_selectedScan", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_selectedScan", "  Select Souce  ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_selectedScan", "  Select Destination  ", nullptr));
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
        pushButton_scanSelected->setText(QCoreApplication::translate("Dialog_selectedScan", "Scan", nullptr));
        label->setText(QCoreApplication::translate("Dialog_selectedScan", "Scanning in Progress........10%", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_selectedScan", "Elapsed time 00:00:03", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_selectedScan", "File found : 4", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Dialog_selectedScan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Found Files</p></body></html>", nullptr));
        pushButton_scanSelected_2->setText(QCoreApplication::translate("Dialog_selectedScan", "Cancel Scan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_selectedScan: public Ui_Dialog_selectedScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SELECTEDSCAN_H
