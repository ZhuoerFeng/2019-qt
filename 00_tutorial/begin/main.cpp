#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QFont>
#include <QWidget>
#include <QPalette>
#include <QPainter>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QLabel *label = new QLabel("acyume tql!!");
    QPalette palette = label->palette();
    QFont font;

    palette.setColor(QPalette::WindowText, QColor(30, 60, 120));
    font.setPointSize(64);
    font.setBold(1);
    font.setItalic(1);
    font.setFamily("Courier");
    font.setWeight(100);

    label->setPalette(palette);
    label->setWindowTitle("Fuck Guangyan");
    label->setFont(font);
//    label->setStyleSheet("color:red;");
    label->setGeometry(500, 100, 10, 10);
    label->setAlignment(Qt::AlignCenter);
    label->resize(800, 400);
    label->show();

    return app.exec();

}
