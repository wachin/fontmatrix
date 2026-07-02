/********************************************************************************
** Form generated from reading UI file 'floatingwidgettoolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOATINGWIDGETTOOLBAR_H
#define UI_FLOATINGWIDGETTOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FloatingWidgetToolBar
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *printButton;
    QToolButton *detachButton;
    QToolButton *closeButton;
    QToolButton *hideButton;

    void setupUi(QWidget *FloatingWidgetToolBar)
    {
        if (FloatingWidgetToolBar->objectName().isEmpty())
            FloatingWidgetToolBar->setObjectName(QString::fromUtf8("FloatingWidgetToolBar"));
        FloatingWidgetToolBar->resize(544, 20);
        gridLayout_2 = new QGridLayout(FloatingWidgetToolBar);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(FloatingWidgetToolBar);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMaximumSize(QSize(16777215, 20));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setMidLineWidth(0);
        gridLayout = new QGridLayout(frame);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        printButton = new QToolButton(frame);
        printButton->setObjectName(QString::fromUtf8("printButton"));

        gridLayout->addWidget(printButton, 0, 1, 1, 1);

        detachButton = new QToolButton(frame);
        detachButton->setObjectName(QString::fromUtf8("detachButton"));

        gridLayout->addWidget(detachButton, 0, 2, 1, 1);

        closeButton = new QToolButton(frame);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMaximumSize(QSize(16, 16));
        closeButton->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/graphic-resources/filter-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);

        gridLayout->addWidget(closeButton, 0, 4, 1, 1);

        hideButton = new QToolButton(frame);
        hideButton->setObjectName(QString::fromUtf8("hideButton"));

        gridLayout->addWidget(hideButton, 0, 3, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(FloatingWidgetToolBar);

        QMetaObject::connectSlotsByName(FloatingWidgetToolBar);
    } // setupUi

    void retranslateUi(QWidget *FloatingWidgetToolBar)
    {
        FloatingWidgetToolBar->setWindowTitle(QCoreApplication::translate("FloatingWidgetToolBar", "Form", nullptr));
#if QT_CONFIG(tooltip)
        printButton->setToolTip(QCoreApplication::translate("FloatingWidgetToolBar", "Print", nullptr));
#endif // QT_CONFIG(tooltip)
        printButton->setText(QCoreApplication::translate("FloatingWidgetToolBar", "P", nullptr));
#if QT_CONFIG(tooltip)
        detachButton->setToolTip(QCoreApplication::translate("FloatingWidgetToolBar", "Detach from main window", nullptr));
#endif // QT_CONFIG(tooltip)
        detachButton->setText(QCoreApplication::translate("FloatingWidgetToolBar", "D", nullptr));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QCoreApplication::translate("FloatingWidgetToolBar", "Close window", nullptr));
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QCoreApplication::translate("FloatingWidgetToolBar", "...", nullptr));
#if QT_CONFIG(tooltip)
        hideButton->setToolTip(QCoreApplication::translate("FloatingWidgetToolBar", "Hide window", nullptr));
#endif // QT_CONFIG(tooltip)
        hideButton->setText(QCoreApplication::translate("FloatingWidgetToolBar", "H", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FloatingWidgetToolBar: public Ui_FloatingWidgetToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOATINGWIDGETTOOLBAR_H
