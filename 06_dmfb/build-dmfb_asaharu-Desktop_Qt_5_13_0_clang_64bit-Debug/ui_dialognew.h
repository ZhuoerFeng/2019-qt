/********************************************************************************
** Form generated from reading UI file 'dialognew.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEW_H
#define UI_DIALOGNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DialogNew
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *InputXLine;
    QLabel *RowLabel;
    QLineEdit *InputYLine;
    QLineEdit *WashInputXLine;
    QLabel *WashInputY;
    QLabel *OutputYLabel;
    QLabel *InputXLabel;
    QLineEdit *OutputXLine;
    QLabel *OutputXLabel;
    QLineEdit *RowLine;
    QLineEdit *WashInputYLine;
    QLabel *WashInputX;
    QLabel *InputYLabel;
    QLineEdit *OutputYLine;
    QLabel *WashOutputX;
    QLabel *ColumnLabel;
    QLineEdit *ColumnLine;
    QLabel *WashOutputY;
    QLineEdit *WashOutputXLine;
    QLineEdit *WashOutputYLine;
    QToolButton *toolButton;
    QPushButton *pushButton;
    QPushButton *pushButtonCheck;

    void setupUi(QDialog *DialogNew)
    {
        if (DialogNew->objectName().isEmpty())
            DialogNew->setObjectName(QString::fromUtf8("DialogNew"));
        DialogNew->resize(488, 491);
        buttonBox = new QDialogButtonBox(DialogNew);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(70, 420, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(DialogNew);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 10, 341, 361));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        InputXLine = new QLineEdit(groupBox);
        InputXLine->setObjectName(QString::fromUtf8("InputXLine"));

        gridLayout->addWidget(InputXLine, 9, 2, 1, 1);

        RowLabel = new QLabel(groupBox);
        RowLabel->setObjectName(QString::fromUtf8("RowLabel"));

        gridLayout->addWidget(RowLabel, 5, 0, 1, 1);

        InputYLine = new QLineEdit(groupBox);
        InputYLine->setObjectName(QString::fromUtf8("InputYLine"));

        gridLayout->addWidget(InputYLine, 10, 2, 1, 1);

        WashInputXLine = new QLineEdit(groupBox);
        WashInputXLine->setObjectName(QString::fromUtf8("WashInputXLine"));

        gridLayout->addWidget(WashInputXLine, 14, 2, 1, 1);

        WashInputY = new QLabel(groupBox);
        WashInputY->setObjectName(QString::fromUtf8("WashInputY"));

        gridLayout->addWidget(WashInputY, 15, 0, 1, 1);

        OutputYLabel = new QLabel(groupBox);
        OutputYLabel->setObjectName(QString::fromUtf8("OutputYLabel"));

        gridLayout->addWidget(OutputYLabel, 13, 0, 1, 2);

        InputXLabel = new QLabel(groupBox);
        InputXLabel->setObjectName(QString::fromUtf8("InputXLabel"));

        gridLayout->addWidget(InputXLabel, 9, 0, 1, 2);

        OutputXLine = new QLineEdit(groupBox);
        OutputXLine->setObjectName(QString::fromUtf8("OutputXLine"));

        gridLayout->addWidget(OutputXLine, 11, 2, 1, 1);

        OutputXLabel = new QLabel(groupBox);
        OutputXLabel->setObjectName(QString::fromUtf8("OutputXLabel"));

        gridLayout->addWidget(OutputXLabel, 11, 0, 1, 2);

        RowLine = new QLineEdit(groupBox);
        RowLine->setObjectName(QString::fromUtf8("RowLine"));

        gridLayout->addWidget(RowLine, 5, 2, 1, 1);

        WashInputYLine = new QLineEdit(groupBox);
        WashInputYLine->setObjectName(QString::fromUtf8("WashInputYLine"));

        gridLayout->addWidget(WashInputYLine, 15, 2, 1, 1);

        WashInputX = new QLabel(groupBox);
        WashInputX->setObjectName(QString::fromUtf8("WashInputX"));

        gridLayout->addWidget(WashInputX, 14, 0, 1, 1);

        InputYLabel = new QLabel(groupBox);
        InputYLabel->setObjectName(QString::fromUtf8("InputYLabel"));

        gridLayout->addWidget(InputYLabel, 10, 0, 1, 2);

        OutputYLine = new QLineEdit(groupBox);
        OutputYLine->setObjectName(QString::fromUtf8("OutputYLine"));

        gridLayout->addWidget(OutputYLine, 13, 2, 1, 1);

        WashOutputX = new QLabel(groupBox);
        WashOutputX->setObjectName(QString::fromUtf8("WashOutputX"));

        gridLayout->addWidget(WashOutputX, 16, 0, 1, 1);

        ColumnLabel = new QLabel(groupBox);
        ColumnLabel->setObjectName(QString::fromUtf8("ColumnLabel"));

        gridLayout->addWidget(ColumnLabel, 3, 0, 1, 1);

        ColumnLine = new QLineEdit(groupBox);
        ColumnLine->setObjectName(QString::fromUtf8("ColumnLine"));

        gridLayout->addWidget(ColumnLine, 3, 2, 1, 1);

        WashOutputY = new QLabel(groupBox);
        WashOutputY->setObjectName(QString::fromUtf8("WashOutputY"));

        gridLayout->addWidget(WashOutputY, 17, 0, 1, 1);

        WashOutputXLine = new QLineEdit(groupBox);
        WashOutputXLine->setObjectName(QString::fromUtf8("WashOutputXLine"));

        gridLayout->addWidget(WashOutputXLine, 16, 2, 1, 1);

        WashOutputYLine = new QLineEdit(groupBox);
        WashOutputYLine->setObjectName(QString::fromUtf8("WashOutputYLine"));

        gridLayout->addWidget(WashOutputYLine, 17, 2, 1, 1);

        toolButton = new QToolButton(DialogNew);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(40, 180, 26, 22));
        pushButton = new QPushButton(DialogNew);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 420, 138, 32));
        pushButtonCheck = new QPushButton(DialogNew);
        pushButtonCheck->setObjectName(QString::fromUtf8("pushButtonCheck"));
        pushButtonCheck->setGeometry(QRect(82, 370, 341, 51));

        retranslateUi(DialogNew);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogNew, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogNew, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogNew);
    } // setupUi

    void retranslateUi(QDialog *DialogNew)
    {
        DialogNew->setWindowTitle(QCoreApplication::translate("DialogNew", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogNew", "Please input the column and rows:", nullptr));
        InputXLine->setText(QString());
        RowLabel->setText(QCoreApplication::translate("DialogNew", "Row", nullptr));
        InputYLine->setText(QString());
        WashInputY->setText(QCoreApplication::translate("DialogNew", "wash input y", nullptr));
        OutputYLabel->setText(QCoreApplication::translate("DialogNew", "output y coordinate", nullptr));
        InputXLabel->setText(QCoreApplication::translate("DialogNew", "input x coordinate", nullptr));
        OutputXLine->setText(QString());
        OutputXLabel->setText(QCoreApplication::translate("DialogNew", "output x coordinate", nullptr));
        RowLine->setText(QString());
        WashInputX->setText(QCoreApplication::translate("DialogNew", "wash input x", nullptr));
        InputYLabel->setText(QCoreApplication::translate("DialogNew", "input y coordinate", nullptr));
        OutputYLine->setText(QString());
        WashOutputX->setText(QCoreApplication::translate("DialogNew", "wash output x", nullptr));
        ColumnLabel->setText(QCoreApplication::translate("DialogNew", "Column", nullptr));
        ColumnLine->setText(QString());
        WashOutputY->setText(QCoreApplication::translate("DialogNew", "wash output y", nullptr));
        toolButton->setText(QCoreApplication::translate("DialogNew", "...", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogNew", "Read from file...", nullptr));
        pushButtonCheck->setText(QCoreApplication::translate("DialogNew", "Input Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogNew: public Ui_DialogNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEW_H
