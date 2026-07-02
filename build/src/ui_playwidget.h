/********************************************************************************
** Form generated from reading UI file 'playwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYWIDGET_H
#define UI_PLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "floatingwidgettoolbar.h"
#include "fmplayground.h"

QT_BEGIN_NAMESPACE

class Ui_PlayWidget
{
public:
    QGridLayout *gridLayout;
    FloatingWidgetToolBar *toolbar;
    FMPlayGround *playView;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QDoubleSpinBox *playFontSize;

    void setupUi(QWidget *PlayWidget)
    {
        if (PlayWidget->objectName().isEmpty())
            PlayWidget->setObjectName(QString::fromUtf8("PlayWidget"));
        PlayWidget->resize(662, 524);
        gridLayout = new QGridLayout(PlayWidget);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(2);
        toolbar = new FloatingWidgetToolBar(PlayWidget);
        toolbar->setObjectName(QString::fromUtf8("toolbar"));

        gridLayout->addWidget(toolbar, 0, 0, 1, 3);

        playView = new FMPlayGround(PlayWidget);
        playView->setObjectName(QString::fromUtf8("playView"));
        playView->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(playView, 1, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(497, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        label_5 = new QLabel(PlayWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        playFontSize = new QDoubleSpinBox(PlayWidget);
        playFontSize->setObjectName(QString::fromUtf8("playFontSize"));
        playFontSize->setMinimum(1.000000000000000);
        playFontSize->setMaximum(999.990000000000009);
        playFontSize->setValue(24.000000000000000);

        gridLayout->addWidget(playFontSize, 2, 2, 1, 1);

#if QT_CONFIG(shortcut)
        label_5->setBuddy(playFontSize);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PlayWidget);

        QMetaObject::connectSlotsByName(PlayWidget);
    } // setupUi

    void retranslateUi(QWidget *PlayWidget)
    {
        PlayWidget->setWindowTitle(QCoreApplication::translate("PlayWidget", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("PlayWidget", "Font Size:", nullptr));
        playFontSize->setSuffix(QCoreApplication::translate("PlayWidget", " pt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayWidget: public Ui_PlayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYWIDGET_H
