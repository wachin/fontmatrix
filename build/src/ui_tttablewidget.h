/********************************************************************************
** Form generated from reading UI file 'tttablewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTTABLEWIDGET_H
#define UI_TTTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "QHexView.h"

QT_BEGIN_NAMESPACE

class Ui_TTTableWidget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSplitter *splitter;
    QTreeWidget *tView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHexView *hexView;
    QSpacerItem *verticalSpacer;
    QPushButton *exportButton;

    void setupUi(QWidget *TTTableWidget)
    {
        if (TTTableWidget->objectName().isEmpty())
            TTTableWidget->setObjectName(QString::fromUtf8("TTTableWidget"));
        TTTableWidget->resize(525, 457);
        gridLayout_2 = new QGridLayout(TTTableWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(TTTableWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        splitter = new QSplitter(TTTableWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tView = new QTreeWidget(splitter);
        tView->setObjectName(QString::fromUtf8("tView"));
        tView->setColumnCount(3);
        splitter->addWidget(tView);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hexView = new QHexView(widget);
        hexView->setObjectName(QString::fromUtf8("hexView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hexView->sizePolicy().hasHeightForWidth());
        hexView->setSizePolicy(sizePolicy);
        hexView->setFrameShape(QFrame::StyledPanel);
        hexView->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(hexView, 0, 0, 2, 1);

        verticalSpacer = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        exportButton = new QPushButton(widget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        gridLayout->addWidget(exportButton, 1, 1, 1, 1);

        splitter->addWidget(widget);

        gridLayout_2->addWidget(splitter, 1, 0, 1, 1);


        retranslateUi(TTTableWidget);

        QMetaObject::connectSlotsByName(TTTableWidget);
    } // setupUi

    void retranslateUi(QWidget *TTTableWidget)
    {
        TTTableWidget->setWindowTitle(QCoreApplication::translate("TTTableWidget", "TrueType tables display", nullptr));
        label->setText(QCoreApplication::translate("TTTableWidget", "TrueType Tables ", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tView->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("TTTableWidget", "Size", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("TTTableWidget", "Description", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TTTableWidget", "Tag", nullptr));
        exportButton->setText(QCoreApplication::translate("TTTableWidget", "&Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TTTableWidget: public Ui_TTTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTTABLEWIDGET_H
