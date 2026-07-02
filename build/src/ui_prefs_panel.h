/********************************************************************************
** Form generated from reading UI file 'prefs_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_PANEL_H
#define UI_PREFS_PANEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrefsPanel
{
public:
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeButton;
    QSplitter *splitter;
    QListWidget *catList;
    QStackedWidget *stackedPrefs;
    QWidget *page;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_14;
    QCheckBox *initTagBox;
    QCheckBox *showNamesBox;
    QCheckBox *splashCheck;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageSystray;
    QGridLayout *gridLayout_2;
    QGroupBox *systrayFrame;
    QVBoxLayout *_2;
    QCheckBox *closeToSystray;
    QCheckBox *startToSystemTray;
    QGroupBox *activateAllFrame;
    QVBoxLayout *_3;
    QCheckBox *activateAllConfirmation;
    QCheckBox *tagsConfirmation;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageDisplay;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_12;
    QLabel *label_10;
    QLineEdit *previewWord;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QDoubleSpinBox *previewSizeSpin;
    QCheckBox *previewSubtitled;
    QCheckBox *previewIsRTL;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_5;
    QFontComboBox *chartFontCombo;
    QSpinBox *chartFontSpin;
    QLabel *label_8;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *fontSizeSpin;
    QLabel *label_3;
    QDoubleSpinBox *interLineSpin;
    QGroupBox *groupBox_11;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QComboBox *infoStyleCombo;
    QWidget *page_5;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox_4;
    QHBoxLayout *_5;
    QLineEdit *fontEditorPath;
    QPushButton *fontEditorBrowse;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_9;
    QComboBox *browserCombo;
    QLineEdit *browserOptions;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *browserButton;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_10;
    QLineEdit *dictEdit;
    QToolButton *dictButton;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QSpinBox *leftBox;
    QLabel *label_6;
    QSpinBox *rightBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_16;
    QSplitter *splitter_2;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QListWidget *sampleTextNamesList;
    QPushButton *addSampleTextNameButton;
    QPushButton *deleteSampleTextNameButton;
    QLineEdit *newSampleTextNameText;
    QWidget *widget_2;
    QGridLayout *gridLayout_8;
    QTextEdit *namedSampleTextText;
    QPushButton *commitSample;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_5;
    QGridLayout *_6;
    QLineEdit *templatesFolder;
    QPushButton *templatesDirBrowse;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox_6;
    QGridLayout *_7;
    QHBoxLayout *_8;
    QLineEdit *newUrlText;
    QPushButton *remoteDirAdd;
    QHBoxLayout *_9;
    QListWidget *remoteDirList;
    QVBoxLayout *_10;
    QPushButton *remoteDirRemove;
    QSpacerItem *spacerItem2;
    QFrame *line;
    QHBoxLayout *_11;
    QLabel *label_4;
    QLineEdit *localStorageLine;
    QPushButton *localStorageButton;
    QWidget *page_4;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *changeButton;
    QToolButton *clearButton;
    QLabel *shortcutLabel;
    QSpacerItem *horizontalSpacer;
    QTableView *shortcutList;

    void setupUi(QDialog *PrefsPanel)
    {
        if (PrefsPanel->objectName().isEmpty())
            PrefsPanel->setObjectName(QString::fromUtf8("PrefsPanel"));
        PrefsPanel->resize(701, 430);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/fontmatrix_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        PrefsPanel->setWindowIcon(icon);
        gridLayout_13 = new QGridLayout(PrefsPanel);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalSpacer_2 = new QSpacerItem(729, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        closeButton = new QPushButton(PrefsPanel);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout_13->addWidget(closeButton, 1, 1, 1, 1);

        splitter = new QSplitter(PrefsPanel);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        catList = new QListWidget(splitter);
        new QListWidgetItem(catList);
        new QListWidgetItem(catList);
        new QListWidgetItem(catList);
        new QListWidgetItem(catList);
        new QListWidgetItem(catList);
        new QListWidgetItem(catList);
        new QListWidgetItem(catList);
        catList->setObjectName(QString::fromUtf8("catList"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(catList->sizePolicy().hasHeightForWidth());
        catList->setSizePolicy(sizePolicy);
        catList->setMinimumSize(QSize(150, 0));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        catList->setFont(font);
        catList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        catList->setSpacing(5);
        splitter->addWidget(catList);
        stackedPrefs = new QStackedWidget(splitter);
        stackedPrefs->setObjectName(QString::fromUtf8("stackedPrefs"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedPrefs->sizePolicy().hasHeightForWidth());
        stackedPrefs->setSizePolicy(sizePolicy1);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_15 = new QGridLayout(page);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        groupBox_10 = new QGroupBox(page);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_14 = new QGridLayout(groupBox_10);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        initTagBox = new QCheckBox(groupBox_10);
        initTagBox->setObjectName(QString::fromUtf8("initTagBox"));

        gridLayout_14->addWidget(initTagBox, 0, 0, 1, 1);

        showNamesBox = new QCheckBox(groupBox_10);
        showNamesBox->setObjectName(QString::fromUtf8("showNamesBox"));

        gridLayout_14->addWidget(showNamesBox, 1, 0, 1, 1);

        splashCheck = new QCheckBox(groupBox_10);
        splashCheck->setObjectName(QString::fromUtf8("splashCheck"));

        gridLayout_14->addWidget(splashCheck, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_14->addItem(verticalSpacer_4, 3, 0, 1, 1);


        gridLayout_15->addWidget(groupBox_10, 0, 0, 1, 1);

        stackedPrefs->addWidget(page);
        pageSystray = new QWidget();
        pageSystray->setObjectName(QString::fromUtf8("pageSystray"));
        gridLayout_2 = new QGridLayout(pageSystray);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        systrayFrame = new QGroupBox(pageSystray);
        systrayFrame->setObjectName(QString::fromUtf8("systrayFrame"));
        systrayFrame->setFlat(false);
        systrayFrame->setCheckable(true);
        systrayFrame->setChecked(false);
        _2 = new QVBoxLayout(systrayFrame);
        _2->setObjectName(QString::fromUtf8("_2"));
        closeToSystray = new QCheckBox(systrayFrame);
        closeToSystray->setObjectName(QString::fromUtf8("closeToSystray"));
        closeToSystray->setChecked(true);

        _2->addWidget(closeToSystray);

        startToSystemTray = new QCheckBox(systrayFrame);
        startToSystemTray->setObjectName(QString::fromUtf8("startToSystemTray"));

        _2->addWidget(startToSystemTray);

        activateAllFrame = new QGroupBox(systrayFrame);
        activateAllFrame->setObjectName(QString::fromUtf8("activateAllFrame"));
        activateAllFrame->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        activateAllFrame->setFlat(false);
        activateAllFrame->setCheckable(true);
        _3 = new QVBoxLayout(activateAllFrame);
        _3->setObjectName(QString::fromUtf8("_3"));
        activateAllConfirmation = new QCheckBox(activateAllFrame);
        activateAllConfirmation->setObjectName(QString::fromUtf8("activateAllConfirmation"));
        activateAllConfirmation->setChecked(true);

        _3->addWidget(activateAllConfirmation);


        _2->addWidget(activateAllFrame);

        tagsConfirmation = new QCheckBox(systrayFrame);
        tagsConfirmation->setObjectName(QString::fromUtf8("tagsConfirmation"));

        _2->addWidget(tagsConfirmation);


        gridLayout_2->addWidget(systrayFrame, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        stackedPrefs->addWidget(pageSystray);
        pageDisplay = new QWidget();
        pageDisplay->setObjectName(QString::fromUtf8("pageDisplay"));
        gridLayout_6 = new QGridLayout(pageDisplay);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox = new QGroupBox(pageDisplay);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_12 = new QGridLayout(groupBox);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_12->addWidget(label_10, 0, 0, 1, 1);

        previewWord = new QLineEdit(groupBox);
        previewWord->setObjectName(QString::fromUtf8("previewWord"));
        previewWord->setMinimumSize(QSize(300, 0));

        gridLayout_12->addWidget(previewWord, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_12->addWidget(label, 1, 0, 1, 1);

        previewSizeSpin = new QDoubleSpinBox(groupBox);
        previewSizeSpin->setObjectName(QString::fromUtf8("previewSizeSpin"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(previewSizeSpin->sizePolicy().hasHeightForWidth());
        previewSizeSpin->setSizePolicy(sizePolicy3);
        previewSizeSpin->setWrapping(false);
        previewSizeSpin->setFrame(true);
        previewSizeSpin->setDecimals(1);
        previewSizeSpin->setMinimum(1.000000000000000);
        previewSizeSpin->setValue(10.000000000000000);

        gridLayout_12->addWidget(previewSizeSpin, 1, 1, 1, 1);

        previewSubtitled = new QCheckBox(groupBox);
        previewSubtitled->setObjectName(QString::fromUtf8("previewSubtitled"));

        gridLayout_12->addWidget(previewSubtitled, 2, 0, 1, 1);

        previewIsRTL = new QCheckBox(groupBox);
        previewIsRTL->setObjectName(QString::fromUtf8("previewIsRTL"));

        gridLayout_12->addWidget(previewIsRTL, 3, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_7 = new QGroupBox(pageDisplay);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_5 = new QGridLayout(groupBox_7);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        chartFontCombo = new QFontComboBox(groupBox_7);
        chartFontCombo->setObjectName(QString::fromUtf8("chartFontCombo"));

        gridLayout_5->addWidget(chartFontCombo, 0, 0, 1, 2);

        chartFontSpin = new QSpinBox(groupBox_7);
        chartFontSpin->setObjectName(QString::fromUtf8("chartFontSpin"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(chartFontSpin->sizePolicy().hasHeightForWidth());
        chartFontSpin->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(chartFontSpin, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy5);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_8, 1, 0, 1, 1);

        chartFontCombo->raise();
        chartFontSpin->raise();
        label_8->raise();

        gridLayout_6->addWidget(groupBox_7, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(pageDisplay);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        fontSizeSpin = new QDoubleSpinBox(groupBox_3);
        fontSizeSpin->setObjectName(QString::fromUtf8("fontSizeSpin"));
        fontSizeSpin->setMinimum(1.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, fontSizeSpin);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        interLineSpin = new QDoubleSpinBox(groupBox_3);
        interLineSpin->setObjectName(QString::fromUtf8("interLineSpin"));
        interLineSpin->setMinimum(1.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, interLineSpin);

        fontSizeSpin->raise();
        label_3->raise();
        interLineSpin->raise();
        label_2->raise();

        gridLayout_6->addWidget(groupBox_3, 1, 1, 1, 1);

        groupBox_11 = new QGroupBox(pageDisplay);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        formLayout_2 = new QFormLayout(groupBox_11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(groupBox_11);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        infoStyleCombo = new QComboBox(groupBox_11);
        infoStyleCombo->setObjectName(QString::fromUtf8("infoStyleCombo"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, infoStyleCombo);


        gridLayout_6->addWidget(groupBox_11, 2, 0, 1, 2);

        stackedPrefs->addWidget(pageDisplay);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_11 = new QGridLayout(page_5);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        groupBox_4 = new QGroupBox(page_5);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        _5 = new QHBoxLayout(groupBox_4);
        _5->setObjectName(QString::fromUtf8("_5"));
        fontEditorPath = new QLineEdit(groupBox_4);
        fontEditorPath->setObjectName(QString::fromUtf8("fontEditorPath"));
        fontEditorPath->setMinimumSize(QSize(300, 0));

        _5->addWidget(fontEditorPath);

        fontEditorBrowse = new QPushButton(groupBox_4);
        fontEditorBrowse->setObjectName(QString::fromUtf8("fontEditorBrowse"));

        _5->addWidget(fontEditorBrowse);

        spacerItem = new QSpacerItem(151, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _5->addItem(spacerItem);


        gridLayout_11->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_9 = new QGroupBox(page_5);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_9 = new QGridLayout(groupBox_9);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        browserCombo = new QComboBox(groupBox_9);
        browserCombo->setObjectName(QString::fromUtf8("browserCombo"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(browserCombo->sizePolicy().hasHeightForWidth());
        browserCombo->setSizePolicy(sizePolicy6);

        gridLayout_9->addWidget(browserCombo, 0, 0, 1, 2);

        browserOptions = new QLineEdit(groupBox_9);
        browserOptions->setObjectName(QString::fromUtf8("browserOptions"));

        gridLayout_9->addWidget(browserOptions, 2, 1, 1, 1);

        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_9->addWidget(label_9, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        browserButton = new QPushButton(groupBox_9);
        browserButton->setObjectName(QString::fromUtf8("browserButton"));

        gridLayout_9->addWidget(browserButton, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_5, 0, 3, 1, 1);


        gridLayout_11->addWidget(groupBox_9, 1, 0, 1, 1);

        groupBox_8 = new QGroupBox(page_5);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_10 = new QGridLayout(groupBox_8);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        dictEdit = new QLineEdit(groupBox_8);
        dictEdit->setObjectName(QString::fromUtf8("dictEdit"));

        gridLayout_10->addWidget(dictEdit, 0, 0, 1, 4);

        dictButton = new QToolButton(groupBox_8);
        dictButton->setObjectName(QString::fromUtf8("dictButton"));

        gridLayout_10->addWidget(dictButton, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(205, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_6, 0, 5, 1, 1);

        label_5 = new QLabel(groupBox_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_10->addWidget(label_5, 1, 0, 1, 1);

        leftBox = new QSpinBox(groupBox_8);
        leftBox->setObjectName(QString::fromUtf8("leftBox"));

        gridLayout_10->addWidget(leftBox, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_10->addWidget(label_6, 1, 2, 1, 1);

        rightBox = new QSpinBox(groupBox_8);
        rightBox->setObjectName(QString::fromUtf8("rightBox"));

        gridLayout_10->addWidget(rightBox, 1, 3, 1, 1);


        gridLayout_11->addWidget(groupBox_8, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(469, 69, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_3, 3, 0, 1, 1);

        stackedPrefs->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy7);
        gridLayout_16 = new QGridLayout(groupBox_2);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        splitter_2 = new QSplitter(groupBox_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy5.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy5);
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setSpacing(2);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        sampleTextNamesList = new QListWidget(widget);
        sampleTextNamesList->setObjectName(QString::fromUtf8("sampleTextNamesList"));

        gridLayout_7->addWidget(sampleTextNamesList, 0, 0, 1, 3);

        addSampleTextNameButton = new QPushButton(widget);
        addSampleTextNameButton->setObjectName(QString::fromUtf8("addSampleTextNameButton"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(addSampleTextNameButton->sizePolicy().hasHeightForWidth());
        addSampleTextNameButton->setSizePolicy(sizePolicy8);
        addSampleTextNameButton->setMaximumSize(QSize(30, 16777215));

        gridLayout_7->addWidget(addSampleTextNameButton, 2, 1, 1, 1);

        deleteSampleTextNameButton = new QPushButton(widget);
        deleteSampleTextNameButton->setObjectName(QString::fromUtf8("deleteSampleTextNameButton"));
        sizePolicy8.setHeightForWidth(deleteSampleTextNameButton->sizePolicy().hasHeightForWidth());
        deleteSampleTextNameButton->setSizePolicy(sizePolicy8);
        deleteSampleTextNameButton->setMaximumSize(QSize(30, 16777215));

        gridLayout_7->addWidget(deleteSampleTextNameButton, 2, 2, 1, 1);

        newSampleTextNameText = new QLineEdit(widget);
        newSampleTextNameText->setObjectName(QString::fromUtf8("newSampleTextNameText"));

        gridLayout_7->addWidget(newSampleTextNameText, 1, 0, 1, 3);

        splitter_2->addWidget(widget);
        widget_2 = new QWidget(splitter_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(3);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy9);
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        namedSampleTextText = new QTextEdit(widget_2);
        namedSampleTextText->setObjectName(QString::fromUtf8("namedSampleTextText"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy10.setHorizontalStretch(3);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(namedSampleTextText->sizePolicy().hasHeightForWidth());
        namedSampleTextText->setSizePolicy(sizePolicy10);

        gridLayout_8->addWidget(namedSampleTextText, 0, 0, 1, 3);

        commitSample = new QPushButton(widget_2);
        commitSample->setObjectName(QString::fromUtf8("commitSample"));

        gridLayout_8->addWidget(commitSample, 1, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 1, 1, 1, 1);

        splitter_2->addWidget(widget_2);

        gridLayout_16->addWidget(splitter_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);

        stackedPrefs->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_5 = new QGroupBox(page_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        _6 = new QGridLayout(groupBox_5);
        _6->setObjectName(QString::fromUtf8("_6"));
        templatesFolder = new QLineEdit(groupBox_5);
        templatesFolder->setObjectName(QString::fromUtf8("templatesFolder"));
        templatesFolder->setMinimumSize(QSize(300, 0));

        _6->addWidget(templatesFolder, 0, 0, 1, 1);

        templatesDirBrowse = new QPushButton(groupBox_5);
        templatesDirBrowse->setObjectName(QString::fromUtf8("templatesDirBrowse"));

        _6->addWidget(templatesDirBrowse, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _6->addItem(spacerItem1, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(page_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        _7 = new QGridLayout(groupBox_6);
        _7->setObjectName(QString::fromUtf8("_7"));
        _8 = new QHBoxLayout();
        _8->setObjectName(QString::fromUtf8("_8"));
        newUrlText = new QLineEdit(groupBox_6);
        newUrlText->setObjectName(QString::fromUtf8("newUrlText"));

        _8->addWidget(newUrlText);

        remoteDirAdd = new QPushButton(groupBox_6);
        remoteDirAdd->setObjectName(QString::fromUtf8("remoteDirAdd"));
        remoteDirAdd->setMinimumSize(QSize(100, 0));

        _8->addWidget(remoteDirAdd);


        _7->addLayout(_8, 0, 0, 1, 1);

        _9 = new QHBoxLayout();
        _9->setObjectName(QString::fromUtf8("_9"));
        remoteDirList = new QListWidget(groupBox_6);
        remoteDirList->setObjectName(QString::fromUtf8("remoteDirList"));

        _9->addWidget(remoteDirList);

        _10 = new QVBoxLayout();
        _10->setObjectName(QString::fromUtf8("_10"));
        remoteDirRemove = new QPushButton(groupBox_6);
        remoteDirRemove->setObjectName(QString::fromUtf8("remoteDirRemove"));

        _10->addWidget(remoteDirRemove);

        spacerItem2 = new QSpacerItem(100, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _10->addItem(spacerItem2);


        _9->addLayout(_10);


        _7->addLayout(_9, 1, 0, 1, 1);

        line = new QFrame(groupBox_6);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        _7->addWidget(line, 2, 0, 1, 1);

        _11 = new QHBoxLayout();
        _11->setObjectName(QString::fromUtf8("_11"));
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        _11->addWidget(label_4);

        localStorageLine = new QLineEdit(groupBox_6);
        localStorageLine->setObjectName(QString::fromUtf8("localStorageLine"));

        _11->addWidget(localStorageLine);

        localStorageButton = new QPushButton(groupBox_6);
        localStorageButton->setObjectName(QString::fromUtf8("localStorageButton"));

        _11->addWidget(localStorageButton);


        _7->addLayout(_11, 3, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_6, 1, 0, 1, 1);

        stackedPrefs->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout = new QGridLayout(page_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        changeButton = new QToolButton(page_4);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(changeButton->sizePolicy().hasHeightForWidth());
        changeButton->setSizePolicy(sizePolicy11);
        changeButton->setCheckable(true);

        horizontalLayout->addWidget(changeButton);

        clearButton = new QToolButton(page_4);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        sizePolicy11.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy11);

        horizontalLayout->addWidget(clearButton);

        shortcutLabel = new QLabel(page_4);
        shortcutLabel->setObjectName(QString::fromUtf8("shortcutLabel"));

        horizontalLayout->addWidget(shortcutLabel);

        horizontalSpacer = new QSpacerItem(387, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        shortcutList = new QTableView(page_4);
        shortcutList->setObjectName(QString::fromUtf8("shortcutList"));
        shortcutList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(shortcutList, 0, 0, 1, 1);

        stackedPrefs->addWidget(page_4);
        splitter->addWidget(stackedPrefs);

        gridLayout_13->addWidget(splitter, 0, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_10->setBuddy(previewWord);
        label->setBuddy(previewSizeSpin);
        label_8->setBuddy(chartFontSpin);
        label_2->setBuddy(fontSizeSpin);
        label_3->setBuddy(interLineSpin);
        label_7->setBuddy(infoStyleCombo);
        label_9->setBuddy(browserOptions);
        label_5->setBuddy(fontSizeSpin);
        label_6->setBuddy(interLineSpin);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PrefsPanel);

        stackedPrefs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PrefsPanel);
    } // setupUi

    void retranslateUi(QDialog *PrefsPanel)
    {
        PrefsPanel->setWindowTitle(QCoreApplication::translate("PrefsPanel", "Preferences Panel", nullptr));
        closeButton->setText(QCoreApplication::translate("PrefsPanel", "Close", nullptr));

        const bool __sortingEnabled = catList->isSortingEnabled();
        catList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = catList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("PrefsPanel", "General", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = catList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("PrefsPanel", "System tray", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = catList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("PrefsPanel", "Display", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = catList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("PrefsPanel", "Service", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = catList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("PrefsPanel", "Samples collection", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = catList->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("PrefsPanel", "Files & Folders", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = catList->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("PrefsPanel", "Shortcuts", nullptr));
        catList->setSortingEnabled(__sortingEnabled);

        groupBox_10->setTitle(QCoreApplication::translate("PrefsPanel", "General", nullptr));
        initTagBox->setText(QCoreApplication::translate("PrefsPanel", "Ask for tag names when importing fonts", nullptr));
        showNamesBox->setText(QCoreApplication::translate("PrefsPanel", "Show names of imported fonts after import process", nullptr));
        splashCheck->setText(QCoreApplication::translate("PrefsPanel", "Show splash at startup", nullptr));
        systrayFrame->setTitle(QCoreApplication::translate("PrefsPanel", "Show Fontmatrix in System Tray", nullptr));
        closeToSystray->setText(QCoreApplication::translate("PrefsPanel", "Close to system tray", nullptr));
        startToSystemTray->setText(QCoreApplication::translate("PrefsPanel", "Start minimized to system tray", nullptr));
        activateAllFrame->setTitle(QCoreApplication::translate("PrefsPanel", "Show \"All\" actions", nullptr));
        activateAllConfirmation->setText(QCoreApplication::translate("PrefsPanel", "Ask for confirmation when activating or deactivating all fonts", nullptr));
        tagsConfirmation->setText(QCoreApplication::translate("PrefsPanel", "Ask for confirmation when activating or deactivating fonts by tags", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PrefsPanel", "Preview Word", nullptr));
        label_10->setText(QCoreApplication::translate("PrefsPanel", "Word:", nullptr));
        label->setText(QCoreApplication::translate("PrefsPanel", "Default font size:", nullptr));
        previewSizeSpin->setSuffix(QCoreApplication::translate("PrefsPanel", " pt", nullptr));
        previewSubtitled->setText(QCoreApplication::translate("PrefsPanel", "subtitled", nullptr));
        previewIsRTL->setText(QCoreApplication::translate("PrefsPanel", "is RTL", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("PrefsPanel", "Chart Subtitle Font", nullptr));
        chartFontSpin->setSuffix(QCoreApplication::translate("PrefsPanel", " pt", nullptr));
        label_8->setText(QCoreApplication::translate("PrefsPanel", "Size:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PrefsPanel", "Initial Layout", nullptr));
        label_2->setText(QCoreApplication::translate("PrefsPanel", "Font Size:", nullptr));
        fontSizeSpin->setSuffix(QCoreApplication::translate("PrefsPanel", " pt", nullptr));
        label_3->setText(QCoreApplication::translate("PrefsPanel", "linespacing:", nullptr));
        interLineSpin->setSuffix(QCoreApplication::translate("PrefsPanel", " pt", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("PrefsPanel", "Information Style", nullptr));
        label_7->setText(QCoreApplication::translate("PrefsPanel", "Select Style", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PrefsPanel", "Fonts Editor", nullptr));
#if QT_CONFIG(tooltip)
        fontEditorPath->setToolTip(QCoreApplication::translate("PrefsPanel", "Add the full path to your preferred font editor", nullptr));
#endif // QT_CONFIG(tooltip)
        fontEditorPath->setText(QCoreApplication::translate("PrefsPanel", "/usr/bin/fontforge", nullptr));
        fontEditorBrowse->setText(QCoreApplication::translate("PrefsPanel", "Browse...", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("PrefsPanel", "Help Browser", nullptr));
        label_9->setText(QCoreApplication::translate("PrefsPanel", "Extra options:", nullptr));
        browserButton->setText(QCoreApplication::translate("PrefsPanel", "Browse...", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_8->setToolTip(QCoreApplication::translate("PrefsPanel", "Select an  hyphenation dict file as it comes with OpenOffice or Scribus", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_8->setTitle(QCoreApplication::translate("PrefsPanel", "Hyphenation dictionary", nullptr));
#if QT_CONFIG(tooltip)
        dictButton->setToolTip(QCoreApplication::translate("PrefsPanel", "Browse", nullptr));
#endif // QT_CONFIG(tooltip)
        dictButton->setText(QCoreApplication::translate("PrefsPanel", "Browse...", nullptr));
        label_5->setText(QCoreApplication::translate("PrefsPanel", "Left:", nullptr));
        label_6->setText(QCoreApplication::translate("PrefsPanel", "Right:", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("PrefsPanel", "Sample Texts", nullptr));
        addSampleTextNameButton->setText(QCoreApplication::translate("PrefsPanel", "+", nullptr));
        deleteSampleTextNameButton->setText(QCoreApplication::translate("PrefsPanel", "\342\210\222", nullptr));
        commitSample->setText(QCoreApplication::translate("PrefsPanel", "Save", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("PrefsPanel", "Templates Folder", nullptr));
        templatesDirBrowse->setText(QCoreApplication::translate("PrefsPanel", "Browse...", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("PrefsPanel", "Remote directories", nullptr));
        newUrlText->setText(QCoreApplication::translate("PrefsPanel", "http://", nullptr));
        remoteDirAdd->setText(QCoreApplication::translate("PrefsPanel", "Add", nullptr));
        remoteDirRemove->setText(QCoreApplication::translate("PrefsPanel", "Remove", nullptr));
        label_4->setText(QCoreApplication::translate("PrefsPanel", "Local storage", nullptr));
        localStorageButton->setText(QCoreApplication::translate("PrefsPanel", "Browse...", nullptr));
        changeButton->setText(QCoreApplication::translate("PrefsPanel", "Change", nullptr));
        clearButton->setText(QCoreApplication::translate("PrefsPanel", "Remove", nullptr));
        shortcutLabel->setText(QCoreApplication::translate("PrefsPanel", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrefsPanel: public Ui_PrefsPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_PANEL_H
