/********************************************************************************
** Form generated from reading UI file 'samplewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLEWIDGET_H
#define UI_SAMPLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "floatingwidget.h"
#include "floatingwidgettoolbar.h"
#include "fmsampletextview.h"

QT_BEGIN_NAMESPACE

class Ui_SampleWidget
{
public:
    QGridLayout *gridLayout_2;
    FloatingWidgetToolBar *toolbar;
    QStackedWidget *stackedViews;
    QWidget *pageFT;
    QGridLayout *gridLayout;
    QGridLayout *sampleGridLayout;
    FMSampleTextView *loremView_FT;
    QWidget *pageAbs;
    QGridLayout *gridLayout_5;
    FMSampleTextView *loremView;
    QWidget *pageHiddenPrefs;
    QGroupBox *groupBox_4;
    QGridLayout *gLt_2;
    QComboBox *langCombo;
    QComboBox *shaperTypeCombo;
    QLabel *label_4;
    QLabel *label_3;
    QCheckBox *useShaperCheck;
    QWidget *pageOpenType;
    QFrame *opentypeWidget;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QTreeWidget *OpenTypeTree;
    QPushButton *saveDefOTFBut;
    QPushButton *resetDefOTFBut;
    QSpacerItem *horizontalSpacer;
    QWidget *pageSamples;
    QWidget *sampleEditWidget;
    QGridLayout *gridLayout_6;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QTreeWidget *sampleTextTree;
    QPushButton *addSampleButton;
    QPushButton *removeSampleButton;
    QPlainTextEdit *sampleEdit;

    void setupUi(FloatingWidget *SampleWidget)
    {
        if (SampleWidget->objectName().isEmpty())
            SampleWidget->setObjectName(QString::fromUtf8("SampleWidget"));
        SampleWidget->resize(663, 620);
        gridLayout_2 = new QGridLayout(SampleWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        toolbar = new FloatingWidgetToolBar(SampleWidget);
        toolbar->setObjectName(QString::fromUtf8("toolbar"));

        gridLayout_2->addWidget(toolbar, 0, 0, 1, 1);

        stackedViews = new QStackedWidget(SampleWidget);
        stackedViews->setObjectName(QString::fromUtf8("stackedViews"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedViews->sizePolicy().hasHeightForWidth());
        stackedViews->setSizePolicy(sizePolicy);
        pageFT = new QWidget();
        pageFT->setObjectName(QString::fromUtf8("pageFT"));
        gridLayout = new QGridLayout(pageFT);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sampleGridLayout = new QGridLayout();
        sampleGridLayout->setObjectName(QString::fromUtf8("sampleGridLayout"));
        loremView_FT = new FMSampleTextView(pageFT);
        loremView_FT->setObjectName(QString::fromUtf8("loremView_FT"));
        loremView_FT->setFocusPolicy(Qt::NoFocus);
        loremView_FT->setFrameShape(QFrame::NoFrame);

        sampleGridLayout->addWidget(loremView_FT, 0, 0, 1, 1);


        gridLayout->addLayout(sampleGridLayout, 0, 0, 1, 1);

        stackedViews->addWidget(pageFT);
        pageAbs = new QWidget();
        pageAbs->setObjectName(QString::fromUtf8("pageAbs"));
        gridLayout_5 = new QGridLayout(pageAbs);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        loremView = new FMSampleTextView(pageAbs);
        loremView->setObjectName(QString::fromUtf8("loremView"));
        loremView->setFocusPolicy(Qt::NoFocus);
        loremView->setFrameShape(QFrame::NoFrame);

        gridLayout_5->addWidget(loremView, 0, 0, 1, 2);

        stackedViews->addWidget(pageAbs);
        pageHiddenPrefs = new QWidget();
        pageHiddenPrefs->setObjectName(QString::fromUtf8("pageHiddenPrefs"));
        groupBox_4 = new QGroupBox(pageHiddenPrefs);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(100, 70, 260, 131));
        gLt_2 = new QGridLayout(groupBox_4);
        gLt_2->setContentsMargins(3, 3, 3, 3);
        gLt_2->setObjectName(QString::fromUtf8("gLt_2"));
        gLt_2->setVerticalSpacing(2);
        langCombo = new QComboBox(groupBox_4);
        langCombo->setObjectName(QString::fromUtf8("langCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(langCombo->sizePolicy().hasHeightForWidth());
        langCombo->setSizePolicy(sizePolicy1);

        gLt_2->addWidget(langCombo, 2, 1, 1, 1);

        shaperTypeCombo = new QComboBox(groupBox_4);
        shaperTypeCombo->setObjectName(QString::fromUtf8("shaperTypeCombo"));
        sizePolicy1.setHeightForWidth(shaperTypeCombo->sizePolicy().hasHeightForWidth());
        shaperTypeCombo->setSizePolicy(sizePolicy1);

        gLt_2->addWidget(shaperTypeCombo, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gLt_2->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gLt_2->addWidget(label_3, 1, 0, 1, 1);

        useShaperCheck = new QCheckBox(groupBox_4);
        useShaperCheck->setObjectName(QString::fromUtf8("useShaperCheck"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(useShaperCheck->sizePolicy().hasHeightForWidth());
        useShaperCheck->setSizePolicy(sizePolicy3);

        gLt_2->addWidget(useShaperCheck, 0, 0, 1, 2);

        stackedViews->addWidget(pageHiddenPrefs);
        pageOpenType = new QWidget();
        pageOpenType->setObjectName(QString::fromUtf8("pageOpenType"));
        opentypeWidget = new QFrame(pageOpenType);
        opentypeWidget->setObjectName(QString::fromUtf8("opentypeWidget"));
        opentypeWidget->setGeometry(QRect(40, 0, 321, 591));
        gridLayout_7 = new QGridLayout(opentypeWidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        splitter = new QSplitter(opentypeWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        OpenTypeTree = new QTreeWidget(splitter);
        OpenTypeTree->setObjectName(QString::fromUtf8("OpenTypeTree"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(OpenTypeTree->sizePolicy().hasHeightForWidth());
        OpenTypeTree->setSizePolicy(sizePolicy4);
        OpenTypeTree->setFocusPolicy(Qt::NoFocus);
        OpenTypeTree->setAlternatingRowColors(true);
        OpenTypeTree->setColumnCount(2);
        splitter->addWidget(OpenTypeTree);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 3);

        saveDefOTFBut = new QPushButton(opentypeWidget);
        saveDefOTFBut->setObjectName(QString::fromUtf8("saveDefOTFBut"));

        gridLayout_4->addWidget(saveDefOTFBut, 1, 0, 1, 1);

        resetDefOTFBut = new QPushButton(opentypeWidget);
        resetDefOTFBut->setObjectName(QString::fromUtf8("resetDefOTFBut"));

        gridLayout_4->addWidget(resetDefOTFBut, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 1);

        stackedViews->addWidget(pageOpenType);
        pageSamples = new QWidget();
        pageSamples->setObjectName(QString::fromUtf8("pageSamples"));
        sampleEditWidget = new QWidget(pageSamples);
        sampleEditWidget->setObjectName(QString::fromUtf8("sampleEditWidget"));
        sampleEditWidget->setGeometry(QRect(60, 80, 451, 381));
        gridLayout_6 = new QGridLayout(sampleEditWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget = new QWidget(sampleEditWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy5);
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sampleTextTree = new QTreeWidget(widget);
        sampleTextTree->setObjectName(QString::fromUtf8("sampleTextTree"));
        sampleTextTree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        sampleTextTree->setHeaderHidden(true);

        gridLayout_3->addWidget(sampleTextTree, 0, 0, 1, 2);

        addSampleButton = new QPushButton(widget);
        addSampleButton->setObjectName(QString::fromUtf8("addSampleButton"));

        gridLayout_3->addWidget(addSampleButton, 1, 0, 1, 1);

        removeSampleButton = new QPushButton(widget);
        removeSampleButton->setObjectName(QString::fromUtf8("removeSampleButton"));

        gridLayout_3->addWidget(removeSampleButton, 1, 1, 1, 1);


        gridLayout_6->addWidget(widget, 0, 0, 1, 1);

        sampleEdit = new QPlainTextEdit(sampleEditWidget);
        sampleEdit->setObjectName(QString::fromUtf8("sampleEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(3);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(sampleEdit->sizePolicy().hasHeightForWidth());
        sampleEdit->setSizePolicy(sizePolicy6);

        gridLayout_6->addWidget(sampleEdit, 0, 1, 1, 1);

        stackedViews->addWidget(pageSamples);

        gridLayout_2->addWidget(stackedViews, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(langCombo);
        label_3->setBuddy(shaperTypeCombo);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SampleWidget);

        stackedViews->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SampleWidget);
    } // setupUi

    void retranslateUi(FloatingWidget *SampleWidget)
    {
        SampleWidget->setWindowTitle(QCoreApplication::translate("SampleWidget", "Form", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SampleWidget", "World is wide", nullptr));
        label_4->setText(QCoreApplication::translate("SampleWidget", "Script", "Writing system"));
        label_3->setText(QCoreApplication::translate("SampleWidget", "Shaper type", nullptr));
        useShaperCheck->setText(QCoreApplication::translate("SampleWidget", "Use shaper", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = OpenTypeTree->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("SampleWidget", "Friendly Name", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SampleWidget", "OpenType Features", nullptr));
        saveDefOTFBut->setText(QCoreApplication::translate("SampleWidget", "Save as default", nullptr));
        resetDefOTFBut->setText(QCoreApplication::translate("SampleWidget", "Reset Default", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = sampleTextTree->headerItem();
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("SampleWidget", "1", nullptr));
        addSampleButton->setText(QCoreApplication::translate("SampleWidget", "Add", nullptr));
        removeSampleButton->setText(QCoreApplication::translate("SampleWidget", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SampleWidget: public Ui_SampleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLEWIDGET_H
