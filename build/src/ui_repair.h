/********************************************************************************
** Form generated from reading UI file 'repair.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPAIR_H
#define UI_REPAIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_repairDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *closeButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QListWidget *deadList;
    QPushButton *selectAllDead;
    QSpacerItem *spacerItem1;
    QPushButton *removeDead;
    QWidget *tab_2;
    QGridLayout *gridLayout2;
    QListWidget *actNotLinkList;
    QPushButton *selectAllActNot;
    QSpacerItem *spacerItem2;
    QPushButton *relinkActNot;
    QPushButton *deactActNot;
    QWidget *tab_3;
    QGridLayout *gridLayout3;
    QListWidget *deactLinkList;
    QPushButton *selectAllDeactLink;
    QSpacerItem *spacerItem3;
    QPushButton *delinkDeactLink;
    QPushButton *activateDeactLink;
    QWidget *tab_4;
    QGridLayout *gridLayout4;
    QListWidget *unrefList;
    QPushButton *selectAllUnreferenced;
    QSpacerItem *horizontalSpacer;
    QPushButton *removeUnreferenced;

    void setupUi(QDialog *repairDialog)
    {
        if (repairDialog->objectName().isEmpty())
            repairDialog->setObjectName(QString::fromUtf8("repairDialog"));
        repairDialog->resize(697, 497);
        gridLayout = new QGridLayout(repairDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(271, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        closeButton = new QPushButton(repairDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        hboxLayout->addWidget(closeButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        tabWidget = new QTabWidget(repairDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout1 = new QGridLayout(tab);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        deadList = new QListWidget(tab);
        deadList->setObjectName(QString::fromUtf8("deadList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(4);
        sizePolicy.setHeightForWidth(deadList->sizePolicy().hasHeightForWidth());
        deadList->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(deadList, 0, 0, 1, 3);

        selectAllDead = new QPushButton(tab);
        selectAllDead->setObjectName(QString::fromUtf8("selectAllDead"));

        gridLayout1->addWidget(selectAllDead, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(241, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 1, 1, 1);

        removeDead = new QPushButton(tab);
        removeDead->setObjectName(QString::fromUtf8("removeDead"));

        gridLayout1->addWidget(removeDead, 1, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout2 = new QGridLayout(tab_2);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        actNotLinkList = new QListWidget(tab_2);
        actNotLinkList->setObjectName(QString::fromUtf8("actNotLinkList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(actNotLinkList->sizePolicy().hasHeightForWidth());
        actNotLinkList->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(actNotLinkList, 0, 0, 1, 4);

        selectAllActNot = new QPushButton(tab_2);
        selectAllActNot->setObjectName(QString::fromUtf8("selectAllActNot"));

        gridLayout2->addWidget(selectAllActNot, 1, 0, 1, 1);

        spacerItem2 = new QSpacerItem(161, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 1, 1, 1, 1);

        relinkActNot = new QPushButton(tab_2);
        relinkActNot->setObjectName(QString::fromUtf8("relinkActNot"));

        gridLayout2->addWidget(relinkActNot, 1, 2, 1, 1);

        deactActNot = new QPushButton(tab_2);
        deactActNot->setObjectName(QString::fromUtf8("deactActNot"));

        gridLayout2->addWidget(deactActNot, 1, 3, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout3 = new QGridLayout(tab_3);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        deactLinkList = new QListWidget(tab_3);
        deactLinkList->setObjectName(QString::fromUtf8("deactLinkList"));
        sizePolicy1.setHeightForWidth(deactLinkList->sizePolicy().hasHeightForWidth());
        deactLinkList->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(deactLinkList, 0, 0, 1, 4);

        selectAllDeactLink = new QPushButton(tab_3);
        selectAllDeactLink->setObjectName(QString::fromUtf8("selectAllDeactLink"));

        gridLayout3->addWidget(selectAllDeactLink, 1, 0, 1, 1);

        spacerItem3 = new QSpacerItem(141, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem3, 1, 1, 1, 1);

        delinkDeactLink = new QPushButton(tab_3);
        delinkDeactLink->setObjectName(QString::fromUtf8("delinkDeactLink"));

        gridLayout3->addWidget(delinkDeactLink, 1, 2, 1, 1);

        activateDeactLink = new QPushButton(tab_3);
        activateDeactLink->setObjectName(QString::fromUtf8("activateDeactLink"));

        gridLayout3->addWidget(activateDeactLink, 1, 3, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout4 = new QGridLayout(tab_4);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        unrefList = new QListWidget(tab_4);
        unrefList->setObjectName(QString::fromUtf8("unrefList"));

        gridLayout4->addWidget(unrefList, 0, 0, 1, 3);

        selectAllUnreferenced = new QPushButton(tab_4);
        selectAllUnreferenced->setObjectName(QString::fromUtf8("selectAllUnreferenced"));

        gridLayout4->addWidget(selectAllUnreferenced, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(489, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(horizontalSpacer, 1, 1, 1, 1);

        removeUnreferenced = new QPushButton(tab_4);
        removeUnreferenced->setObjectName(QString::fromUtf8("removeUnreferenced"));

        gridLayout4->addWidget(removeUnreferenced, 1, 2, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(repairDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(repairDialog);
    } // setupUi

    void retranslateUi(QDialog *repairDialog)
    {
        repairDialog->setWindowTitle(QCoreApplication::translate("repairDialog", "Database repair", nullptr));
        closeButton->setText(QCoreApplication::translate("repairDialog", "Close", nullptr));
        selectAllDead->setText(QCoreApplication::translate("repairDialog", "Select all", nullptr));
        removeDead->setText(QCoreApplication::translate("repairDialog", "Remove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("repairDialog", "Dead links", nullptr));
        selectAllActNot->setText(QCoreApplication::translate("repairDialog", "Select all", nullptr));
        relinkActNot->setText(QCoreApplication::translate("repairDialog", "Re-link", nullptr));
        deactActNot->setText(QCoreApplication::translate("repairDialog", "Deactivate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("repairDialog", "Activated Not Linked", nullptr));
        selectAllDeactLink->setText(QCoreApplication::translate("repairDialog", "Select all", nullptr));
        delinkDeactLink->setText(QCoreApplication::translate("repairDialog", "De-link", nullptr));
        activateDeactLink->setText(QCoreApplication::translate("repairDialog", "Activate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("repairDialog", "Deactivated Linked", nullptr));
        selectAllUnreferenced->setText(QCoreApplication::translate("repairDialog", "Select all", nullptr));
        removeUnreferenced->setText(QCoreApplication::translate("repairDialog", "Remove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("repairDialog", "Unreferenced Files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class repairDialog: public Ui_repairDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPAIR_H
