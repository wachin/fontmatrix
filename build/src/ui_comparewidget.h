/********************************************************************************
** Form generated from reading UI file 'comparewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPAREWIDGET_H
#define UI_COMPAREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fmfontcompareview.h"

QT_BEGIN_NAMESPACE

class Ui_CompareWidget
{
public:
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *fgbox;
    QGridLayout *gridLayout_15;
    QListWidget *compareList;
    QPushButton *compareAdd;
    QPushButton *compareRemove;
    QSpacerItem *horizontalSpacer;
    QGroupBox *compareShow;
    QGridLayout *gridLayout_16;
    QCheckBox *compareMetrics;
    QGroupBox *comparePoints;
    QGridLayout *gridLayout_2;
    QCheckBox *compareControls;
    QSlider *compareOffset;
    QLabel *label;
    QLabel *compareOffsetValue;
    QComboBox *compareFillColor;
    QLabel *label_2;
    FMFontCompareView *compareView;
    QSlider *compareCharSelect;
    QCheckBox *compareSyncChars;
    QComboBox *compareCharBox;

    void setupUi(QWidget *CompareWidget)
    {
        if (CompareWidget->objectName().isEmpty())
            CompareWidget->setObjectName(QString::fromUtf8("CompareWidget"));
        CompareWidget->resize(547, 434);
        gridLayout_3 = new QGridLayout(CompareWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter = new QSplitter(CompareWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        fgbox = new QGroupBox(widget);
        fgbox->setObjectName(QString::fromUtf8("fgbox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fgbox->sizePolicy().hasHeightForWidth());
        fgbox->setSizePolicy(sizePolicy1);
        gridLayout_15 = new QGridLayout(fgbox);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        compareList = new QListWidget(fgbox);
        compareList->setObjectName(QString::fromUtf8("compareList"));

        gridLayout_15->addWidget(compareList, 0, 0, 1, 3);

        compareAdd = new QPushButton(fgbox);
        compareAdd->setObjectName(QString::fromUtf8("compareAdd"));

        gridLayout_15->addWidget(compareAdd, 1, 1, 1, 1);

        compareRemove = new QPushButton(fgbox);
        compareRemove->setObjectName(QString::fromUtf8("compareRemove"));

        gridLayout_15->addWidget(compareRemove, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer, 1, 0, 1, 1);


        verticalLayout_2->addWidget(fgbox);

        compareShow = new QGroupBox(widget);
        compareShow->setObjectName(QString::fromUtf8("compareShow"));
        compareShow->setCheckable(true);
        gridLayout_16 = new QGridLayout(compareShow);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        compareMetrics = new QCheckBox(compareShow);
        compareMetrics->setObjectName(QString::fromUtf8("compareMetrics"));

        gridLayout_16->addWidget(compareMetrics, 2, 0, 1, 2);

        comparePoints = new QGroupBox(compareShow);
        comparePoints->setObjectName(QString::fromUtf8("comparePoints"));
        comparePoints->setEnabled(true);
        comparePoints->setCheckable(true);
        comparePoints->setChecked(false);
        gridLayout_2 = new QGridLayout(comparePoints);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        compareControls = new QCheckBox(comparePoints);
        compareControls->setObjectName(QString::fromUtf8("compareControls"));

        gridLayout_2->addWidget(compareControls, 0, 0, 1, 1);


        gridLayout_16->addWidget(comparePoints, 1, 0, 1, 3);

        compareOffset = new QSlider(compareShow);
        compareOffset->setObjectName(QString::fromUtf8("compareOffset"));
        compareOffset->setMaximum(1000);
        compareOffset->setOrientation(Qt::Horizontal);
        compareOffset->setTickPosition(QSlider::NoTicks);
        compareOffset->setTickInterval(500);

        gridLayout_16->addWidget(compareOffset, 3, 1, 1, 1);

        label = new QLabel(compareShow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_16->addWidget(label, 3, 0, 1, 1);

        compareOffsetValue = new QLabel(compareShow);
        compareOffsetValue->setObjectName(QString::fromUtf8("compareOffsetValue"));

        gridLayout_16->addWidget(compareOffsetValue, 3, 2, 1, 1);

        compareFillColor = new QComboBox(compareShow);
        compareFillColor->setObjectName(QString::fromUtf8("compareFillColor"));

        gridLayout_16->addWidget(compareFillColor, 0, 1, 1, 2);

        label_2 = new QLabel(compareShow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_16->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout_2->addWidget(compareShow);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        splitter->addWidget(widget);
        compareView = new FMFontCompareView(splitter);
        compareView->setObjectName(QString::fromUtf8("compareView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(compareView->sizePolicy().hasHeightForWidth());
        compareView->setSizePolicy(sizePolicy2);
        splitter->addWidget(compareView);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 4);

        compareCharSelect = new QSlider(CompareWidget);
        compareCharSelect->setObjectName(QString::fromUtf8("compareCharSelect"));
        compareCharSelect->setMinimum(1);
        compareCharSelect->setValue(1);
        compareCharSelect->setTracking(true);
        compareCharSelect->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(compareCharSelect, 1, 1, 1, 1);

        compareSyncChars = new QCheckBox(CompareWidget);
        compareSyncChars->setObjectName(QString::fromUtf8("compareSyncChars"));
        compareSyncChars->setChecked(true);

        gridLayout_3->addWidget(compareSyncChars, 1, 0, 1, 1);

        compareCharBox = new QComboBox(CompareWidget);
        compareCharBox->setObjectName(QString::fromUtf8("compareCharBox"));
        compareCharBox->setMaxVisibleItems(12);
        compareCharBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        compareCharBox->setMinimumContentsLength(8);

        gridLayout_3->addWidget(compareCharBox, 1, 2, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(compareOffset);
        label_2->setBuddy(compareFillColor);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CompareWidget);

        QMetaObject::connectSlotsByName(CompareWidget);
    } // setupUi

    void retranslateUi(QWidget *CompareWidget)
    {
        CompareWidget->setWindowTitle(QCoreApplication::translate("CompareWidget", "Compare Glyphs", nullptr));
        fgbox->setTitle(QCoreApplication::translate("CompareWidget", "Fonts", nullptr));
        compareAdd->setText(QCoreApplication::translate("CompareWidget", "Add", nullptr));
        compareRemove->setText(QCoreApplication::translate("CompareWidget", "Remove", nullptr));
        compareShow->setTitle(QCoreApplication::translate("CompareWidget", "Show", nullptr));
        compareMetrics->setText(QCoreApplication::translate("CompareWidget", "Metrics", nullptr));
        comparePoints->setTitle(QCoreApplication::translate("CompareWidget", "Points", nullptr));
        compareControls->setText(QCoreApplication::translate("CompareWidget", "Controls", nullptr));
        label->setText(QCoreApplication::translate("CompareWidget", "Offset", nullptr));
        compareOffsetValue->setText(QCoreApplication::translate("CompareWidget", "0", nullptr));
        label_2->setText(QCoreApplication::translate("CompareWidget", "Fill:", nullptr));
#if QT_CONFIG(tooltip)
        compareCharSelect->setToolTip(QCoreApplication::translate("CompareWidget", "Select a character", nullptr));
#endif // QT_CONFIG(tooltip)
        compareSyncChars->setText(QCoreApplication::translate("CompareWidget", "Keep in sync", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompareWidget: public Ui_CompareWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPAREWIDGET_H
