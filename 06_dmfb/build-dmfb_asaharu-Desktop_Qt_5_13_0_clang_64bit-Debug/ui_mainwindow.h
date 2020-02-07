/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionQuit;
    QAction *actionMusic;
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionNext;
    QAction *actionPrev;
    QAction *actionRefresh;
    QAction *actionRun;
    QAction *actionPause;
    QAction *actionWash;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 900);
        MainWindow->setFocusPolicy(Qt::TabFocus);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/src/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/src/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionMusic = new QAction(MainWindow);
        actionMusic->setObjectName(QString::fromUtf8("actionMusic"));
        actionMusic->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/src/music.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMusic->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/src/save_disc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("src/unlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon4);
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/src/next_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon5);
        actionPrev = new QAction(MainWindow);
        actionPrev->setObjectName(QString::fromUtf8("actionPrev"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/src/prev_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrev->setIcon(icon6);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/src/refresh_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon7);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QString::fromUtf8("actionRun"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/src/run_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon8);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/src/pause_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon9);
        actionWash = new QAction(MainWindow);
        actionWash->setObjectName(QString::fromUtf8("actionWash"));
        actionWash->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/src/wash.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWash->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(175, 30, 50, 50));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(225, 30, 50, 50));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(275, 30, 50, 50));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(325, 30, 50, 50));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(375, 30, 50, 50));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(425, 30, 50, 50));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(475, 30, 50, 50));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(525, 30, 50, 50));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(575, 30, 50, 50));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(625, 30, 50, 50));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(675, 30, 50, 50));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(725, 30, 50, 50));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(775, 30, 50, 50));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 125, 50, 50));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 175, 50, 50));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 225, 50, 50));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 325, 50, 50));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(30, 275, 50, 50));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(30, 375, 50, 50));
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 425, 50, 50));
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(30, 475, 50, 50));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(30, 525, 50, 50));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(30, 625, 50, 50));
        label_23->setFont(font);
        label_23->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(30, 575, 50, 50));
        label_24->setFont(font);
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(30, 675, 50, 50));
        label_25->setFont(font);
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(30, 725, 50, 50));
        label_26->setFont(font);
        label_26->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(925, 40, 491, 331));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 20, 501, 261));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 290, 113, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1500, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionNew);
        menuMenu->addAction(actionQuit);
        menuMenu->addAction(actionLoad);
        menuMenu->addAction(actionNext);
        menuMenu->addAction(actionPrev);
        menuMenu->addAction(actionRefresh);
        menuMenu->addAction(actionRun);
        menuMenu->addAction(actionPause);
        menuMenu->addAction(actionWash);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionQuit);
        mainToolBar->addAction(actionLoad);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionMusic);
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionNext);
        mainToolBar->addAction(actionPrev);
        mainToolBar->addAction(actionRefresh);
        mainToolBar->addAction(actionWash);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DMFB_asaharu", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionMusic->setText(QCoreApplication::translate("MainWindow", "Music", nullptr));
#if QT_CONFIG(shortcut)
        actionMusic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        actionPrev->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        actionRefresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        actionRun->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
#if QT_CONFIG(shortcut)
        actionRun->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
#if QT_CONFIG(shortcut)
        actionPause->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWash->setText(QCoreApplication::translate("MainWindow", "Wash", nullptr));
#if QT_CONFIG(tooltip)
        actionWash->setToolTip(QCoreApplication::translate("MainWindow", "Wash", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionWash->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Input file", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
