#include "widget.h"
//#include "ui_widget.h"

using namespace UI;

Widget::Widget(QWidget *parent) :
    QWidget(parent), ui(new UI::Widget)
{
    ui->setUp(this);
}
