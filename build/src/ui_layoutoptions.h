/********************************************************************************
** Form generated from reading UI file 'layoutoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTOPTIONS_H
#define UI_LAYOUTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayoutOptionWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSlider *beforeSlid;
    QLabel *bScore;
    QLabel *label;
    QGridLayout *gridLayout_3;
    QSlider *fitSlid;
    QLabel *eScore;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_4;
    QSlider *afterSlid;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *aScore;
    QLabel *label_3;
    QGridLayout *gridLayout_5;
    QSlider *endSlid;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QLabel *endScore;
    QLabel *label_5;
    QGridLayout *gridLayout_6;
    QSlider *hyphSlid;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QLabel *hPenalty;
    QLabel *label_4;
    QGridLayout *gridLayout_7;
    QSlider *spaceSlid;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_12;
    QLabel *minSpace;
    QLabel *label_6;

    void setupUi(QWidget *LayoutOptionWidget)
    {
        if (LayoutOptionWidget->objectName().isEmpty())
            LayoutOptionWidget->setObjectName(QString::fromUtf8("LayoutOptionWidget"));
        LayoutOptionWidget->resize(396, 350);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LayoutOptionWidget->sizePolicy().hasHeightForWidth());
        LayoutOptionWidget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(LayoutOptionWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(LayoutOptionWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        beforeSlid = new QSlider(groupBox);
        beforeSlid->setObjectName(QString::fromUtf8("beforeSlid"));
        beforeSlid->setMinimum(1);
        beforeSlid->setMaximum(1000);
        beforeSlid->setTracking(true);
        beforeSlid->setOrientation(Qt::Vertical);
        beforeSlid->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(beforeSlid, 0, 1, 1, 1);

        bScore = new QLabel(groupBox);
        bScore->setObjectName(QString::fromUtf8("bScore"));
        bScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(bScore, 1, 0, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 2, 0, 1, 3);


        gridLayout_8->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        fitSlid = new QSlider(groupBox);
        fitSlid->setObjectName(QString::fromUtf8("fitSlid"));
        fitSlid->setMinimum(1);
        fitSlid->setMaximum(1000);
        fitSlid->setTracking(true);
        fitSlid->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(fitSlid, 0, 1, 1, 1);

        eScore = new QLabel(groupBox);
        eScore->setObjectName(QString::fromUtf8("eScore"));
        eScore->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(eScore, 1, 0, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_2->setWordWrap(true);

        gridLayout_3->addWidget(label_2, 2, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        afterSlid = new QSlider(groupBox);
        afterSlid->setObjectName(QString::fromUtf8("afterSlid"));
        afterSlid->setMinimum(1);
        afterSlid->setMaximum(1000);
        afterSlid->setTracking(true);
        afterSlid->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(afterSlid, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        aScore = new QLabel(groupBox);
        aScore->setObjectName(QString::fromUtf8("aScore"));
        aScore->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(aScore, 1, 0, 1, 3);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_3->setWordWrap(true);

        gridLayout_4->addWidget(label_3, 2, 0, 1, 3);


        gridLayout_8->addLayout(gridLayout_4, 0, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        endSlid = new QSlider(groupBox);
        endSlid->setObjectName(QString::fromUtf8("endSlid"));
        endSlid->setMinimum(1);
        endSlid->setMaximum(1000);
        endSlid->setTracking(true);
        endSlid->setOrientation(Qt::Vertical);

        gridLayout_5->addWidget(endSlid, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        endScore = new QLabel(groupBox);
        endScore->setObjectName(QString::fromUtf8("endScore"));
        endScore->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(endScore, 1, 0, 1, 3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_5, 2, 0, 1, 3);


        gridLayout_8->addLayout(gridLayout_5, 0, 3, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        hyphSlid = new QSlider(groupBox);
        hyphSlid->setObjectName(QString::fromUtf8("hyphSlid"));
        hyphSlid->setMaximum(1000);
        hyphSlid->setTracking(true);
        hyphSlid->setOrientation(Qt::Vertical);

        gridLayout_6->addWidget(hyphSlid, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_10, 0, 2, 1, 1);

        hPenalty = new QLabel(groupBox);
        hPenalty->setObjectName(QString::fromUtf8("hPenalty"));
        hPenalty->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(hPenalty, 1, 0, 1, 3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_4->setWordWrap(true);

        gridLayout_6->addWidget(label_4, 2, 0, 1, 3);


        gridLayout_8->addLayout(gridLayout_6, 0, 4, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        spaceSlid = new QSlider(groupBox);
        spaceSlid->setObjectName(QString::fromUtf8("spaceSlid"));
        spaceSlid->setMinimum(1);
        spaceSlid->setMaximum(100);
        spaceSlid->setOrientation(Qt::Vertical);

        gridLayout_7->addWidget(spaceSlid, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 0, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 0, 3, 1, 1);

        minSpace = new QLabel(groupBox);
        minSpace->setObjectName(QString::fromUtf8("minSpace"));
        minSpace->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(minSpace, 1, 0, 1, 4);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);

        gridLayout_7->addWidget(label_6, 2, 0, 1, 4);


        gridLayout_8->addLayout(gridLayout_7, 0, 5, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        bScore->setBuddy(beforeSlid);
        eScore->setBuddy(fitSlid);
        aScore->setBuddy(afterSlid);
        endScore->setBuddy(endSlid);
        hPenalty->setBuddy(hyphSlid);
        minSpace->setBuddy(spaceSlid);
#endif // QT_CONFIG(shortcut)

        retranslateUi(LayoutOptionWidget);

        QMetaObject::connectSlotsByName(LayoutOptionWidget);
    } // setupUi

    void retranslateUi(QWidget *LayoutOptionWidget)
    {
        LayoutOptionWidget->setWindowTitle(QCoreApplication::translate("LayoutOptionWidget", "Text layout engine options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LayoutOptionWidget", "Weights", nullptr));
        bScore->setText(QCoreApplication::translate("LayoutOptionWidget", "score", nullptr));
        label->setText(QCoreApplication::translate("LayoutOptionWidget", "Before", nullptr));
        eScore->setText(QCoreApplication::translate("LayoutOptionWidget", "score", nullptr));
        label_2->setText(QCoreApplication::translate("LayoutOptionWidget", "Exact", nullptr));
        aScore->setText(QCoreApplication::translate("LayoutOptionWidget", "score", nullptr));
        label_3->setText(QCoreApplication::translate("LayoutOptionWidget", "After", nullptr));
        endScore->setText(QCoreApplication::translate("LayoutOptionWidget", "score", nullptr));
        label_5->setText(QCoreApplication::translate("LayoutOptionWidget", "End", nullptr));
        hPenalty->setText(QCoreApplication::translate("LayoutOptionWidget", "penalty", nullptr));
        label_4->setText(QCoreApplication::translate("LayoutOptionWidget", "H-penalty", nullptr));
        minSpace->setText(QCoreApplication::translate("LayoutOptionWidget", "space", nullptr));
        label_6->setText(QCoreApplication::translate("LayoutOptionWidget", "Max. compression", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutOptionWidget: public Ui_LayoutOptionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTOPTIONS_H
