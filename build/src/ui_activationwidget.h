/********************************************************************************
** Form generated from reading UI file 'activationwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVATIONWIDGET_H
#define UI_ACTIVATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "floatingwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ActivationWidget
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *activateAll;
    QPushButton *deactivateAll;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QVBoxLayout *listLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(FloatingWidget *ActivationWidget)
    {
        if (ActivationWidget->objectName().isEmpty())
            ActivationWidget->setObjectName(QString::fromUtf8("ActivationWidget"));
        ActivationWidget->resize(465, 364);
        gridLayout_2 = new QGridLayout(ActivationWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        activateAll = new QPushButton(ActivationWidget);
        activateAll->setObjectName(QString::fromUtf8("activateAll"));

        gridLayout_2->addWidget(activateAll, 0, 0, 1, 1);

        deactivateAll = new QPushButton(ActivationWidget);
        deactivateAll->setObjectName(QString::fromUtf8("deactivateAll"));

        gridLayout_2->addWidget(deactivateAll, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        scrollArea = new QScrollArea(ActivationWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 451, 320));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listLayout = new QVBoxLayout();
        listLayout->setSpacing(0);
        listLayout->setObjectName(QString::fromUtf8("listLayout"));

        gridLayout->addLayout(listLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 1, 0, 1, 3);


        retranslateUi(ActivationWidget);

        QMetaObject::connectSlotsByName(ActivationWidget);
    } // setupUi

    void retranslateUi(FloatingWidget *ActivationWidget)
    {
        ActivationWidget->setWindowTitle(QCoreApplication::translate("ActivationWidget", "Form", nullptr));
        activateAll->setText(QCoreApplication::translate("ActivationWidget", "Activate All", nullptr));
        deactivateAll->setText(QCoreApplication::translate("ActivationWidget", "Deactivate All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActivationWidget: public Ui_ActivationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVATIONWIDGET_H
