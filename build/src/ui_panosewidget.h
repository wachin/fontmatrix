/********************************************************************************
** Form generated from reading UI file 'panosewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANOSEWIDGET_H
#define UI_PANOSEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PanoseWidget
{
public:
    QGridLayout *gridLayout_2;
    QTreeWidget *pTree;

    void setupUi(QWidget *PanoseWidget)
    {
        if (PanoseWidget->objectName().isEmpty())
            PanoseWidget->setObjectName(QString::fromUtf8("PanoseWidget"));
        PanoseWidget->resize(415, 443);
        gridLayout_2 = new QGridLayout(PanoseWidget);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pTree = new QTreeWidget(PanoseWidget);
        pTree->setObjectName(QString::fromUtf8("pTree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(pTree->sizePolicy().hasHeightForWidth());
        pTree->setSizePolicy(sizePolicy);
        pTree->setFocusPolicy(Qt::NoFocus);
        pTree->setFrameShape(QFrame::NoFrame);
        pTree->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pTree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pTree->setSelectionMode(QAbstractItemView::SingleSelection);
        pTree->setIndentation(12);
        pTree->setRootIsDecorated(true);
        pTree->setAnimated(true);
        pTree->header()->setVisible(false);

        gridLayout_2->addWidget(pTree, 0, 0, 1, 1);


        retranslateUi(PanoseWidget);

        QMetaObject::connectSlotsByName(PanoseWidget);
    } // setupUi

    void retranslateUi(QWidget *PanoseWidget)
    {
        PanoseWidget->setWindowTitle(QCoreApplication::translate("PanoseWidget", "Panose Metadata", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = pTree->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PanoseWidget", "Panose Attributes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PanoseWidget: public Ui_PanoseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANOSEWIDGET_H
