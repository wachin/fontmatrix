/********************************************************************************
** Form generated from reading UI file 'metawidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METAWIDGET_H
#define UI_METAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MetaWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QGridLayout *grid;
    QFrame *line;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *filterButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *MetaWidget)
    {
        if (MetaWidget->objectName().isEmpty())
            MetaWidget->setObjectName(QString::fromUtf8("MetaWidget"));
        MetaWidget->resize(476, 89);
        gridLayout = new QGridLayout(MetaWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(MetaWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        grid = new QGridLayout();
        grid->setObjectName(QString::fromUtf8("grid"));

        gridLayout->addLayout(grid, 2, 0, 1, 3);

        line = new QFrame(MetaWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 3);

        line_2 = new QFrame(MetaWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        filterButton = new QPushButton(MetaWidget);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));

        gridLayout->addWidget(filterButton, 4, 2, 1, 1);

        cancelButton = new QPushButton(MetaWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 4, 1, 1, 1);


        retranslateUi(MetaWidget);

        QMetaObject::connectSlotsByName(MetaWidget);
    } // setupUi

    void retranslateUi(QWidget *MetaWidget)
    {
        MetaWidget->setWindowTitle(QCoreApplication::translate("MetaWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("MetaWidget", "Fill-in text fields and press enter key  or click \"Add Filters\" button to process filters.", nullptr));
        filterButton->setText(QCoreApplication::translate("MetaWidget", "Add Filters", nullptr));
        cancelButton->setText(QCoreApplication::translate("MetaWidget", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MetaWidget: public Ui_MetaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METAWIDGET_H
