/********************************************************************************
** Form generated from reading UI file 'filteritem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERITEM_H
#define UI_FILTERITEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterItem
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *filterLabel;
    QHBoxLayout *horizontalLayout;
    QToolButton *removeButton;
    QToolButton *andButton;
    QToolButton *noButton;

    void setupUi(QWidget *FilterItem)
    {
        if (FilterItem->objectName().isEmpty())
            FilterItem->setObjectName(QString::fromUtf8("FilterItem"));
        FilterItem->resize(149, 31);
        gridLayout = new QGridLayout(FilterItem);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(FilterItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        filterLabel = new QLabel(frame);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));
        filterLabel->setMaximumSize(QSize(16777215, 24));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        filterLabel->setFont(font);

        gridLayout_2->addWidget(filterLabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        removeButton = new QToolButton(frame);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setMaximumSize(QSize(16, 16));
        removeButton->setFont(font);
        removeButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/graphic-resources/filter-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon);
        removeButton->setAutoRaise(true);

        horizontalLayout->addWidget(removeButton);

        andButton = new QToolButton(frame);
        andButton->setObjectName(QString::fromUtf8("andButton"));
        andButton->setMaximumSize(QSize(16, 16));
        andButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/graphic-resources/filter-and.png"), QSize(), QIcon::Normal, QIcon::Off);
        andButton->setIcon(icon1);
        andButton->setCheckable(true);
        andButton->setAutoRaise(true);

        horizontalLayout->addWidget(andButton);

        noButton = new QToolButton(frame);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        noButton->setMaximumSize(QSize(16, 16));
        noButton->setFont(font);
        noButton->setCheckable(true);
        noButton->setAutoRaise(true);

        horizontalLayout->addWidget(noButton);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(FilterItem);

        QMetaObject::connectSlotsByName(FilterItem);
    } // setupUi

    void retranslateUi(QWidget *FilterItem)
    {
        FilterItem->setWindowTitle(QCoreApplication::translate("FilterItem", "Form", nullptr));
        filterLabel->setText(QCoreApplication::translate("FilterItem", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        removeButton->setToolTip(QCoreApplication::translate("FilterItem", "Remove Filter", nullptr));
#endif // QT_CONFIG(tooltip)
        removeButton->setText(QCoreApplication::translate("FilterItem", "X", nullptr));
#if QT_CONFIG(tooltip)
        andButton->setToolTip(QCoreApplication::translate("FilterItem", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If set, the filter will <span style=\" font-weight:600;\">intersect</span> with the previous filters.</p></td></tr></table></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        andButton->setText(QCoreApplication::translate("FilterItem", "&&", nullptr));
#if QT_CONFIG(tooltip)
        noButton->setToolTip(QCoreApplication::translate("FilterItem", "if set, it will filter all the fonts but these matching this filter", nullptr));
#endif // QT_CONFIG(tooltip)
        noButton->setText(QCoreApplication::translate("FilterItem", "!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterItem: public Ui_FilterItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERITEM_H
