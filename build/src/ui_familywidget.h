/********************************************************************************
** Form generated from reading UI file 'familywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAMILYWIDGET_H
#define UI_FAMILYWIDGET_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "fmpreviewlist.h"
#include "tagswidget.h"

QT_BEGIN_NAMESPACE

class Ui_FamilyWidget
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *returnListButton;
    QFrame *line;
    QToolButton *sampleButton;
    QToolButton *chartButton;
    QToolButton *infoButton;
    QToolButton *activationButton;
    QSpacerItem *horizontalSpacer;
    QLabel *familyLabel;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    FMPreviewView *familyPreview;
    TagsWidget *tagsWidget;
    QStackedWidget *displayStack;
    QWidget *pageInfo;
    QGridLayout *gridLayout_3;
    QWebView *webView;
    QWidget *pageSample;
    QWidget *pageChart;
    QWidget *pageActivation;

    void setupUi(QWidget *FamilyWidget)
    {
        if (FamilyWidget->objectName().isEmpty())
            FamilyWidget->setObjectName(QString::fromUtf8("FamilyWidget"));
        FamilyWidget->resize(674, 627);
        gridLayout_4 = new QGridLayout(FamilyWidget);
        gridLayout_4->setContentsMargins(2, 2, 2, 2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(2);
        frame = new QFrame(FamilyWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        returnListButton = new QPushButton(frame);
        returnListButton->setObjectName(QString::fromUtf8("returnListButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(returnListButton->sizePolicy().hasHeightForWidth());
        returnListButton->setSizePolicy(sizePolicy);
        returnListButton->setMaximumSize(QSize(200, 24));

        horizontalLayout_2->addWidget(returnListButton);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        sampleButton = new QToolButton(frame);
        sampleButton->setObjectName(QString::fromUtf8("sampleButton"));
        sampleButton->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_2->addWidget(sampleButton);

        chartButton = new QToolButton(frame);
        chartButton->setObjectName(QString::fromUtf8("chartButton"));
        chartButton->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_2->addWidget(chartButton);

        infoButton = new QToolButton(frame);
        infoButton->setObjectName(QString::fromUtf8("infoButton"));
        infoButton->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_2->addWidget(infoButton);

        activationButton = new QToolButton(frame);
        activationButton->setObjectName(QString::fromUtf8("activationButton"));
        activationButton->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_2->addWidget(activationButton);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        familyLabel = new QLabel(frame);
        familyLabel->setObjectName(QString::fromUtf8("familyLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        familyLabel->setFont(font);

        horizontalLayout_2->addWidget(familyLabel);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        splitter = new QSplitter(FamilyWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_2 = new QSplitter(widget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        familyPreview = new FMPreviewView(splitter_2);
        familyPreview->setObjectName(QString::fromUtf8("familyPreview"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(familyPreview->sizePolicy().hasHeightForWidth());
        familyPreview->setSizePolicy(sizePolicy2);
        splitter_2->addWidget(familyPreview);
        tagsWidget = new TagsWidget(splitter_2);
        tagsWidget->setObjectName(QString::fromUtf8("tagsWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(tagsWidget->sizePolicy().hasHeightForWidth());
        tagsWidget->setSizePolicy(sizePolicy3);
        splitter_2->addWidget(tagsWidget);

        gridLayout->addWidget(splitter_2, 1, 0, 1, 1);

        splitter->addWidget(widget);
        displayStack = new QStackedWidget(splitter);
        displayStack->setObjectName(QString::fromUtf8("displayStack"));
        pageInfo = new QWidget();
        pageInfo->setObjectName(QString::fromUtf8("pageInfo"));
        gridLayout_3 = new QGridLayout(pageInfo);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        webView = new QWebView(pageInfo);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_3->addWidget(webView, 0, 0, 1, 1);

        displayStack->addWidget(pageInfo);
        pageSample = new QWidget();
        pageSample->setObjectName(QString::fromUtf8("pageSample"));
        displayStack->addWidget(pageSample);
        pageChart = new QWidget();
        pageChart->setObjectName(QString::fromUtf8("pageChart"));
        displayStack->addWidget(pageChart);
        pageActivation = new QWidget();
        pageActivation->setObjectName(QString::fromUtf8("pageActivation"));
        displayStack->addWidget(pageActivation);
        splitter->addWidget(displayStack);

        gridLayout_4->addWidget(splitter, 1, 0, 1, 1);


        retranslateUi(FamilyWidget);

        QMetaObject::connectSlotsByName(FamilyWidget);
    } // setupUi

    void retranslateUi(QWidget *FamilyWidget)
    {
        FamilyWidget->setWindowTitle(QCoreApplication::translate("FamilyWidget", "Form", nullptr));
        returnListButton->setText(QCoreApplication::translate("FamilyWidget", "Return To List", nullptr));
#if QT_CONFIG(shortcut)
        returnListButton->setShortcut(QCoreApplication::translate("FamilyWidget", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        sampleButton->setText(QCoreApplication::translate("FamilyWidget", "Sample", nullptr));
        chartButton->setText(QCoreApplication::translate("FamilyWidget", "Chart", nullptr));
        infoButton->setText(QCoreApplication::translate("FamilyWidget", "Info", nullptr));
        activationButton->setText(QCoreApplication::translate("FamilyWidget", "Activation", nullptr));
        familyLabel->setText(QCoreApplication::translate("FamilyWidget", "Family Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FamilyWidget: public Ui_FamilyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAMILYWIDGET_H
