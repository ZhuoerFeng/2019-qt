#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    my(new myConverter(0))
{
    ui->setupUi(this);
    connect(ui->celDial, SIGNAL(valueChanged(int)), this->my, SLOT(setCelValue(int)) );
    connect(ui->fahDial, SIGNAL(valueChanged(int)), this->my, SLOT(setFahValue(int)) );
    connect(this->my, SIGNAL(tempCelChanged(int)), ui->celDial, SLOT(setValue(int)));
    connect(this->my, SIGNAL(tempFahChanged(int)), ui->fahDial, SLOT(setValue(int)));
}

Widget::~Widget()
{
    delete ui;
}
