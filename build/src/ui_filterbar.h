/********************************************************************************
** Form generated from reading UI file 'filterbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERBAR_H
#define UI_FILTERBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "filterbar.h"
#include "openclosearrow.h"
#include "panosewidget.h"

QT_BEGIN_NAMESPACE

class Ui_FilterBar
{
public:
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    OpenCloseArrow *filtersArrow;
    QSpacerItem *horizontalSpacer_5;
    QWidget *filtersBox;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QVBoxLayout *filtersLayout;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    OpenCloseArrow *tagsArrow;
    QSpacerItem *horizontalSpacer;
    QWidget *tagsBox;
    QGridLayout *gridLayout_5;
    TagListView *tagsView;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    OpenCloseArrow *metadataArrow;
    QSpacerItem *horizontalSpacer_2;
    QWidget *metadataBox;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *metadataLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *fieldCombo;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    OpenCloseArrow *panoseArrow;
    QSpacerItem *horizontalSpacer_4;
    QWidget *panoseBox;
    QGridLayout *gridLayout_3;
    PanoseWidget *panoseWidget;
    QFrame *line_3;
    QFrame *line_4;

    void setupUi(QWidget *FilterBar)
    {
        if (FilterBar->objectName().isEmpty())
            FilterBar->setObjectName(QString::fromUtf8("FilterBar"));
        FilterBar->resize(240, 761);
        gridLayout_8 = new QGridLayout(FilterBar);
        gridLayout_8->setSpacing(2);
        gridLayout_8->setContentsMargins(6, 6, 6, 6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 14, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 3, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        filtersArrow = new OpenCloseArrow(FilterBar);
        filtersArrow->setObjectName(QString::fromUtf8("filtersArrow"));

        horizontalLayout_5->addWidget(filtersArrow);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_5);

        filtersBox = new QWidget(FilterBar);
        filtersBox->setObjectName(QString::fromUtf8("filtersBox"));
        gridLayout_2 = new QGridLayout(filtersBox);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(filtersBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 226, 172));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        filtersLayout = new QVBoxLayout();
        filtersLayout->setSpacing(0);
        filtersLayout->setObjectName(QString::fromUtf8("filtersLayout"));

        gridLayout->addLayout(filtersLayout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);


        verticalLayout_5->addWidget(filtersBox);


        gridLayout_8->addLayout(verticalLayout_5, 7, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tagsArrow = new OpenCloseArrow(FilterBar);
        tagsArrow->setObjectName(QString::fromUtf8("tagsArrow"));

        horizontalLayout->addWidget(tagsArrow);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tagsBox = new QWidget(FilterBar);
        tagsBox->setObjectName(QString::fromUtf8("tagsBox"));
        gridLayout_5 = new QGridLayout(tagsBox);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tagsView = new TagListView(tagsBox);
        tagsView->setObjectName(QString::fromUtf8("tagsView"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 0));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(212, 208, 200, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        tagsView->setPalette(palette);
        tagsView->setFocusPolicy(Qt::NoFocus);
        tagsView->setAutoFillBackground(false);
        tagsView->setFrameShape(QFrame::NoFrame);
        tagsView->setFrameShadow(QFrame::Plain);
        tagsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tagsView->setAutoScroll(false);
        tagsView->setEditTriggers(QAbstractItemView::DoubleClicked);
        tagsView->setSelectionMode(QAbstractItemView::NoSelection);
        tagsView->setMovement(QListView::Static);
        tagsView->setResizeMode(QListView::Adjust);
        tagsView->setViewMode(QListView::ListMode);
        tagsView->setModelColumn(0);
        tagsView->setSelectionRectVisible(false);

        gridLayout_5->addWidget(tagsView, 0, 0, 1, 1);


        verticalLayout->addWidget(tagsBox);


        gridLayout_8->addLayout(verticalLayout, 9, 0, 1, 1);

        line_2 = new QFrame(FilterBar);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_2, 8, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        metadataArrow = new OpenCloseArrow(FilterBar);
        metadataArrow->setObjectName(QString::fromUtf8("metadataArrow"));

        horizontalLayout_3->addWidget(metadataArrow);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        metadataBox = new QWidget(FilterBar);
        metadataBox->setObjectName(QString::fromUtf8("metadataBox"));
        gridLayout_4 = new QGridLayout(metadataBox);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 3, -1, 3);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(metadataBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        metadataLineEdit = new QLineEdit(metadataBox);
        metadataLineEdit->setObjectName(QString::fromUtf8("metadataLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(metadataLineEdit->sizePolicy().hasHeightForWidth());
        metadataLineEdit->setSizePolicy(sizePolicy1);
        metadataLineEdit->setMinimumSize(QSize(172, 0));

        horizontalLayout_6->addWidget(metadataLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(metadataBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        fieldCombo = new QComboBox(metadataBox);
        fieldCombo->setObjectName(QString::fromUtf8("fieldCombo"));
        sizePolicy1.setHeightForWidth(fieldCombo->sizePolicy().hasHeightForWidth());
        fieldCombo->setSizePolicy(sizePolicy1);
        fieldCombo->setMinimumSize(QSize(172, 0));

        horizontalLayout_2->addWidget(fieldCombo);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(metadataBox);


        gridLayout_8->addLayout(verticalLayout_3, 11, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 3, -1, 3);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        panoseArrow = new OpenCloseArrow(FilterBar);
        panoseArrow->setObjectName(QString::fromUtf8("panoseArrow"));

        horizontalLayout_4->addWidget(panoseArrow);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_4);

        panoseBox = new QWidget(FilterBar);
        panoseBox->setObjectName(QString::fromUtf8("panoseBox"));
        gridLayout_3 = new QGridLayout(panoseBox);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        panoseWidget = new PanoseWidget(panoseBox);
        panoseWidget->setObjectName(QString::fromUtf8("panoseWidget"));

        gridLayout_3->addWidget(panoseWidget, 0, 0, 1, 1);


        verticalLayout_4->addWidget(panoseBox);


        gridLayout_8->addLayout(verticalLayout_4, 13, 0, 1, 1);

        line_3 = new QFrame(FilterBar);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_3, 10, 0, 1, 1);

        line_4 = new QFrame(FilterBar);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_4, 12, 0, 1, 1);


        retranslateUi(FilterBar);

        QMetaObject::connectSlotsByName(FilterBar);
    } // setupUi

    void retranslateUi(QWidget *FilterBar)
    {
        FilterBar->setWindowTitle(QCoreApplication::translate("FilterBar", "Form", nullptr));
        filtersArrow->setText(QCoreApplication::translate("FilterBar", "Filters", nullptr));
        tagsArrow->setText(QCoreApplication::translate("FilterBar", "Tags", nullptr));
        metadataArrow->setText(QCoreApplication::translate("FilterBar", "Metadata", nullptr));
        label_2->setText(QCoreApplication::translate("FilterBar", "Search", nullptr));
        label->setText(QCoreApplication::translate("FilterBar", "in", nullptr));
        panoseArrow->setText(QCoreApplication::translate("FilterBar", "Panose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterBar: public Ui_FilterBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERBAR_H
