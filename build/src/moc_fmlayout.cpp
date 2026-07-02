/****************************************************************************
** Meta object code from reading C++ file 'fmlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/fmlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fmlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FMLayout_t {
    QByteArrayData data[20];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FMLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FMLayout_t qt_meta_stringdata_FMLayout = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FMLayout"
QT_MOC_LITERAL(1, 9, 15), // "drawPixmapForMe"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "index"
QT_MOC_LITERAL(4, 32, 8), // "fontsize"
QT_MOC_LITERAL(5, 41, 1), // "x"
QT_MOC_LITERAL(6, 43, 1), // "y"
QT_MOC_LITERAL(7, 45, 17), // "drawBaselineForMe"
QT_MOC_LITERAL(8, 63, 10), // "clearScene"
QT_MOC_LITERAL(9, 74, 12), // "objectWanted"
QT_MOC_LITERAL(10, 87, 12), // "updateLayout"
QT_MOC_LITERAL(11, 100, 14), // "layoutFinished"
QT_MOC_LITERAL(12, 115, 17), // "paragraphFinished"
QT_MOC_LITERAL(13, 133, 13), // "paintFinished"
QT_MOC_LITERAL(14, 147, 10), // "stopLayout"
QT_MOC_LITERAL(15, 158, 6), // "doDraw"
QT_MOC_LITERAL(16, 165, 8), // "endOfRun"
QT_MOC_LITERAL(17, 174, 14), // "endOfParagraph"
QT_MOC_LITERAL(18, 189, 10), // "slotOption"
QT_MOC_LITERAL(19, 200, 1) // "v"

    },
    "FMLayout\0drawPixmapForMe\0\0index\0"
    "fontsize\0x\0y\0drawBaselineForMe\0"
    "clearScene\0objectWanted\0updateLayout\0"
    "layoutFinished\0paragraphFinished\0"
    "paintFinished\0stopLayout\0doDraw\0"
    "endOfRun\0endOfParagraph\0slotOption\0v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FMLayout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   79,    2, 0x06 /* Public */,
       7,    1,   88,    2, 0x06 /* Public */,
       8,    0,   91,    2, 0x06 /* Public */,
       9,    1,   92,    2, 0x06 /* Public */,
      10,    0,   95,    2, 0x06 /* Public */,
      11,    0,   96,    2, 0x06 /* Public */,
      12,    0,   97,    2, 0x06 /* Public */,
      13,    0,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   99,    2, 0x0a /* Public */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void FMLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FMLayout *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->drawPixmapForMe((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->drawBaselineForMe((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->clearScene(); break;
        case 3: _t->objectWanted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->updateLayout(); break;
        case 5: _t->layoutFinished(); break;
        case 6: _t->paragraphFinished(); break;
        case 7: _t->paintFinished(); break;
        case 8: _t->stopLayout(); break;
        case 9: _t->doDraw(); break;
        case 10: _t->endOfRun(); break;
        case 11: _t->endOfParagraph(); break;
        case 12: _t->slotOption((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FMLayout::*)(int , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMLayout::drawPixmapForMe)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FMLayout::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMLayout::drawBaselineForMe)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FMLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMLayout::clearScene)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FMLayout::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMLayout::objectWanted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FMLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMLayout::updateLayout)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FMLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMLayout::layoutFinished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FMLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMLayout::paragraphFinished)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FMLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FMLayout::paintFinished)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FMLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FMLayout.data,
    qt_meta_data_FMLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FMLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FMLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FMLayout.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FMLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FMLayout::drawPixmapForMe(int _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FMLayout::drawBaselineForMe(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FMLayout::clearScene()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FMLayout::objectWanted(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FMLayout::updateLayout()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FMLayout::layoutFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FMLayout::paragraphFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FMLayout::paintFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
