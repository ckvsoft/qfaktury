/****************************************************************************
** Meta object code from reading C++ file 'Duplicate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Duplicate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Duplicate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Duplicate_t {
    QByteArrayData data[5];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Duplicate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Duplicate_t qt_meta_stringdata_Duplicate = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Duplicate"
QT_MOC_LITERAL(1, 10, 7), // "canQuit"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "cancelDupl"
QT_MOC_LITERAL(4, 30, 13) // "duplicateInit"

    },
    "Duplicate\0canQuit\0\0cancelDupl\0"
    "duplicateInit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Duplicate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Duplicate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Duplicate *_t = static_cast<Duplicate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->canQuit(); break;
        case 1: _t->cancelDupl(); break;
        case 2: _t->duplicateInit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Duplicate::staticMetaObject = {
    { &Invoice::staticMetaObject, qt_meta_stringdata_Duplicate.data,
      qt_meta_data_Duplicate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Duplicate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Duplicate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Duplicate.stringdata0))
        return static_cast<void*>(const_cast< Duplicate*>(this));
    return Invoice::qt_metacast(_clname);
}

int Duplicate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Invoice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE