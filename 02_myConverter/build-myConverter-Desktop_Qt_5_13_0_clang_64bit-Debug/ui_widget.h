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
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QDial *celDial;
    QLCDNumber *celLcd;
    QGroupBox *groupBox_2;
    QDial *fahDial;
    QLCDNumber *fahLcd;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(595, 387);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(110, 100, 151, 191));
        celDial = new QDial(groupBox);
        celDial->setObjectName(QString::fromUtf8("celDial"));
        celDial->setGeometry(QRect(20, 40, 101, 91));
        celDial->setMaximum(1000);
        celLcd = new QLCDNumber(groupBox);
        celLcd->setObjectName(QString::fromUtf8("celLcd"));
        celLcd->setGeometry(QRect(0, 150, 151, 41));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        celLcd->setFont(font);
        celLcd->setSmallDecimalPoint(false);
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 100, 151, 191));
        fahDial = new QDial(groupBox_2);
        fahDial->setObjectName(QString::fromUtf8("fahDial"));
        fahDial->setGeometry(QRect(10, 40, 101, 91));
        fahDial->setMaximum(1832);
        fahLcd = new QLCDNumber(groupBox_2);
        fahLcd->setObjectName(QString::fromUtf8("fahLcd"));
        fahLcd->setGeometry(QRect(0, 150, 151, 41));

        retranslateUi(Widget);
        QObject::connect(celDial, SIGNAL(valueChanged(int)), celLcd, SLOT(display(int)));
        QObject::connect(fahDial, SIGNAL(valueChanged(int)), fahLcd, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "Celcius", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "Fahrenheit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
