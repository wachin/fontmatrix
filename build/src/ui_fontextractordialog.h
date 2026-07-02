/********************************************************************************
** Form generated from reading UI file 'fontextractordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTEXTRACTORDIALOG_H
#define UI_FONTEXTRACTORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FontExtractorDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *docPath;
    QPushButton *browsePDF;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QListWidget *fontList;
    QLineEdit *outputDir;
    QPushButton *browseDir;
    QPushButton *extractButton;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *FontExtractorDialog)
    {
        if (FontExtractorDialog->objectName().isEmpty())
            FontExtractorDialog->setObjectName(QString::fromUtf8("FontExtractorDialog"));
        FontExtractorDialog->resize(450, 450);
        gridLayout_3 = new QGridLayout(FontExtractorDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(FontExtractorDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        docPath = new QLabel(groupBox);
        docPath->setObjectName(QString::fromUtf8("docPath"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(docPath->sizePolicy().hasHeightForWidth());
        docPath->setSizePolicy(sizePolicy);

        gridLayout->addWidget(docPath, 0, 0, 1, 1);

        browsePDF = new QPushButton(groupBox);
        browsePDF->setObjectName(QString::fromUtf8("browsePDF"));

        gridLayout->addWidget(browsePDF, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(FontExtractorDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        fontList = new QListWidget(groupBox_2);
        fontList->setObjectName(QString::fromUtf8("fontList"));

        gridLayout_2->addWidget(fontList, 0, 0, 1, 3);

        outputDir = new QLineEdit(groupBox_2);
        outputDir->setObjectName(QString::fromUtf8("outputDir"));

        gridLayout_2->addWidget(outputDir, 1, 0, 1, 1);

        browseDir = new QPushButton(groupBox_2);
        browseDir->setObjectName(QString::fromUtf8("browseDir"));

        gridLayout_2->addWidget(browseDir, 1, 1, 1, 1);

        extractButton = new QPushButton(groupBox_2);
        extractButton->setObjectName(QString::fromUtf8("extractButton"));

        gridLayout_2->addWidget(extractButton, 1, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 2);

        pushButton = new QPushButton(FontExtractorDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 0, 1, 1);

#if QT_CONFIG(shortcut)
        docPath->setBuddy(browsePDF);
#endif // QT_CONFIG(shortcut)

        retranslateUi(FontExtractorDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), FontExtractorDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(FontExtractorDialog);
    } // setupUi

    void retranslateUi(QDialog *FontExtractorDialog)
    {
        FontExtractorDialog->setWindowTitle(QCoreApplication::translate("FontExtractorDialog", "Font extractor", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FontExtractorDialog", "Select PDF", nullptr));
        docPath->setText(QCoreApplication::translate("FontExtractorDialog", "File name", nullptr));
        browsePDF->setText(QCoreApplication::translate("FontExtractorDialog", "&Browse", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FontExtractorDialog", "Fonts", nullptr));
        browseDir->setText(QCoreApplication::translate("FontExtractorDialog", "&Select Dir", nullptr));
        extractButton->setText(QCoreApplication::translate("FontExtractorDialog", "&Extract", nullptr));
        pushButton->setText(QCoreApplication::translate("FontExtractorDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FontExtractorDialog: public Ui_FontExtractorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTEXTRACTORDIALOG_H
