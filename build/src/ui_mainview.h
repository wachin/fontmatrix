/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "familywidget.h"
#include "filterbar.h"
#include "fmpreviewlist.h"

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QGridLayout *gridLayout_5;
    QStackedWidget *previewStack;
    QWidget *pageList;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    FilterBar *filterBar;
    QWidget *widget;
    QGridLayout *gridLayout;
    FMPreviewView *listView;
    QWidget *quickSearchWidget;
    QGridLayout *gridLayout_4;
    QLabel *quickSearchLabel;
    QLineEdit *quickSearch;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *curFilterWidget;
    QGridLayout *gridLayout_6;
    QHBoxLayout *filterListLayout_Base;
    QHBoxLayout *filterListLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *saveButton;
    QPushButton *clearButton;
    QWidget *pageFamily;
    QGridLayout *gridLayout_14;
    FamilyWidget *familyWidget;

    void setupUi(QWidget *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(657, 526);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainView->sizePolicy().hasHeightForWidth());
        MainView->setSizePolicy(sizePolicy);
        MainView->setAcceptDrops(true);
        gridLayout_5 = new QGridLayout(MainView);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        previewStack = new QStackedWidget(MainView);
        previewStack->setObjectName(QString::fromUtf8("previewStack"));
        pageList = new QWidget();
        pageList->setObjectName(QString::fromUtf8("pageList"));
        gridLayout_3 = new QGridLayout(pageList);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter = new QSplitter(pageList);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        filterBar = new FilterBar(frame);
        filterBar->setObjectName(QString::fromUtf8("filterBar"));

        gridLayout_2->addWidget(filterBar, 0, 0, 1, 1);

        splitter->addWidget(frame);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(6);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listView = new FMPreviewView(widget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setResizeMode(QListView::Adjust);
        listView->setUniformItemSizes(true);

        gridLayout->addWidget(listView, 1, 0, 1, 1);

        quickSearchWidget = new QWidget(widget);
        quickSearchWidget->setObjectName(QString::fromUtf8("quickSearchWidget"));
        gridLayout_4 = new QGridLayout(quickSearchWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        quickSearchLabel = new QLabel(quickSearchWidget);
        quickSearchLabel->setObjectName(QString::fromUtf8("quickSearchLabel"));

        gridLayout_4->addWidget(quickSearchLabel, 0, 0, 1, 1);

        quickSearch = new QLineEdit(quickSearchWidget);
        quickSearch->setObjectName(QString::fromUtf8("quickSearch"));

        gridLayout_4->addWidget(quickSearch, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(176, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addWidget(quickSearchWidget, 2, 0, 1, 1);

        curFilterWidget = new QWidget(widget);
        curFilterWidget->setObjectName(QString::fromUtf8("curFilterWidget"));
        gridLayout_6 = new QGridLayout(curFilterWidget);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        filterListLayout_Base = new QHBoxLayout();
        filterListLayout_Base->setSpacing(4);
        filterListLayout_Base->setObjectName(QString::fromUtf8("filterListLayout_Base"));
        filterListLayout = new QHBoxLayout();
        filterListLayout->setSpacing(3);
        filterListLayout->setObjectName(QString::fromUtf8("filterListLayout"));
        filterListLayout->setContentsMargins(-1, 3, -1, 3);

        filterListLayout_Base->addLayout(filterListLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        filterListLayout_Base->addItem(horizontalSpacer_3);

        saveButton = new QPushButton(curFilterWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        filterListLayout_Base->addWidget(saveButton);

        clearButton = new QPushButton(curFilterWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        filterListLayout_Base->addWidget(clearButton);


        gridLayout_6->addLayout(filterListLayout_Base, 0, 0, 1, 1);


        gridLayout->addWidget(curFilterWidget, 0, 0, 1, 1);

        splitter->addWidget(widget);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        previewStack->addWidget(pageList);
        pageFamily = new QWidget();
        pageFamily->setObjectName(QString::fromUtf8("pageFamily"));
        gridLayout_14 = new QGridLayout(pageFamily);
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        familyWidget = new FamilyWidget(pageFamily);
        familyWidget->setObjectName(QString::fromUtf8("familyWidget"));

        gridLayout_14->addWidget(familyWidget, 0, 0, 1, 1);

        previewStack->addWidget(pageFamily);

        gridLayout_5->addWidget(previewStack, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        quickSearchLabel->setBuddy(quickSearch);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainView);

        previewStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QWidget *MainView)
    {
        MainView->setWindowTitle(QCoreApplication::translate("MainView", "main view widget", nullptr));
        quickSearchLabel->setText(QCoreApplication::translate("MainView", "Quick Search:", nullptr));
#if QT_CONFIG(tooltip)
        saveButton->setToolTip(QCoreApplication::translate("MainView", "Save this filter for later use", nullptr));
#endif // QT_CONFIG(tooltip)
        saveButton->setText(QCoreApplication::translate("MainView", "Save", nullptr));
#if QT_CONFIG(tooltip)
        clearButton->setToolTip(QCoreApplication::translate("MainView", "Reset the filter to show all fonts", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton->setText(QCoreApplication::translate("MainView", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
