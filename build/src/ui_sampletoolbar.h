/********************************************************************************
** Form generated from reading UI file 'sampletoolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLETOOLBAR_H
#define UI_SAMPLETOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SampleToolBar
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *liveSize;
    QToolButton *sampleButton;
    QToolButton *opentypeButton;
    QComboBox *languageCombo;
    QLabel *label_2;

    void setupUi(QWidget *SampleToolBar)
    {
        if (SampleToolBar->objectName().isEmpty())
            SampleToolBar->setObjectName(QString::fromUtf8("SampleToolBar"));
        SampleToolBar->resize(511, 37);
        gridLayout = new QGridLayout(SampleToolBar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(SampleToolBar);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        liveSize = new QDoubleSpinBox(SampleToolBar);
        liveSize->setObjectName(QString::fromUtf8("liveSize"));
        liveSize->setMaximum(999.990000000000009);

        gridLayout->addWidget(liveSize, 0, 1, 1, 1);

        sampleButton = new QToolButton(SampleToolBar);
        sampleButton->setObjectName(QString::fromUtf8("sampleButton"));
        sampleButton->setCheckable(true);
        sampleButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        sampleButton->setAutoRaise(true);
        sampleButton->setArrowType(Qt::UpArrow);

        gridLayout->addWidget(sampleButton, 0, 2, 1, 1);

        opentypeButton = new QToolButton(SampleToolBar);
        opentypeButton->setObjectName(QString::fromUtf8("opentypeButton"));
        opentypeButton->setCheckable(true);
        opentypeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        opentypeButton->setAutoRaise(true);
        opentypeButton->setArrowType(Qt::UpArrow);

        gridLayout->addWidget(opentypeButton, 0, 3, 1, 1);

        languageCombo = new QComboBox(SampleToolBar);
        languageCombo->setObjectName(QString::fromUtf8("languageCombo"));

        gridLayout->addWidget(languageCombo, 0, 5, 1, 1);

        label_2 = new QLabel(SampleToolBar);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 4, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(liveSize);
        label_2->setBuddy(languageCombo);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SampleToolBar);

        QMetaObject::connectSlotsByName(SampleToolBar);
    } // setupUi

    void retranslateUi(QWidget *SampleToolBar)
    {
        SampleToolBar->setWindowTitle(QCoreApplication::translate("SampleToolBar", "Form", nullptr));
        label->setText(QCoreApplication::translate("SampleToolBar", "Font Size:", nullptr));
        sampleButton->setText(QCoreApplication::translate("SampleToolBar", "Samples", nullptr));
        opentypeButton->setText(QCoreApplication::translate("SampleToolBar", "OpenType", nullptr));
#if QT_CONFIG(tooltip)
        languageCombo->setToolTip(QCoreApplication::translate("SampleToolBar", "Depending of the font, some scripts \n"
"are especially supported if processed \n"
"through some logic (ICU here).", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("SampleToolBar", "Shaping:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SampleToolBar: public Ui_SampleToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLETOOLBAR_H
