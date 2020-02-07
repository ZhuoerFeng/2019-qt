#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPen>

namespace UI {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void paint_event(QPaintEvent* );

private:
    UI::Widget* ui;
};

#endif // WIDGET_H
