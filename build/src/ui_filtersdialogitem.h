/********************************************************************************
** Form generated from reading UI file 'filtersdialogitem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERSDIALOGITEM_H
#define UI_FILTERSDIALOGITEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FiltersDialogItem
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *filterName;
    QToolButton *filterButton;
    QToolButton *removeButton;

    void setupUi(QWidget *FiltersDialogItem)
    {
        if (FiltersDialogItem->objectName().isEmpty())
            FiltersDialogItem->setObjectName(QString::fromUtf8("FiltersDialogItem"));
        FiltersDialogItem->resize(203, 34);
        gridLayout_2 = new QGridLayout(FiltersDialogItem);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 2, -1, 2);
        frame = new QFrame(FiltersDialogItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 2, 6, 2);
        filterName = new QLabel(frame);
        filterName->setObjectName(QString::fromUtf8("filterName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filterName->sizePolicy().hasHeightForWidth());
        filterName->setSizePolicy(sizePolicy);
        filterName->setMaximumSize(QSize(1000, 24));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        filterName->setFont(font);
        filterName->setTextFormat(Qt::PlainText);
        filterName->setWordWrap(false);

        gridLayout->addWidget(filterName, 0, 0, 1, 1);

        filterButton = new QToolButton(frame);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));
        filterButton->setMaximumSize(QSize(16, 16));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/graphic-resources/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterButton->setIcon(icon);

        gridLayout->addWidget(filterButton, 0, 1, 1, 1);

        removeButton = new QToolButton(frame);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setMaximumSize(QSize(16, 16));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/graphic-resources/filter-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon1);
        removeButton->setAutoRaise(true);

        gridLayout->addWidget(removeButton, 0, 2, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(FiltersDialogItem);

        QMetaObject::connectSlotsByName(FiltersDialogItem);
    } // setupUi

    void retranslateUi(QWidget *FiltersDialogItem)
    {
        FiltersDialogItem->setWindowTitle(QCoreApplication::translate("FiltersDialogItem", "Form", nullptr));
        filterName->setText(QCoreApplication::translate("FiltersDialogItem", "filter name", nullptr));
#if QT_CONFIG(tooltip)
        filterButton->setToolTip(QCoreApplication::translate("FiltersDialogItem", "Apply this filter to the list", nullptr));
#endif // QT_CONFIG(tooltip)
        filterButton->setText(QCoreApplication::translate("FiltersDialogItem", "Filter", nullptr));
#if QT_CONFIG(tooltip)
        removeButton->setToolTip(QCoreApplication::translate("FiltersDialogItem", "Delete this filter", nullptr));
#endif // QT_CONFIG(tooltip)
        removeButton->setText(QCoreApplication::translate("FiltersDialogItem", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FiltersDialogItem: public Ui_FiltersDialogItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERSDIALOGITEM_H
