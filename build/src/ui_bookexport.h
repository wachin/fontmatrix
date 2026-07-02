/********************************************************************************
** Form generated from reading UI file 'bookexport.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKEXPORT_H
#define UI_BOOKEXPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BookExportDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QListWidget *templatesList;
    QListWidget *selectedFontsList;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QLineEdit *fileNameEdit;
    QPushButton *fileNameButton;
    QGraphicsView *templatePreview;
    QDialogButtonBox *okButton;

    void setupUi(QDialog *BookExportDialog)
    {
        if (BookExportDialog->objectName().isEmpty())
            BookExportDialog->setObjectName(QString::fromUtf8("BookExportDialog"));
        BookExportDialog->resize(725, 439);
        gridLayout = new QGridLayout(BookExportDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        templatesList = new QListWidget(BookExportDialog);
        templatesList->setObjectName(QString::fromUtf8("templatesList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(templatesList->sizePolicy().hasHeightForWidth());
        templatesList->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(templatesList);

        selectedFontsList = new QListWidget(BookExportDialog);
        selectedFontsList->setObjectName(QString::fromUtf8("selectedFontsList"));
        sizePolicy.setHeightForWidth(selectedFontsList->sizePolicy().hasHeightForWidth());
        selectedFontsList->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(selectedFontsList);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(BookExportDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        fileNameEdit = new QLineEdit(BookExportDialog);
        fileNameEdit->setObjectName(QString::fromUtf8("fileNameEdit"));

        hboxLayout1->addWidget(fileNameEdit);

        fileNameButton = new QPushButton(BookExportDialog);
        fileNameButton->setObjectName(QString::fromUtf8("fileNameButton"));

        hboxLayout1->addWidget(fileNameButton);


        vboxLayout->addLayout(hboxLayout1);


        hboxLayout->addLayout(vboxLayout);

        templatePreview = new QGraphicsView(BookExportDialog);
        templatePreview->setObjectName(QString::fromUtf8("templatePreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(templatePreview->sizePolicy().hasHeightForWidth());
        templatePreview->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(templatePreview);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        okButton = new QDialogButtonBox(BookExportDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(okButton, 1, 0, 1, 1);


        retranslateUi(BookExportDialog);

        QMetaObject::connectSlotsByName(BookExportDialog);
    } // setupUi

    void retranslateUi(QDialog *BookExportDialog)
    {
        BookExportDialog->setWindowTitle(QCoreApplication::translate("BookExportDialog", "Export Font Book", nullptr));
        label->setText(QCoreApplication::translate("BookExportDialog", "Output", nullptr));
        fileNameButton->setText(QCoreApplication::translate("BookExportDialog", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookExportDialog: public Ui_BookExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKEXPORT_H
