#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <QAbstractButton>
#include <QPushButton>
#include <QAction>
#include "count.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Count *fuck1 = new Count;
    Count *fuck2 = new Count;
    QObject::connect(fuck1, &Count::value_changed, fuck2, &Count::set_value);
    fuck1->set_value(1);
    fuck2->set_value(2);
    cout << fuck1->get_value() << endl;
    cout << fuck2->get_value() << endl;
    fuck1->set_value(100);
    cout << fuck1->get_value() << endl;
    cout << fuck2->get_value() << endl;
    fuck1->set_value(200);
    cout << fuck1->get_value() << endl;
    cout << fuck2->get_value() << endl;
    return a.exec();
}
