/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../calculator/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[20];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 7), // "quitted"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 22), // "on_pushButton1_clicked"
QT_MOC_LITERAL(4, 39, 22), // "on_pushButton2_clicked"
QT_MOC_LITERAL(5, 62, 22), // "on_pushButton3_clicked"
QT_MOC_LITERAL(6, 85, 22), // "on_pushButton4_clicked"
QT_MOC_LITERAL(7, 108, 22), // "on_pushButton5_clicked"
QT_MOC_LITERAL(8, 131, 22), // "on_pushButton6_clicked"
QT_MOC_LITERAL(9, 154, 22), // "on_pushButton7_clicked"
QT_MOC_LITERAL(10, 177, 22), // "on_pushButton8_clicked"
QT_MOC_LITERAL(11, 200, 22), // "on_pushButton9_clicked"
QT_MOC_LITERAL(12, 223, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(13, 245, 24), // "on_pushButtonAdd_clicked"
QT_MOC_LITERAL(14, 270, 26), // "on_pushButtonEqual_clicked"
QT_MOC_LITERAL(15, 297, 22), // "on_pushButton0_clicked"
QT_MOC_LITERAL(16, 320, 26), // "on_pushButtonMinus_clicked"
QT_MOC_LITERAL(17, 347, 26), // "on_pushButtonMulti_clicked"
QT_MOC_LITERAL(18, 374, 27), // "on_pushButtonDevide_clicked"
QT_MOC_LITERAL(19, 402, 23) // "on_pushButton_2_clicked"

    },
    "Widget\0quitted\0\0on_pushButton1_clicked\0"
    "on_pushButton2_clicked\0on_pushButton3_clicked\0"
    "on_pushButton4_clicked\0on_pushButton5_clicked\0"
    "on_pushButton6_clicked\0on_pushButton7_clicked\0"
    "on_pushButton8_clicked\0on_pushButton9_clicked\0"
    "on_pushButton_clicked\0on_pushButtonAdd_clicked\0"
    "on_pushButtonEqual_clicked\0"
    "on_pushButton0_clicked\0"
    "on_pushButtonMinus_clicked\0"
    "on_pushButtonMulti_clicked\0"
    "on_pushButtonDevide_clicked\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  107,    2, 0x08 /* Private */,
       4,    0,  108,    2, 0x08 /* Private */,
       5,    0,  109,    2, 0x08 /* Private */,
       6,    0,  110,    2, 0x08 /* Private */,
       7,    0,  111,    2, 0x08 /* Private */,
       8,    0,  112,    2, 0x08 /* Private */,
       9,    0,  113,    2, 0x08 /* Private */,
      10,    0,  114,    2, 0x08 /* Private */,
      11,    0,  115,    2, 0x08 /* Private */,
      12,    0,  116,    2, 0x08 /* Private */,
      13,    0,  117,    2, 0x08 /* Private */,
      14,    0,  118,    2, 0x08 /* Private */,
      15,    0,  119,    2, 0x08 /* Private */,
      16,    0,  120,    2, 0x08 /* Private */,
      17,    0,  121,    2, 0x08 /* Private */,
      18,    0,  122,    2, 0x08 /* Private */,
      19,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->quitted((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_pushButton1_clicked(); break;
        case 2: _t->on_pushButton2_clicked(); break;
        case 3: _t->on_pushButton3_clicked(); break;
        case 4: _t->on_pushButton4_clicked(); break;
        case 5: _t->on_pushButton5_clicked(); break;
        case 6: _t->on_pushButton6_clicked(); break;
        case 7: _t->on_pushButton7_clicked(); break;
        case 8: _t->on_pushButton8_clicked(); break;
        case 9: _t->on_pushButton9_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_pushButtonAdd_clicked(); break;
        case 12: _t->on_pushButtonEqual_clicked(); break;
        case 13: _t->on_pushButton0_clicked(); break;
        case 14: _t->on_pushButtonMinus_clicked(); break;
        case 15: _t->on_pushButtonMulti_clicked(); break;
        case 16: _t->on_pushButtonDevide_clicked(); break;
        case 17: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (Widget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::quitted)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
int Widget::quitted(int _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
