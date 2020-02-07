#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    int m = QMessageBox::warning(nullptr, "OK button clicked!", "You have clicked the OK button", QMessageBox::Save | QMessageBox::Help | QMessageBox::Cancel );
    switch (m) {
    case QMessageBox::Save:
    {
        break;
    }
    default:
        break;
    }
}

void Widget::on_pushButton_3_clicked()
{
    ui->pushButton_2->setText("天若有情天亦老");
    ui->progressBar->setValue(90);
}
