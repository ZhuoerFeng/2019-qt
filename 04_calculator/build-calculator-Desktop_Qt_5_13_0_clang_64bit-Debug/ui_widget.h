/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton2;
    QPushButton *pushButton4;
    QPushButton *pushButton1;
    QPushButton *pushButton6;
    QPushButton *pushButton5;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(558, 441);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 140, 291, 231));
        gridLayout_4 = new QGridLayout(gridLayoutWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

        gridLayout_4->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));

        gridLayout_4->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton1 = new QPushButton(gridLayoutWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        gridLayout_4->addWidget(pushButton1, 0, 0, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));

        gridLayout_4->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));

        gridLayout_4->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));

        gridLayout_4->addWidget(pushButton7, 2, 0, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));

        gridLayout_4->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));

        gridLayout_4->addWidget(pushButton9, 2, 2, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));

        gridLayout_4->addWidget(pushButton3, 0, 2, 1, 1);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 40, 291, 61));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 380, 113, 32));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 380, 113, 32));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButton3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Cancle", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
