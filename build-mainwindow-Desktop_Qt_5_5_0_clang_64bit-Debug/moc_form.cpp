/****************************************************************************
** Meta object code from reading C++ file 'form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow/form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Form_t {
    QByteArrayData data[21];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Form_t qt_meta_stringdata_Form = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Form"
QT_MOC_LITERAL(1, 5, 15), // "on_exit_clicked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 20), // "on_remove_textEdited"
QT_MOC_LITERAL(4, 43, 4), // "arg3"
QT_MOC_LITERAL(5, 48, 25), // "on_confirm_remove_clicked"
QT_MOC_LITERAL(6, 74, 18), // "on_openadj_clicked"
QT_MOC_LITERAL(7, 93, 18), // "on_openpro_clicked"
QT_MOC_LITERAL(8, 112, 16), // "on_reset_clicked"
QT_MOC_LITERAL(9, 129, 15), // "NeighbourNumber"
QT_MOC_LITERAL(10, 145, 1), // "v"
QT_MOC_LITERAL(11, 147, 1), // "r"
QT_MOC_LITERAL(12, 149, 5), // "count"
QT_MOC_LITERAL(13, 155, 3), // "WRP"
QT_MOC_LITERAL(14, 159, 16), // "ReplacementValue"
QT_MOC_LITERAL(15, 176, 8), // "Dijkstra"
QT_MOC_LITERAL(16, 185, 1), // "n"
QT_MOC_LITERAL(17, 187, 4), // "POCC"
QT_MOC_LITERAL(18, 192, 9), // "Candidate"
QT_MOC_LITERAL(19, 202, 1), // "k"
QT_MOC_LITERAL(20, 204, 18) // "ReplaceProbability"

    },
    "Form\0on_exit_clicked\0\0on_remove_textEdited\0"
    "arg3\0on_confirm_remove_clicked\0"
    "on_openadj_clicked\0on_openpro_clicked\0"
    "on_reset_clicked\0NeighbourNumber\0v\0r\0"
    "count\0WRP\0ReplacementValue\0Dijkstra\0"
    "n\0POCC\0Candidate\0k\0ReplaceProbability"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    1,   80,    2, 0x08 /* Private */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    3,   87,    2, 0x08 /* Private */,
      13,    3,   94,    2, 0x08 /* Private */,
      14,    3,  101,    2, 0x08 /* Private */,
      15,    3,  108,    2, 0x08 /* Private */,
      17,    1,  115,    2, 0x08 /* Private */,
      18,    3,  118,    2, 0x08 /* Private */,
      20,    3,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Char, QMetaType::Char, QMetaType::Int,   10,   11,   12,
    QMetaType::Double, QMetaType::Char, QMetaType::Char, QMetaType::Int,   10,   11,   12,
    QMetaType::Double, QMetaType::Char, QMetaType::Char, QMetaType::Int,   10,   11,   12,
    QMetaType::Int, QMetaType::Char, QMetaType::Char, QMetaType::Int,   10,   11,   16,
    QMetaType::Double, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Char, QMetaType::Int, QMetaType::Int,   11,   19,   12,
    QMetaType::Double, QMetaType::Char, QMetaType::Char, QMetaType::Int,   10,   11,   12,

       0        // eod
};

void Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Form *_t = static_cast<Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_exit_clicked(); break;
        case 1: _t->on_remove_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_confirm_remove_clicked(); break;
        case 3: _t->on_openadj_clicked(); break;
        case 4: _t->on_openpro_clicked(); break;
        case 5: _t->on_reset_clicked(); break;
        case 6: { int _r = _t->NeighbourNumber((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { double _r = _t->WRP((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 8: { double _r = _t->ReplacementValue((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->Dijkstra((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { double _r = _t->POCC((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 11: _t->Candidate((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: { double _r = _t->ReplaceProbability((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Form.data,
      qt_meta_data_Form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Form.stringdata0))
        return static_cast<void*>(const_cast< Form*>(this));
    return QWidget::qt_metacast(_clname);
}

int Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
