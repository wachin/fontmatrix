/********************************************************************************
** Form generated from reading UI file 'textprogression.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTPROGRESSION_H
#define UI_TEXTPROGRESSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextProgressionWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gLt_2;
    QRadioButton *inlineLTR;
    QRadioButton *inlineRTL;
    QRadioButton *inlineTTB;
    QRadioButton *inlineBTT;
    QGroupBox *groupBox_2;
    QGridLayout *gLt;
    QRadioButton *blockTTB;
    QRadioButton *blockRTL;
    QRadioButton *blockLTR;

    void setupUi(QWidget *TextProgressionWidget)
    {
        if (TextProgressionWidget->objectName().isEmpty())
            TextProgressionWidget->setObjectName(QString::fromUtf8("TextProgressionWidget"));
        TextProgressionWidget->resize(162, 287);
        gridLayout = new QGridLayout(TextProgressionWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(-1);
        groupBox = new QGroupBox(TextProgressionWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        gLt_2 = new QGridLayout(groupBox);
        gLt_2->setContentsMargins(0, 0, 0, 0);
        gLt_2->setObjectName(QString::fromUtf8("gLt_2"));
        gLt_2->setVerticalSpacing(0);
        inlineLTR = new QRadioButton(groupBox);
        inlineLTR->setObjectName(QString::fromUtf8("inlineLTR"));
        inlineLTR->setChecked(true);

        gLt_2->addWidget(inlineLTR, 0, 0, 1, 1);

        inlineRTL = new QRadioButton(groupBox);
        inlineRTL->setObjectName(QString::fromUtf8("inlineRTL"));

        gLt_2->addWidget(inlineRTL, 1, 0, 1, 1);

        inlineTTB = new QRadioButton(groupBox);
        inlineTTB->setObjectName(QString::fromUtf8("inlineTTB"));

        gLt_2->addWidget(inlineTTB, 2, 0, 1, 1);

        inlineBTT = new QRadioButton(groupBox);
        inlineBTT->setObjectName(QString::fromUtf8("inlineBTT"));

        gLt_2->addWidget(inlineBTT, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(TextProgressionWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFlat(true);
        gLt = new QGridLayout(groupBox_2);
        gLt->setContentsMargins(0, 0, 0, 0);
        gLt->setObjectName(QString::fromUtf8("gLt"));
        gLt->setVerticalSpacing(0);
        blockTTB = new QRadioButton(groupBox_2);
        blockTTB->setObjectName(QString::fromUtf8("blockTTB"));
        blockTTB->setChecked(true);

        gLt->addWidget(blockTTB, 0, 0, 1, 1);

        blockRTL = new QRadioButton(groupBox_2);
        blockRTL->setObjectName(QString::fromUtf8("blockRTL"));

        gLt->addWidget(blockRTL, 1, 0, 1, 1);

        blockLTR = new QRadioButton(groupBox_2);
        blockLTR->setObjectName(QString::fromUtf8("blockLTR"));

        gLt->addWidget(blockLTR, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(TextProgressionWidget);

        QMetaObject::connectSlotsByName(TextProgressionWidget);
    } // setupUi

    void retranslateUi(QWidget *TextProgressionWidget)
    {
        TextProgressionWidget->setWindowTitle(QCoreApplication::translate("TextProgressionWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TextProgressionWidget", "Inline progression", nullptr));
#if QT_CONFIG(tooltip)
        inlineLTR->setToolTip(QCoreApplication::translate("TextProgressionWidget", "e.g. Latin text", nullptr));
#endif // QT_CONFIG(tooltip)
        inlineLTR->setText(QCoreApplication::translate("TextProgressionWidget", "Left to right", nullptr));
#if QT_CONFIG(tooltip)
        inlineRTL->setToolTip(QCoreApplication::translate("TextProgressionWidget", "e.g. Arabic text", nullptr));
#endif // QT_CONFIG(tooltip)
        inlineRTL->setText(QCoreApplication::translate("TextProgressionWidget", "Right to left", nullptr));
#if QT_CONFIG(tooltip)
        inlineTTB->setToolTip(QCoreApplication::translate("TextProgressionWidget", "e.g. Traditional Chinese & Japanese text", nullptr));
#endif // QT_CONFIG(tooltip)
        inlineTTB->setText(QCoreApplication::translate("TextProgressionWidget", "Top to bottom", nullptr));
#if QT_CONFIG(tooltip)
        inlineBTT->setToolTip(QCoreApplication::translate("TextProgressionWidget", "e.g. Runic text", nullptr));
#endif // QT_CONFIG(tooltip)
        inlineBTT->setText(QCoreApplication::translate("TextProgressionWidget", "Bottom to top", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TextProgressionWidget", "Block progression", nullptr));
#if QT_CONFIG(tooltip)
        blockTTB->setToolTip(QCoreApplication::translate("TextProgressionWidget", "e.g. Latin text", nullptr));
#endif // QT_CONFIG(tooltip)
        blockTTB->setText(QCoreApplication::translate("TextProgressionWidget", "Top to bottom", nullptr));
#if QT_CONFIG(tooltip)
        blockRTL->setToolTip(QCoreApplication::translate("TextProgressionWidget", "e.g. Tarditionnal Chinese & Japanes text", nullptr));
#endif // QT_CONFIG(tooltip)
        blockRTL->setText(QCoreApplication::translate("TextProgressionWidget", "Right to left", nullptr));
#if QT_CONFIG(tooltip)
        blockLTR->setToolTip(QCoreApplication::translate("TextProgressionWidget", "e.g. Traditional Mongolian text", nullptr));
#endif // QT_CONFIG(tooltip)
        blockLTR->setText(QCoreApplication::translate("TextProgressionWidget", "Left to right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextProgressionWidget: public Ui_TextProgressionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTPROGRESSION_H
