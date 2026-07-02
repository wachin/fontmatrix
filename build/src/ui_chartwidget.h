/********************************************************************************
** Form generated from reading UI file 'chartwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTWIDGET_H
#define UI_CHARTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include "floatingwidget.h"
#include "floatingwidgettoolbar.h"
#include "fmglyphsview.h"

QT_BEGIN_NAMESPACE

class Ui_ChartWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *unicodeCoverageStat;
    QComboBox *uniPlaneCombo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *charSearchLine;
    FMGlyphsView *abcView;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *clipboardCheck;
    QLineEdit *uniLine;
    FloatingWidgetToolBar *toolbar;

    void setupUi(FloatingWidget *ChartWidget)
    {
        if (ChartWidget->objectName().isEmpty())
            ChartWidget->setObjectName(QString::fromUtf8("ChartWidget"));
        ChartWidget->resize(704, 587);
        gridLayout = new QGridLayout(ChartWidget);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        unicodeCoverageStat = new QLabel(ChartWidget);
        unicodeCoverageStat->setObjectName(QString::fromUtf8("unicodeCoverageStat"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(unicodeCoverageStat->sizePolicy().hasHeightForWidth());
        unicodeCoverageStat->setSizePolicy(sizePolicy);
        unicodeCoverageStat->setMargin(2);

        horizontalLayout->addWidget(unicodeCoverageStat);

        uniPlaneCombo = new QComboBox(ChartWidget);
        uniPlaneCombo->setObjectName(QString::fromUtf8("uniPlaneCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(uniPlaneCombo->sizePolicy().hasHeightForWidth());
        uniPlaneCombo->setSizePolicy(sizePolicy1);
        uniPlaneCombo->setAcceptDrops(true);
        uniPlaneCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(uniPlaneCombo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(ChartWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        charSearchLine = new QLineEdit(ChartWidget);
        charSearchLine->setObjectName(QString::fromUtf8("charSearchLine"));

        horizontalLayout->addWidget(charSearchLine);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        abcView = new FMGlyphsView(ChartWidget);
        abcView->setObjectName(QString::fromUtf8("abcView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(abcView->sizePolicy().hasHeightForWidth());
        abcView->setSizePolicy(sizePolicy2);
        abcView->setFocusPolicy(Qt::NoFocus);
        abcView->setFrameShape(QFrame::NoFrame);
        abcView->setRubberBandSelectionMode(Qt::IntersectsItemBoundingRect);

        gridLayout->addWidget(abcView, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        clipboardCheck = new QToolButton(ChartWidget);
        clipboardCheck->setObjectName(QString::fromUtf8("clipboardCheck"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(clipboardCheck->sizePolicy().hasHeightForWidth());
        clipboardCheck->setSizePolicy(sizePolicy3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/action-copy-char"), QSize(), QIcon::Normal, QIcon::Off);
        clipboardCheck->setIcon(icon);
        clipboardCheck->setCheckable(true);
        clipboardCheck->setToolButtonStyle(Qt::ToolButtonTextOnly);
        clipboardCheck->setAutoRaise(true);

        horizontalLayout_4->addWidget(clipboardCheck);

        uniLine = new QLineEdit(ChartWidget);
        uniLine->setObjectName(QString::fromUtf8("uniLine"));

        horizontalLayout_4->addWidget(uniLine);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        toolbar = new FloatingWidgetToolBar(ChartWidget);
        toolbar->setObjectName(QString::fromUtf8("toolbar"));

        gridLayout->addWidget(toolbar, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        unicodeCoverageStat->setBuddy(uniPlaneCombo);
        label_2->setBuddy(charSearchLine);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ChartWidget);

        QMetaObject::connectSlotsByName(ChartWidget);
    } // setupUi

    void retranslateUi(FloatingWidget *ChartWidget)
    {
        ChartWidget->setWindowTitle(QCoreApplication::translate("ChartWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        unicodeCoverageStat->setToolTip(QCoreApplication::translate("ChartWidget", "Coverage of Unicode Interval", nullptr));
#endif // QT_CONFIG(tooltip)
        unicodeCoverageStat->setText(QCoreApplication::translate("ChartWidget", "Block:", nullptr));
        label_2->setText(QCoreApplication::translate("ChartWidget", "Search:", nullptr));
#if QT_CONFIG(tooltip)
        charSearchLine->setToolTip(QCoreApplication::translate("ChartWidget", "Search a character by its codepoint (expressed in hexadecimal \n"
"and prefixed with \"U+\", \"u+\" or \"+\") or a glyph by its name.\n"
"Press enter after editing to run the search.", nullptr));
#endif // QT_CONFIG(tooltip)
        charSearchLine->setInputMask(QString());
        charSearchLine->setText(QString());
#if QT_CONFIG(statustip)
        abcView->setStatusTip(QCoreApplication::translate("ChartWidget", "Clicking on a glyph will show details about it", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        clipboardCheck->setToolTip(QCoreApplication::translate("ChartWidget", "Set Mode \"Copy Character to Clipboard\"", nullptr));
#endif // QT_CONFIG(tooltip)
        clipboardCheck->setText(QCoreApplication::translate("ChartWidget", "Copy Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChartWidget: public Ui_ChartWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTWIDGET_H
