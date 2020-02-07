#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QDebug>
#include <QRegularExpression>
#include <QEvent>
#include <QKeyEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->textEdit->installEventFilter(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton1_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("1");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton2_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("2");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton3_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("3");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton4_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("4");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton5_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("5");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton6_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("6");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton7_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("7");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton8_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("8");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton9_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("9");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton0_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("0");
    ui->textEdit->moveCursor(QTextCursor::End);
}

void Widget::on_pushButton_clicked()
{
}


void Widget::on_pushButtonEqual_clicked()
{
    int a, b;
    QString text = ui->textEdit->toPlainText();

    auto l = text.split("\n");
    a = l[0].trimmed().toInt();
    auto op = l[1];
    b = l[2].trimmed().toInt();
    int result = 0;
    if (op == "+") {
        result = a + b;
    } else if (op == "-") {
        result = a - b;
    } else if (op == "*") {
        result = a * b;
    } else if (op == "/") {
        result = a / b;
    }
    ui->textEditResult->append( QString::number(result));
}

void Widget::on_pushButtonAdd_clicked()
{
     ui->textEdit->append("+");
     ui->textEdit->append("");
}

void Widget::on_pushButtonMinus_clicked()
{
    ui->textEdit->append("-");
    ui->textEdit->append("");
}

void Widget::on_pushButtonMulti_clicked()
{
    ui->textEdit->append("*");
    ui->textEdit->append("");
}

void Widget::on_pushButtonDevide_clicked()
{
    ui->textEdit->append("/");
    ui->textEdit->append("");
}

void Widget::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
}

bool Widget::eventFilter(QObject *obj, QEvent *event) {
    if (obj == ui->textEdit) {
        if (event->type() == QEvent::KeyPress) {
            QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
            QString info = keyEvent->text();
            ui->textEdit->moveCursor(QTextCursor::End);
            ui->textEdit->insertPlainText(info);
            ui->textEdit->moveCursor(QTextCursor::End);
        }
    } else {
        return QWidget::eventFilter(obj, event);
    }
}

void Widget::closeEvent(QCloseEvent *event) {
    int ret = QMessageBox::warning(nullptr, "Close Calculator", "Are you sure to close?\n Click to confirm",
                                   QMessageBox::Yes | QMessageBox::No);
    if (ret == QMessageBox::Yes) {
        event->accept();
    } else if (ret == QMessageBox::No) {
        event->ignore();
    }
}

void Widget::mousePressEvent(QMouseEvent *e) {
    QString info = "Press ";
    QString posi = "(" + QString::number(e->x()) + ", " + QString::number(e->y()) + ")";
    if (e->button() == Qt::LeftButton) {
        info = info + "LeftButton at " + posi;
    } else if (e->button() == Qt::MidButton) {
        info = info + "MidButton at " + posi;
    } else if  (e->button() == Qt::RightButton) {
        info = info + "RightButton at " + posi;
    }
    ui->textEditInfo->append(info);
}
