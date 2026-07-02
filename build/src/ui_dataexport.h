/********************************************************************************
** Form generated from reading UI file 'dataexport.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAEXPORT_H
#define UI_DATAEXPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataExport
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *cancelButton;
    QPushButton *continueButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DataExport)
    {
        if (DataExport->objectName().isEmpty())
            DataExport->setObjectName(QString::fromUtf8("DataExport"));
        DataExport->resize(499, 307);
        gridLayout_2 = new QGridLayout(DataExport);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(DataExport);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        label = new QLabel(DataExport);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        widget = new QWidget(DataExport);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 0, 1, 1, 1);

        continueButton = new QPushButton(widget);
        continueButton->setObjectName(QString::fromUtf8("continueButton"));

        gridLayout->addWidget(continueButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);

        listWidget->raise();
        label->raise();
        widget->raise();

        retranslateUi(DataExport);

        QMetaObject::connectSlotsByName(DataExport);
    } // setupUi

    void retranslateUi(QWidget *DataExport)
    {
        DataExport->setWindowTitle(QCoreApplication::translate("DataExport", "Export Data", nullptr));
        label->setText(QCoreApplication::translate("DataExport", "The font files currently filtered and selected here will be copied in a directory of your choice.", nullptr));
        cancelButton->setText(QCoreApplication::translate("DataExport", "Cancel", nullptr));
        continueButton->setText(QCoreApplication::translate("DataExport", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataExport: public Ui_DataExport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAEXPORT_H
