#include "myconverter.h"

myConverter::myConverter(int temp, QObject *parent) : QObject(parent), m_number(temp)
{

}

int myConverter::getCelTemp() {
    return m_number;
}

int myConverter::getFahTemp() {
    return int(m_number * 9 / 5.0 + 32);
}

void myConverter::setCelValue(int temp) {
    if (m_number == temp) {
        return;
    }

    m_number = temp;
    emit tempCelChanged(temp);
    emit tempFahChanged(getFahTemp());
}

void myConverter::setFahValue(int temp) {
    int celTemp = int((temp - 32) * 5 / 9.0);
    setCelValue(celTemp);
}

