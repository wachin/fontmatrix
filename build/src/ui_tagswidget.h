/********************************************************************************
** Form generated from reading UI file 'tagswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGSWIDGET_H
#define UI_TAGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tagsWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QPushButton *newTagButton;
    QPushButton *removeTagButton;
    QListView *tagsListView;

    void setupUi(QWidget *tagsWidget)
    {
        if (tagsWidget->objectName().isEmpty())
            tagsWidget->setObjectName(QString::fromUtf8("tagsWidget"));
        tagsWidget->resize(305, 177);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(tagsWidget->sizePolicy().hasHeightForWidth());
        tagsWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(tagsWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(tagsWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 3);

        newTagButton = new QPushButton(widget);
        newTagButton->setObjectName(QString::fromUtf8("newTagButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(newTagButton->sizePolicy().hasHeightForWidth());
        newTagButton->setSizePolicy(sizePolicy2);
        newTagButton->setFlat(false);

        gridLayout_2->addWidget(newTagButton, 2, 0, 1, 1);

        removeTagButton = new QPushButton(widget);
        removeTagButton->setObjectName(QString::fromUtf8("removeTagButton"));

        gridLayout_2->addWidget(removeTagButton, 2, 1, 1, 1);

        tagsListView = new QListView(widget);
        tagsListView->setObjectName(QString::fromUtf8("tagsListView"));
        tagsListView->setAcceptDrops(true);
        tagsListView->setResizeMode(QListView::Adjust);
        tagsListView->setModelColumn(0);
        tagsListView->setUniformItemSizes(true);

        gridLayout_2->addWidget(tagsListView, 1, 0, 1, 3);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(tagsWidget);

        QMetaObject::connectSlotsByName(tagsWidget);
    } // setupUi

    void retranslateUi(QWidget *tagsWidget)
    {
        tagsWidget->setWindowTitle(QCoreApplication::translate("tagsWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("tagsWidget", "Tags", nullptr));
#if QT_CONFIG(tooltip)
        newTagButton->setToolTip(QCoreApplication::translate("tagsWidget", "Add a tag", nullptr));
#endif // QT_CONFIG(tooltip)
        newTagButton->setText(QCoreApplication::translate("tagsWidget", "Add Tag", nullptr));
        removeTagButton->setText(QCoreApplication::translate("tagsWidget", "Remove Tag", nullptr));
#if QT_CONFIG(statustip)
        tagsListView->setStatusTip(QCoreApplication::translate("tagsWidget", "Right mouse click on a tag to add it or remove it from TagSet", nullptr));
#endif // QT_CONFIG(statustip)
    } // retranslateUi

};

namespace Ui {
    class tagsWidget: public Ui_tagsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGSWIDGET_H
