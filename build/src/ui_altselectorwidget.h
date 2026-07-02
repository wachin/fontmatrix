/********************************************************************************
** Form generated from reading UI file 'altselectorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTSELECTORWIDGET_H
#define UI_ALTSELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AltSelectorWidget
{
public:
    QGridLayout *gridLayout;
    QTreeView *altSelectView;

    void setupUi(QWidget *AltSelectorWidget)
    {
        if (AltSelectorWidget->objectName().isEmpty())
            AltSelectorWidget->setObjectName(QString::fromUtf8("AltSelectorWidget"));
        AltSelectorWidget->resize(556, 446);
        gridLayout = new QGridLayout(AltSelectorWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        altSelectView = new QTreeView(AltSelectorWidget);
        altSelectView->setObjectName(QString::fromUtf8("altSelectView"));

        gridLayout->addWidget(altSelectView, 0, 0, 1, 1);


        retranslateUi(AltSelectorWidget);

        QMetaObject::connectSlotsByName(AltSelectorWidget);
    } // setupUi

    void retranslateUi(QWidget *AltSelectorWidget)
    {
        AltSelectorWidget->setWindowTitle(QCoreApplication::translate("AltSelectorWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AltSelectorWidget: public Ui_AltSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTSELECTORWIDGET_H
