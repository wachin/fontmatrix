/********************************************************************************
** Form generated from reading UI file 'matchraster.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATCHRASTER_H
#define UI_MATCHRASTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "iview.h"

QT_BEGIN_NAMESPACE

class Ui_MatchRasterDialog
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *grabModeBox;
    QSpacerItem *horizontalSpacer_2;
    QSlider *grabZoom;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *imagePath;
    QPushButton *browseButton;
    QGroupBox *sampleBox;
    QGridLayout *gridLayout_4;
    IView *iView;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *letter;
    QPushButton *searchButton;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkInteractive;
    QLabel *label_3;
    QCheckBox *tweakRectBox;
    QWidget *page_2;
    QGridLayout *gridLayout_6;
    QLabel *fontName;
    QProgressBar *progressBar;
    QLabel *label;
    IView *compView;
    QWidget *questionWidget;
    QGridLayout *gridLayout_7;
    QLabel *scoreLabel;
    QDialogButtonBox *buttonBox;
    QPushButton *stopButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *MatchRasterDialog)
    {
        if (MatchRasterDialog->objectName().isEmpty())
            MatchRasterDialog->setObjectName(QString::fromUtf8("MatchRasterDialog"));
        MatchRasterDialog->resize(340, 441);
        gridLayout_2 = new QGridLayout(MatchRasterDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(MatchRasterDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        grabModeBox = new QCheckBox(groupBox);
        grabModeBox->setObjectName(QString::fromUtf8("grabModeBox"));

        horizontalLayout->addWidget(grabModeBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        grabZoom = new QSlider(groupBox);
        grabZoom->setObjectName(QString::fromUtf8("grabZoom"));
        grabZoom->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grabZoom->sizePolicy().hasHeightForWidth());
        grabZoom->setSizePolicy(sizePolicy1);
        grabZoom->setMinimum(1);
        grabZoom->setMaximum(10);
        grabZoom->setSliderPosition(1);
        grabZoom->setOrientation(Qt::Horizontal);
        grabZoom->setTickPosition(QSlider::TicksAbove);

        horizontalLayout->addWidget(grabZoom);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        imagePath = new QLineEdit(groupBox);
        imagePath->setObjectName(QString::fromUtf8("imagePath"));
        sizePolicy1.setHeightForWidth(imagePath->sizePolicy().hasHeightForWidth());
        imagePath->setSizePolicy(sizePolicy1);
        imagePath->setReadOnly(true);

        horizontalLayout_2->addWidget(imagePath);

        browseButton = new QPushButton(groupBox);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        horizontalLayout_2->addWidget(browseButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 4);

        sampleBox = new QGroupBox(page);
        sampleBox->setObjectName(QString::fromUtf8("sampleBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(sampleBox->sizePolicy().hasHeightForWidth());
        sampleBox->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(sampleBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        iView = new IView(sampleBox);
        iView->setObjectName(QString::fromUtf8("iView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(4);
        sizePolicy3.setVerticalStretch(4);
        sizePolicy3.setHeightForWidth(iView->sizePolicy().hasHeightForWidth());
        iView->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(iView, 1, 0, 2, 1);

        widget = new QWidget(sampleBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        letter = new QLineEdit(widget);
        letter->setObjectName(QString::fromUtf8("letter"));
        sizePolicy1.setHeightForWidth(letter->sizePolicy().hasHeightForWidth());
        letter->setSizePolicy(sizePolicy1);
        letter->setMaxLength(4);

        formLayout->setWidget(0, QFormLayout::FieldRole, letter);


        gridLayout_5->addLayout(formLayout, 1, 0, 1, 1);

        searchButton = new QPushButton(widget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        gridLayout_5->addWidget(searchButton, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        checkInteractive = new QCheckBox(widget);
        checkInteractive->setObjectName(QString::fromUtf8("checkInteractive"));

        gridLayout_5->addWidget(checkInteractive, 0, 2, 1, 1);


        gridLayout_4->addWidget(widget, 4, 0, 1, 2);

        label_3 = new QLabel(sampleBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        gridLayout_4->addWidget(label_3, 1, 1, 1, 1);

        tweakRectBox = new QCheckBox(sampleBox);
        tweakRectBox->setObjectName(QString::fromUtf8("tweakRectBox"));

        gridLayout_4->addWidget(tweakRectBox, 3, 0, 1, 2);


        gridLayout_3->addWidget(sampleBox, 1, 0, 1, 4);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_6 = new QGridLayout(page_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        fontName = new QLabel(page_2);
        fontName->setObjectName(QString::fromUtf8("fontName"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(3);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(fontName->sizePolicy().hasHeightForWidth());
        fontName->setSizePolicy(sizePolicy6);
        fontName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(fontName, 0, 2, 1, 1);

        progressBar = new QProgressBar(page_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout_6->addWidget(progressBar, 2, 0, 1, 4);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy7);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        compView = new IView(page_2);
        compView->setObjectName(QString::fromUtf8("compView"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(4);
        sizePolicy8.setHeightForWidth(compView->sizePolicy().hasHeightForWidth());
        compView->setSizePolicy(sizePolicy8);

        gridLayout_6->addWidget(compView, 3, 0, 1, 4);

        questionWidget = new QWidget(page_2);
        questionWidget->setObjectName(QString::fromUtf8("questionWidget"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(1);
        sizePolicy9.setHeightForWidth(questionWidget->sizePolicy().hasHeightForWidth());
        questionWidget->setSizePolicy(sizePolicy9);
        gridLayout_7 = new QGridLayout(questionWidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        scoreLabel = new QLabel(questionWidget);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));

        gridLayout_7->addWidget(scoreLabel, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(questionWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        buttonBox->setCenterButtons(true);

        gridLayout_7->addWidget(buttonBox, 1, 1, 1, 1);

        stopButton = new QPushButton(questionWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        gridLayout_7->addWidget(stopButton, 1, 2, 1, 1);


        gridLayout_6->addWidget(questionWidget, 4, 0, 1, 3);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 2);

        cancelButton = new QPushButton(MatchRasterDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout_2->addWidget(cancelButton, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(424, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(letter);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MatchRasterDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), MatchRasterDialog, SLOT(close()));
        QObject::connect(grabModeBox, SIGNAL(toggled(bool)), browseButton, SLOT(setDisabled(bool)));
        QObject::connect(grabModeBox, SIGNAL(toggled(bool)), imagePath, SLOT(setDisabled(bool)));
        QObject::connect(grabModeBox, SIGNAL(toggled(bool)), grabZoom, SLOT(setEnabled(bool)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MatchRasterDialog);
    } // setupUi

    void retranslateUi(QDialog *MatchRasterDialog)
    {
        MatchRasterDialog->setWindowTitle(QCoreApplication::translate("MatchRasterDialog", "Find a font using raster sample", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MatchRasterDialog", "Input Image", nullptr));
        grabModeBox->setText(QCoreApplication::translate("MatchRasterDialog", "Grab mode", nullptr));
#if QT_CONFIG(tooltip)
        grabZoom->setToolTip(QCoreApplication::translate("MatchRasterDialog", "Zoom level", nullptr));
#endif // QT_CONFIG(tooltip)
        browseButton->setText(QCoreApplication::translate("MatchRasterDialog", "&Browse", nullptr));
        sampleBox->setTitle(QCoreApplication::translate("MatchRasterDialog", "Raster sample preview", nullptr));
        label_2->setText(QCoreApplication::translate("MatchRasterDialog", "C&haracter:", nullptr));
#if QT_CONFIG(tooltip)
        letter->setToolTip(QCoreApplication::translate("MatchRasterDialog", "A unique character or a four digits hexadecimal Unicode value", nullptr));
#endif // QT_CONFIG(tooltip)
        searchButton->setText(QCoreApplication::translate("MatchRasterDialog", "&Search", nullptr));
#if QT_CONFIG(tooltip)
        checkInteractive->setToolTip(QCoreApplication::translate("MatchRasterDialog", "If set, you will be prompted for each matching font", nullptr));
#endif // QT_CONFIG(tooltip)
        checkInteractive->setText(QCoreApplication::translate("MatchRasterDialog", "Interactive", nullptr));
        label_3->setText(QCoreApplication::translate("MatchRasterDialog", "Click on the letter to let Fontmatrix compute the bounding box", nullptr));
        tweakRectBox->setText(QCoreApplication::translate("MatchRasterDialog", "Tweak rect", nullptr));
        fontName->setText(QString());
        label->setText(QCoreApplication::translate("MatchRasterDialog", "Compare with:", nullptr));
        scoreLabel->setText(QString());
        stopButton->setText(QCoreApplication::translate("MatchRasterDialog", "Stop", nullptr));
        cancelButton->setText(QCoreApplication::translate("MatchRasterDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MatchRasterDialog: public Ui_MatchRasterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATCHRASTER_H
