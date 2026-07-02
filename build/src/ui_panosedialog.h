/********************************************************************************
** Form generated from reading UI file 'panosedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANOSEDIALOG_H
#define UI_PANOSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PanoseDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *fontName;
    QFrame *mainFrame;
    QGridLayout *gridLayout_2;
    QVBoxLayout *vLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PanoseDialog)
    {
        if (PanoseDialog->objectName().isEmpty())
            PanoseDialog->setObjectName(QString::fromUtf8("PanoseDialog"));
        PanoseDialog->resize(304, 382);
        gridLayout = new QGridLayout(PanoseDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fontName = new QLabel(PanoseDialog);
        fontName->setObjectName(QString::fromUtf8("fontName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontName->sizePolicy().hasHeightForWidth());
        fontName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fontName, 0, 0, 1, 2);

        mainFrame = new QFrame(PanoseDialog);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(mainFrame);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        vLayout = new QVBoxLayout();
        vLayout->setObjectName(QString::fromUtf8("vLayout"));

        gridLayout_2->addLayout(vLayout, 0, 0, 1, 1);


        gridLayout->addWidget(mainFrame, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(PanoseDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(PanoseDialog);

        QMetaObject::connectSlotsByName(PanoseDialog);
    } // setupUi

    void retranslateUi(QDialog *PanoseDialog)
    {
        PanoseDialog->setWindowTitle(QCoreApplication::translate("PanoseDialog", "Fontmatrix - Panose Editor", nullptr));
        fontName->setText(QCoreApplication::translate("PanoseDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PanoseDialog: public Ui_PanoseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANOSEDIALOG_H
