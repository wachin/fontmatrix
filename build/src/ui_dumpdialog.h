/********************************************************************************
** Form generated from reading UI file 'dumpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUMPDIALOG_H
#define UI_DUMPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include "modeltext.h"

QT_BEGIN_NAMESPACE

class Ui_DumpDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *fontName;
    QLabel *label;
    QLineEdit *filePath;
    QPushButton *browseButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    ModelText *modelText;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QListWidget *nameList;
    QSpacerItem *horizontalSpacer;
    QPushButton *loadButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DumpDialog)
    {
        if (DumpDialog->objectName().isEmpty())
            DumpDialog->setObjectName(QString::fromUtf8("DumpDialog"));
        DumpDialog->resize(505, 460);
        DumpDialog->setAcceptDrops(true);
        gridLayout_2 = new QGridLayout(DumpDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        fontName = new QLabel(DumpDialog);
        fontName->setObjectName(QString::fromUtf8("fontName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontName->sizePolicy().hasHeightForWidth());
        fontName->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(fontName, 0, 0, 1, 3);

        label = new QLabel(DumpDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        filePath = new QLineEdit(DumpDialog);
        filePath->setObjectName(QString::fromUtf8("filePath"));

        gridLayout_2->addWidget(filePath, 1, 1, 1, 1);

        browseButton = new QPushButton(DumpDialog);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        gridLayout_2->addWidget(browseButton, 1, 2, 1, 1);

        groupBox = new QGroupBox(DumpDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAcceptDrops(true);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        modelText = new ModelText(splitter);
        modelText->setObjectName(QString::fromUtf8("modelText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modelText->sizePolicy().hasHeightForWidth());
        modelText->setSizePolicy(sizePolicy1);
        splitter->addWidget(modelText);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        nameList = new QListWidget(widget);
        nameList->setObjectName(QString::fromUtf8("nameList"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(nameList->sizePolicy().hasHeightForWidth());
        nameList->setSizePolicy(sizePolicy3);
        nameList->setAcceptDrops(true);
        nameList->setDragEnabled(true);
        nameList->setDragDropMode(QAbstractItemView::DragOnly);
        nameList->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout->addWidget(nameList, 1, 0, 1, 1);

        splitter->addWidget(widget);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(385, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        loadButton = new QPushButton(groupBox);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        gridLayout_3->addWidget(loadButton, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 3);

        buttonBox = new QDialogButtonBox(DumpDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 3);

#if QT_CONFIG(shortcut)
        label->setBuddy(filePath);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(filePath, browseButton);
        QWidget::setTabOrder(browseButton, modelText);
        QWidget::setTabOrder(modelText, nameList);
        QWidget::setTabOrder(nameList, loadButton);
        QWidget::setTabOrder(loadButton, buttonBox);

        retranslateUi(DumpDialog);

        QMetaObject::connectSlotsByName(DumpDialog);
    } // setupUi

    void retranslateUi(QDialog *DumpDialog)
    {
        DumpDialog->setWindowTitle(QCoreApplication::translate("DumpDialog", "Fontmatrix - Export font info for packaging", nullptr));
        fontName->setText(QCoreApplication::translate("DumpDialog", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("DumpDialog", "Save to:", nullptr));
        browseButton->setText(QCoreApplication::translate("DumpDialog", "Browse...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DumpDialog", "Model", nullptr));
        modelText->setHtml(QCoreApplication::translate("DumpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DumpDialog", "Available names", nullptr));
        loadButton->setText(QCoreApplication::translate("DumpDialog", "Load...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DumpDialog: public Ui_DumpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUMPDIALOG_H
