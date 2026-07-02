/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLabel *versionStringLabel;
    QSpacerItem *spacerItem;
    QLabel *fontsCountLabel;
    QWidget *tab;
    QGridLayout *gridLayout2;
    QTextBrowser *theText;
    QWidget *tab_2;
    QGridLayout *gridLayout3;
    QTextBrowser *theText_2;
    QSpacerItem *spacerItem1;
    QPushButton *closeButton;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(470, 405);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/fontmatrix_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        gridLayout = new QGridLayout(About);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(About);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout1 = new QGridLayout(tab_3);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/fontmatrix_splash.png")));
        label->setScaledContents(true);

        gridLayout1->addWidget(label, 0, 0, 1, 3);

        versionStringLabel = new QLabel(tab_3);
        versionStringLabel->setObjectName(QString::fromUtf8("versionStringLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        versionStringLabel->setFont(font);
        versionStringLabel->setAlignment(Qt::AlignCenter);

        gridLayout1->addWidget(versionStringLabel, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 1, 1, 1, 1);

        fontsCountLabel = new QLabel(tab_3);
        fontsCountLabel->setObjectName(QString::fromUtf8("fontsCountLabel"));
        QFont font1;
        font1.setPointSize(9);
        fontsCountLabel->setFont(font1);
        fontsCountLabel->setAlignment(Qt::AlignCenter);

        gridLayout1->addWidget(fontsCountLabel, 1, 2, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout2 = new QGridLayout(tab);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        theText = new QTextBrowser(tab);
        theText->setObjectName(QString::fromUtf8("theText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(theText->sizePolicy().hasHeightForWidth());
        theText->setSizePolicy(sizePolicy1);
        theText->setFocusPolicy(Qt::NoFocus);
        theText->setAcceptDrops(false);
        theText->setFrameShape(QFrame::Panel);
        theText->setFrameShadow(QFrame::Plain);
        theText->setOpenExternalLinks(true);

        gridLayout2->addWidget(theText, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout3 = new QGridLayout(tab_2);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        theText_2 = new QTextBrowser(tab_2);
        theText_2->setObjectName(QString::fromUtf8("theText_2"));
        sizePolicy1.setHeightForWidth(theText_2->sizePolicy().hasHeightForWidth());
        theText_2->setSizePolicy(sizePolicy1);
        theText_2->setFocusPolicy(Qt::NoFocus);
        theText_2->setAcceptDrops(false);
        theText_2->setFrameShape(QFrame::Panel);
        theText_2->setFrameShadow(QFrame::Plain);
        theText_2->setOpenExternalLinks(true);

        gridLayout3->addWidget(theText_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);

        spacerItem1 = new QSpacerItem(361, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 1);

        closeButton = new QPushButton(About);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout->addWidget(closeButton, 1, 1, 1, 1);


        retranslateUi(About);
        QObject::connect(closeButton, SIGNAL(clicked()), About, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "About Fontmatrix", nullptr));
        label->setText(QString());
        versionStringLabel->setText(QCoreApplication::translate("About", "TextLabel", nullptr));
        fontsCountLabel->setText(QCoreApplication::translate("About", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("About", "Splash", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("About", "The Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("About", "The People", nullptr));
        closeButton->setText(QCoreApplication::translate("About", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
