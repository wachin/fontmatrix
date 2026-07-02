/********************************************************************************
** Form generated from reading UI file 'importedfonts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTEDFONTS_H
#define UI_IMPORTEDFONTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ImportedFonts
{
public:
    QGridLayout *gLt;
    QLabel *label;
    QListWidget *fontList;
    QHBoxLayout *horizontalLayout;
    QCheckBox *dontShowBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;

    void setupUi(QDialog *ImportedFonts)
    {
        if (ImportedFonts->objectName().isEmpty())
            ImportedFonts->setObjectName(QString::fromUtf8("ImportedFonts"));
        ImportedFonts->resize(400, 300);
        gLt = new QGridLayout(ImportedFonts);
        gLt->setObjectName(QString::fromUtf8("gLt"));
        label = new QLabel(ImportedFonts);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setItalic(true);
        label->setFont(font);

        gLt->addWidget(label, 0, 0, 1, 1);

        fontList = new QListWidget(ImportedFonts);
        fontList->setObjectName(QString::fromUtf8("fontList"));
        fontList->setFrameShape(QFrame::Box);
        fontList->setFrameShadow(QFrame::Plain);
        fontList->setAlternatingRowColors(false);
        fontList->setSelectionMode(QAbstractItemView::NoSelection);
        fontList->setSortingEnabled(true);

        gLt->addWidget(fontList, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dontShowBox = new QCheckBox(ImportedFonts);
        dontShowBox->setObjectName(QString::fromUtf8("dontShowBox"));

        horizontalLayout->addWidget(dontShowBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOk = new QPushButton(ImportedFonts);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnOk);


        gLt->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(ImportedFonts);
        QObject::connect(btnOk, SIGNAL(clicked()), ImportedFonts, SLOT(close()));

        QMetaObject::connectSlotsByName(ImportedFonts);
    } // setupUi

    void retranslateUi(QDialog *ImportedFonts)
    {
        ImportedFonts->setWindowTitle(QCoreApplication::translate("ImportedFonts", "Imported fonts", nullptr));
        label->setText(QCoreApplication::translate("ImportedFonts", "Imported Fonts:", nullptr));
#if QT_CONFIG(tooltip)
        dontShowBox->setToolTip(QCoreApplication::translate("ImportedFonts", "<qt>Instead of showing this dialog imported font count\n"
"will be shown in the status bar. If you choose not to\n"
"show this dialog anymore you can reset the state\n"
"in preferences.</qt>", nullptr));
#endif // QT_CONFIG(tooltip)
        dontShowBox->setText(QCoreApplication::translate("ImportedFonts", "&Do not show this dialog again", nullptr));
        btnOk->setText(QCoreApplication::translate("ImportedFonts", "&OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportedFonts: public Ui_ImportedFonts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTEDFONTS_H
