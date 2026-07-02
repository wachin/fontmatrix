/********************************************************************************
** Form generated from reading UI file 'filtersdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERSDIALOG_H
#define UI_FILTERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FiltersDialog
{
public:
    QGridLayout *gridLayout_8;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QVBoxLayout *filtersLayout;
    QStackedWidget *messageStack;
    QWidget *pageImpossible;
    QGridLayout *gridLayout_6;
    QWidget *addImpossible;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QWidget *pagePossible;
    QGridLayout *gridLayout_7;
    QWidget *addPossible;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QFrame *line;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *newName;
    QPushButton *addButton;
    QLabel *curFilter;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *FiltersDialog)
    {
        if (FiltersDialog->objectName().isEmpty())
            FiltersDialog->setObjectName(QString::fromUtf8("FiltersDialog"));
        FiltersDialog->resize(494, 448);
        gridLayout_8 = new QGridLayout(FiltersDialog);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setVerticalSpacing(0);
        scrollArea = new QScrollArea(FiltersDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 480, 311));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        filtersLayout = new QVBoxLayout();
        filtersLayout->setObjectName(QString::fromUtf8("filtersLayout"));

        gridLayout_3->addLayout(filtersLayout, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_8->addWidget(scrollArea, 0, 0, 1, 1);

        messageStack = new QStackedWidget(FiltersDialog);
        messageStack->setObjectName(QString::fromUtf8("messageStack"));
        pageImpossible = new QWidget();
        pageImpossible->setObjectName(QString::fromUtf8("pageImpossible"));
        gridLayout_6 = new QGridLayout(pageImpossible);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        addImpossible = new QWidget(pageImpossible);
        addImpossible->setObjectName(QString::fromUtf8("addImpossible"));
        gridLayout_4 = new QGridLayout(addImpossible);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(addImpossible);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setWordWrap(true);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(addImpossible, 0, 0, 1, 1);

        messageStack->addWidget(pageImpossible);
        pagePossible = new QWidget();
        pagePossible->setObjectName(QString::fromUtf8("pagePossible"));
        gridLayout_7 = new QGridLayout(pagePossible);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        addPossible = new QWidget(pagePossible);
        addPossible->setObjectName(QString::fromUtf8("addPossible"));
        gridLayout_2 = new QGridLayout(addPossible);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(addPossible);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        line = new QFrame(addPossible);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 1, 1, 1);

        frame = new QFrame(addPossible);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        newName = new QLineEdit(frame);
        newName->setObjectName(QString::fromUtf8("newName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(newName->sizePolicy().hasHeightForWidth());
        newName->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(newName);

        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(addButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        curFilter = new QLabel(frame);
        curFilter->setObjectName(QString::fromUtf8("curFilter"));

        gridLayout->addWidget(curFilter, 1, 0, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 2);


        gridLayout_7->addWidget(addPossible, 0, 0, 1, 1);

        messageStack->addWidget(pagePossible);

        gridLayout_8->addWidget(messageStack, 1, 0, 1, 1);

        widget = new QWidget(FiltersDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(402, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);

        closeButton = new QPushButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout_5->addWidget(closeButton, 0, 1, 1, 1);


        gridLayout_8->addWidget(widget, 2, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(newName);
#endif // QT_CONFIG(shortcut)

        retranslateUi(FiltersDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), FiltersDialog, SLOT(close()));

        messageStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FiltersDialog);
    } // setupUi

    void retranslateUi(QDialog *FiltersDialog)
    {
        FiltersDialog->setWindowTitle(QCoreApplication::translate("FiltersDialog", "Filters Manager", nullptr));
        label_2->setText(QCoreApplication::translate("FiltersDialog", "In order to add filters, you have to first select some of tags, meta informations or classifications elements.", nullptr));
        label_3->setText(QCoreApplication::translate("FiltersDialog", "Add Filter", nullptr));
        label->setText(QCoreApplication::translate("FiltersDialog", "Filter Name:", nullptr));
        addButton->setText(QCoreApplication::translate("FiltersDialog", "Add", nullptr));
        curFilter->setText(QCoreApplication::translate("FiltersDialog", "current filter", nullptr));
        closeButton->setText(QCoreApplication::translate("FiltersDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FiltersDialog: public Ui_FiltersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERSDIALOG_H
