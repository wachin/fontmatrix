/****************************************************************************
** Meta object code from reading C++ file 'remotedir.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/remotedir.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remotedir.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RemoteDir_t {
    QByteArrayData data[10];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteDir_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteDir_t qt_meta_stringdata_RemoteDir = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RemoteDir"
QT_MOC_LITERAL(1, 10, 11), // "listIsReady"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "slotProgress"
QT_MOC_LITERAL(4, 36, 4), // "done"
QT_MOC_LITERAL(5, 41, 5), // "total"
QT_MOC_LITERAL(6, 47, 10), // "slotEndReq"
QT_MOC_LITERAL(7, 58, 2), // "id"
QT_MOC_LITERAL(8, 61, 5), // "error"
QT_MOC_LITERAL(9, 67, 15) // "slotEndPreviews"

    },
    "RemoteDir\0listIsReady\0\0slotProgress\0"
    "done\0total\0slotEndReq\0id\0error\0"
    "slotEndPreviews"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteDir[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   35,    2, 0x08 /* Private */,
       6,    2,   40,    2, 0x08 /* Private */,
       9,    2,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    7,    8,

       0        // eod
};

void RemoteDir::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoteDir *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->listIsReady(); break;
        case 1: _t->slotProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->slotEndReq((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->slotEndPreviews((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemoteDir::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteDir::listIsReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RemoteDir::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RemoteDir.data,
    qt_meta_data_RemoteDir,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RemoteDir::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteDir::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteDir.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RemoteDir::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RemoteDir::listIsReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
