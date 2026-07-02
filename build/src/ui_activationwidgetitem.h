/********************************************************************************
** Form generated from reading UI file 'activationwidgetitem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVATIONWIDGETITEM_H
#define UI_ACTIVATIONWIDGETITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActivationWidgetItem
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *styleName;
    QCheckBox *activatedStatus;

    void setupUi(QWidget *ActivationWidgetItem)
    {
        if (ActivationWidgetItem->objectName().isEmpty())
            ActivationWidgetItem->setObjectName(QString::fromUtf8("ActivationWidgetItem"));
        ActivationWidgetItem->resize(458, 66);
        gridLayout_2 = new QGridLayout(ActivationWidgetItem);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(ActivationWidgetItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 2, -1, 2);
        styleName = new QLabel(frame);
        styleName->setObjectName(QString::fromUtf8("styleName"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        styleName->setFont(font);

        gridLayout->addWidget(styleName, 0, 0, 1, 1);

        activatedStatus = new QCheckBox(frame);
        activatedStatus->setObjectName(QString::fromUtf8("activatedStatus"));

        gridLayout->addWidget(activatedStatus, 1, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(ActivationWidgetItem);

        QMetaObject::connectSlotsByName(ActivationWidgetItem);
    } // setupUi

    void retranslateUi(QWidget *ActivationWidgetItem)
    {
        ActivationWidgetItem->setWindowTitle(QCoreApplication::translate("ActivationWidgetItem", "Form", nullptr));
        styleName->setText(QCoreApplication::translate("ActivationWidgetItem", "StyleName", nullptr));
        activatedStatus->setText(QCoreApplication::translate("ActivationWidgetItem", "Activated", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActivationWidgetItem: public Ui_ActivationWidgetItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVATIONWIDGETITEM_H
