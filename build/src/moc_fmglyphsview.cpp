/****************************************************************************
** Meta object code from reading C++ file 'fmglyphsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/fmglyphsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fmglyphsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FMGlyphsView_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FMGlyphsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FMGlyphsView_t qt_meta_stringdata_FMGlyphsView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FMGlyphsView"
QT_MOC_LITERAL(1, 13, 5), // "refit"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 18), // "pleaseShowSelected"
QT_MOC_LITERAL(4, 39, 13), // "pleaseShowAll"
QT_MOC_LITERAL(5, 53, 14), // "pleaseUpdateMe"
QT_MOC_LITERAL(6, 68, 18), // "pleaseUpdateSingle"
QT_MOC_LITERAL(7, 87, 13) // "slotViewMoved"

    },
    "FMGlyphsView\0refit\0\0pleaseShowSelected\0"
    "pleaseShowAll\0pleaseUpdateMe\0"
    "pleaseUpdateSingle\0slotViewMoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FMGlyphsView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void FMGlyphsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FMGlyphsView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pleaseShowSelected(); break;
        case 2: _t->pleaseShowAll(); break;
        case 3: _t->pleaseUpdateMe(); break;
        case 4: _t->pleaseUpdateSingle(); break;
        case 5: _t->slotViewMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FMGlyphsView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMGlyphsView::refit)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FMGlyphsView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMGlyphsView::pleaseShowSelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FMGlyphsView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMGlyphsView::pleaseShowAll)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FMGlyphsView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMGlyphsView::pleaseUpdateMe)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FMGlyphsView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMGlyphsView::pleaseUpdateSingle)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FMGlyphsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_FMGlyphsView.data,
    qt_meta_data_FMGlyphsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FMGlyphsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FMGlyphsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FMGlyphsView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int FMGlyphsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FMGlyphsView::refit(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FMGlyphsView::pleaseShowSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FMGlyphsView::pleaseShowAll()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FMGlyphsView::pleaseUpdateMe()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FMGlyphsView::pleaseUpdateSingle()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
