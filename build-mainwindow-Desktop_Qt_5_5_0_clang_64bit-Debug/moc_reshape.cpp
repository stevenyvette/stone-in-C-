/****************************************************************************
** Meta object code from reading C++ file 'reshape.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow/reshape.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reshape.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Reshape_t {
    QByteArrayData data[11];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Reshape_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Reshape_t qt_meta_stringdata_Reshape = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Reshape"
QT_MOC_LITERAL(1, 8, 15), // "on_quit_clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "on_confirm_clicked"
QT_MOC_LITERAL(4, 44, 10), // "ReshapeAdj"
QT_MOC_LITERAL(5, 55, 1), // "v"
QT_MOC_LITERAL(6, 57, 1), // "r"
QT_MOC_LITERAL(7, 59, 5), // "count"
QT_MOC_LITERAL(8, 65, 10), // "ReshapePro"
QT_MOC_LITERAL(9, 76, 26), // "on_showorigingraph_clicked"
QT_MOC_LITERAL(10, 103, 27) // "on_showreshapegraph_clicked"

    },
    "Reshape\0on_quit_clicked\0\0on_confirm_clicked\0"
    "ReshapeAdj\0v\0r\0count\0ReshapePro\0"
    "on_showorigingraph_clicked\0"
    "on_showreshapegraph_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Reshape[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    3,   46,    2, 0x08 /* Private */,
       8,    3,   53,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char, QMetaType::Char, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, QMetaType::Char, QMetaType::Char, QMetaType::Int,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Reshape::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Reshape *_t = static_cast<Reshape *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_quit_clicked(); break;
        case 1: _t->on_confirm_clicked(); break;
        case 2: _t->ReshapeAdj((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->ReshapePro((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->on_showorigingraph_clicked(); break;
        case 5: _t->on_showreshapegraph_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Reshape::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Reshape.data,
      qt_meta_data_Reshape,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Reshape::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Reshape::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Reshape.stringdata0))
        return static_cast<void*>(const_cast< Reshape*>(this));
    return QWidget::qt_metacast(_clname);
}

int Reshape::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
