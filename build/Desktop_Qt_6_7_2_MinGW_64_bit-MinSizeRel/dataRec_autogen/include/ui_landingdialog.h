/********************************************************************************
** Form generated from reading UI file 'landingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDINGDIALOG_H
#define UI_LANDINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LandingDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_deepScan;
    QLabel *label_partitionScan;
    QLabel *label_selectedDriveScan;

    void setupUi(QDialog *LandingDialog)
    {
        if (LandingDialog->objectName().isEmpty())
            LandingDialog->setObjectName("LandingDialog");
        LandingDialog->resize(640, 480);
        LandingDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        buttonBox = new QDialogButtonBox(LandingDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalLayoutWidget = new QWidget(LandingDialog);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(100, 150, 451, 141));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_deepScan = new QLabel(horizontalLayoutWidget);
        label_deepScan->setObjectName("label_deepScan");
        label_deepScan->setMinimumSize(QSize(0, 20));
        label_deepScan->setStyleSheet(QString::fromUtf8("background-image: url(:/images/deep scan.png);\n"
""));
        label_deepScan->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_deepScan, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        label_partitionScan = new QLabel(horizontalLayoutWidget);
        label_partitionScan->setObjectName("label_partitionScan");
        label_partitionScan->setStyleSheet(QString::fromUtf8("background-image: url(:/images/partition scan.png);"));
        label_partitionScan->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_partitionScan, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        label_selectedDriveScan = new QLabel(horizontalLayoutWidget);
        label_selectedDriveScan->setObjectName("label_selectedDriveScan");
        label_selectedDriveScan->setStyleSheet(QString::fromUtf8("background-image: url(:/images/selected drive scan.png);"));

        horizontalLayout->addWidget(label_selectedDriveScan, 0, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignVCenter);


        retranslateUi(LandingDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LandingDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LandingDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LandingDialog);
    } // setupUi

    void retranslateUi(QDialog *LandingDialog)
    {
        LandingDialog->setWindowTitle(QCoreApplication::translate("LandingDialog", "Dialog", nullptr));
        label_deepScan->setText(QString());
        label_partitionScan->setText(QString());
        label_selectedDriveScan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LandingDialog: public Ui_LandingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGDIALOG_H
