/********************************************************************************
** Form generated from reading UI file 'progressbarduo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSBARDUO_H
#define UI_PROGRESSBARDUO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ProgressBarDuo
{
public:
    QGridLayout *gridLayout;
    QLabel *Label0;
    QProgressBar *Bar0;
    QLabel *Label1;
    QProgressBar *Bar1;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;

    void setupUi(QDialog *ProgressBarDuo)
    {
        if (ProgressBarDuo->objectName().isEmpty())
            ProgressBarDuo->setObjectName(QString::fromUtf8("ProgressBarDuo"));
        ProgressBarDuo->resize(298, 134);
        gridLayout = new QGridLayout(ProgressBarDuo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label0 = new QLabel(ProgressBarDuo);
        Label0->setObjectName(QString::fromUtf8("Label0"));

        gridLayout->addWidget(Label0, 0, 0, 1, 2);

        Bar0 = new QProgressBar(ProgressBarDuo);
        Bar0->setObjectName(QString::fromUtf8("Bar0"));
        Bar0->setValue(24);

        gridLayout->addWidget(Bar0, 1, 0, 1, 2);

        Label1 = new QLabel(ProgressBarDuo);
        Label1->setObjectName(QString::fromUtf8("Label1"));

        gridLayout->addWidget(Label1, 2, 0, 1, 2);

        Bar1 = new QProgressBar(ProgressBarDuo);
        Bar1->setObjectName(QString::fromUtf8("Bar1"));
        Bar1->setValue(24);

        gridLayout->addWidget(Bar1, 3, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(204, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        cancelButton = new QPushButton(ProgressBarDuo);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 4, 1, 1, 1);


        retranslateUi(ProgressBarDuo);

        QMetaObject::connectSlotsByName(ProgressBarDuo);
    } // setupUi

    void retranslateUi(QDialog *ProgressBarDuo)
    {
        ProgressBarDuo->setWindowTitle(QCoreApplication::translate("ProgressBarDuo", "Dialog", nullptr));
        Label0->setText(QCoreApplication::translate("ProgressBarDuo", "TextLabel", nullptr));
        Label1->setText(QCoreApplication::translate("ProgressBarDuo", "TextLabel", nullptr));
        cancelButton->setText(QCoreApplication::translate("ProgressBarDuo", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressBarDuo: public Ui_ProgressBarDuo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSBARDUO_H
