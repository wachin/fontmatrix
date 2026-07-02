/********************************************************************************
** Form generated from reading UI file 'browserwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSERWIDGET_H
#define UI_BROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrowserWidget
{
public:
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QTreeView *browserView;
    QWidget *viewWidget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *infoButton;
    QPushButton *importButton;
    QToolButton *chartButton;
    QToolButton *sampleButton;
    QStackedWidget *displayStack;
    QWidget *pageInfo;
    QGridLayout *gridLayout_4;
    QWebView *webView;
    QWidget *pageSample;
    QWidget *pageChart;

    void setupUi(QWidget *BrowserWidget)
    {
        if (BrowserWidget->objectName().isEmpty())
            BrowserWidget->setObjectName(QString::fromUtf8("BrowserWidget"));
        BrowserWidget->resize(668, 603);
        gridLayout_3 = new QGridLayout(BrowserWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter = new QSplitter(BrowserWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        browserView = new QTreeView(splitter);
        browserView->setObjectName(QString::fromUtf8("browserView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(browserView->sizePolicy().hasHeightForWidth());
        browserView->setSizePolicy(sizePolicy);
        splitter->addWidget(browserView);
        viewWidget = new QWidget(splitter);
        viewWidget->setObjectName(QString::fromUtf8("viewWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(viewWidget->sizePolicy().hasHeightForWidth());
        viewWidget->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(viewWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(viewWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        infoButton = new QToolButton(frame);
        infoButton->setObjectName(QString::fromUtf8("infoButton"));
        infoButton->setCheckable(true);

        gridLayout->addWidget(infoButton, 0, 3, 1, 1);

        importButton = new QPushButton(frame);
        importButton->setObjectName(QString::fromUtf8("importButton"));
        importButton->setCheckable(false);

        gridLayout->addWidget(importButton, 0, 5, 1, 1);

        chartButton = new QToolButton(frame);
        chartButton->setObjectName(QString::fromUtf8("chartButton"));
        chartButton->setCheckable(true);

        gridLayout->addWidget(chartButton, 0, 2, 1, 1);

        sampleButton = new QToolButton(frame);
        sampleButton->setObjectName(QString::fromUtf8("sampleButton"));
        sampleButton->setCheckable(true);

        gridLayout->addWidget(sampleButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        displayStack = new QStackedWidget(viewWidget);
        displayStack->setObjectName(QString::fromUtf8("displayStack"));
        pageInfo = new QWidget();
        pageInfo->setObjectName(QString::fromUtf8("pageInfo"));
        gridLayout_4 = new QGridLayout(pageInfo);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        webView = new QWebView(pageInfo);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_4->addWidget(webView, 0, 0, 1, 1);

        displayStack->addWidget(pageInfo);
        pageSample = new QWidget();
        pageSample->setObjectName(QString::fromUtf8("pageSample"));
        displayStack->addWidget(pageSample);
        pageChart = new QWidget();
        pageChart->setObjectName(QString::fromUtf8("pageChart"));
        displayStack->addWidget(pageChart);

        gridLayout_2->addWidget(displayStack, 1, 0, 1, 1);

        splitter->addWidget(viewWidget);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(BrowserWidget);

        QMetaObject::connectSlotsByName(BrowserWidget);
    } // setupUi

    void retranslateUi(QWidget *BrowserWidget)
    {
        BrowserWidget->setWindowTitle(QCoreApplication::translate("BrowserWidget", "Form", nullptr));
        infoButton->setText(QCoreApplication::translate("BrowserWidget", "Info", nullptr));
        importButton->setText(QCoreApplication::translate("BrowserWidget", "Import", nullptr));
        chartButton->setText(QCoreApplication::translate("BrowserWidget", "Chart", nullptr));
        sampleButton->setText(QCoreApplication::translate("BrowserWidget", "Sample", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowserWidget: public Ui_BrowserWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSERWIDGET_H
