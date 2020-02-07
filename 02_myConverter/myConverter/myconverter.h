#ifndef MYCONVERTER_H
#define MYCONVERTER_H
#include <QObject>

class myConverter : public QObject
{
    Q_OBJECT

public:
    explicit myConverter(int temp, QObject *parent = nullptr);
    int getCelTemp();
    int getFahTemp();

signals:
    void tempCelChanged(int);
    void tempFahChanged(int);

public slots:
    void setCelValue(int);
    void setFahValue(int);

private:
    int m_number;
};

#endif // MYCONVERTER_H
