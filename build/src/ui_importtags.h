/********************************************************************************
** Form generated from reading UI file 'importtags.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTTAGS_H
#define UI_IMPORTTAGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ImportTagsDialog
{
public:
    QGridLayout *gLt;
    QLabel *label;
    QListWidget *tagsList;
    QLineEdit *tagText;
    QPushButton *tagNewButton;
    QFrame *line;
    QSpacerItem *spacerItem;
    QPushButton *okButton;

    void setupUi(QDialog *ImportTagsDialog)
    {
        if (ImportTagsDialog->objectName().isEmpty())
            ImportTagsDialog->setObjectName(QString::fromUtf8("ImportTagsDialog"));
        ImportTagsDialog->resize(402, 320);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/fontmatrix_tags.png"), QSize(), QIcon::Normal, QIcon::Off);
        ImportTagsDialog->setWindowIcon(icon);
        gLt = new QGridLayout(ImportTagsDialog);
        gLt->setObjectName(QString::fromUtf8("gLt"));
        label = new QLabel(ImportTagsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::Panel);
        label->setPixmap(QPixmap(QString::fromUtf8(":/fontmatrix_tags_graphic.png")));
        label->setScaledContents(false);

        gLt->addWidget(label, 0, 0, 4, 1);

        tagsList = new QListWidget(ImportTagsDialog);
        tagsList->setObjectName(QString::fromUtf8("tagsList"));

        gLt->addWidget(tagsList, 0, 1, 1, 2);

        tagText = new QLineEdit(ImportTagsDialog);
        tagText->setObjectName(QString::fromUtf8("tagText"));

        gLt->addWidget(tagText, 1, 1, 1, 1);

        tagNewButton = new QPushButton(ImportTagsDialog);
        tagNewButton->setObjectName(QString::fromUtf8("tagNewButton"));

        gLt->addWidget(tagNewButton, 1, 2, 1, 1);

        line = new QFrame(ImportTagsDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gLt->addWidget(line, 2, 1, 1, 2);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gLt->addItem(spacerItem, 3, 1, 1, 1);

        okButton = new QPushButton(ImportTagsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gLt->addWidget(okButton, 3, 2, 1, 1);


        retranslateUi(ImportTagsDialog);

        QMetaObject::connectSlotsByName(ImportTagsDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportTagsDialog)
    {
        ImportTagsDialog->setWindowTitle(QCoreApplication::translate("ImportTagsDialog", "Fontmatrix - Tags", nullptr));
        label->setText(QString());
        tagNewButton->setText(QCoreApplication::translate("ImportTagsDialog", "Add", nullptr));
        okButton->setText(QCoreApplication::translate("ImportTagsDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportTagsDialog: public Ui_ImportTagsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTTAGS_H
