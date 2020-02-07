#ifndef COUNT_H
#define COUNT_H

#include <QObject>

class Count : public QObject
{
    Q_OBJECT
public:
    Count();
    Count(int);
    ~Count();
    int get_value();

public slots:
    int set_value(int);

signals:
    void value_changed(int);

private:
    int value;
};

#endif // COUNT_H
