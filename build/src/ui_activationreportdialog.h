/********************************************************************************
** Form generated from reading UI file 'activationreportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVATIONREPORTDIALOG_H
#define UI_ACTIVATIONREPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ActivationReportDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTableWidget *errorTable;

    void setupUi(QDialog *ActivationReportDialog)
    {
        if (ActivationReportDialog->objectName().isEmpty())
            ActivationReportDialog->setObjectName(QString::fromUtf8("ActivationReportDialog"));
        ActivationReportDialog->resize(537, 496);
        gridLayout = new QGridLayout(ActivationReportDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ActivationReportDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(454, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton = new QPushButton(ActivationReportDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        errorTable = new QTableWidget(ActivationReportDialog);
        if (errorTable->columnCount() < 2)
            errorTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        errorTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        errorTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        errorTable->setObjectName(QString::fromUtf8("errorTable"));

        gridLayout->addWidget(errorTable, 1, 0, 1, 2);

        pushButton->raise();
        label->raise();
        errorTable->raise();

        retranslateUi(ActivationReportDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), ActivationReportDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(ActivationReportDialog);
    } // setupUi

    void retranslateUi(QDialog *ActivationReportDialog)
    {
        ActivationReportDialog->setWindowTitle(QCoreApplication::translate("ActivationReportDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ActivationReportDialog", "Activation - Deactivation Error Report", nullptr));
        pushButton->setText(QCoreApplication::translate("ActivationReportDialog", "Close", nullptr));
        QTableWidgetItem *___qtablewidgetitem = errorTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ActivationReportDialog", "Font path", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = errorTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ActivationReportDialog", "Error", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActivationReportDialog: public Ui_ActivationReportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVATIONREPORTDIALOG_H
