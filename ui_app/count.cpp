#include "count.h"

Count::Count()
{
    value = 0;
}

Count::Count(int v) : value(v) {}

int Count::get_value() {
    return value;
}

//void value_changed(int v) {

//}

int Count::set_value(int v) {
    if (! value == v) {
        value = v;
        emit value_changed(value);
    }
}


