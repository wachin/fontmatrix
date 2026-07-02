/****************************************************************************
** Meta object code from reading C++ file 'fontcomparewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/fontcomparewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontcomparewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FontCompareWidget_t {
    QByteArrayData data[22];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FontCompareWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FontCompareWidget_t qt_meta_stringdata_FontCompareWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FontCompareWidget"
QT_MOC_LITERAL(1, 18, 7), // "addFont"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "removeFont"
QT_MOC_LITERAL(4, 38, 10), // "showChange"
QT_MOC_LITERAL(5, 49, 10), // "fillChange"
QT_MOC_LITERAL(6, 60, 6), // "newIdx"
QT_MOC_LITERAL(7, 67, 12), // "pointsChange"
QT_MOC_LITERAL(8, 80, 14), // "controlsChange"
QT_MOC_LITERAL(9, 95, 13), // "metricsChange"
QT_MOC_LITERAL(10, 109, 12), // "offsetChange"
QT_MOC_LITERAL(11, 122, 1), // "o"
QT_MOC_LITERAL(12, 124, 15), // "characterChange"
QT_MOC_LITERAL(13, 140, 1), // "v"
QT_MOC_LITERAL(14, 142, 18), // "characterBoxChange"
QT_MOC_LITERAL(15, 161, 1), // "i"
QT_MOC_LITERAL(16, 163, 10), // "fontChange"
QT_MOC_LITERAL(17, 174, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(18, 191, 5), // "witem"
QT_MOC_LITERAL(19, 197, 7), // "olditem"
QT_MOC_LITERAL(20, 205, 10), // "syncChange"
QT_MOC_LITERAL(21, 216, 5) // "state"

    },
    "FontCompareWidget\0addFont\0\0removeFont\0"
    "showChange\0fillChange\0newIdx\0pointsChange\0"
    "controlsChange\0metricsChange\0offsetChange\0"
    "o\0characterChange\0v\0characterBoxChange\0"
    "i\0fontChange\0QListWidgetItem*\0witem\0"
    "olditem\0syncChange\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FontCompareWidget[] = {

 // content:
       8,       // revision
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
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    1,   88,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      16,    2,   97,    2, 0x08 /* Private */,
      16,    1,  102,    2, 0x28 /* Private | MethodCloned */,
      20,    1,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17,   18,   19,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void FontCompareWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FontCompareWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addFont(); break;
        case 1: _t->removeFont(); break;
        case 2: _t->showChange(); break;
        case 3: _t->fillChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->pointsChange(); break;
        case 5: _t->controlsChange(); break;
        case 6: _t->metricsChange(); break;
        case 7: _t->offsetChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->characterChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->characterBoxChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->fontChange((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 11: _t->fontChange((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->syncChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FontCompareWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FontCompareWidget.data,
    qt_meta_data_FontCompareWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FontCompareWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FontCompareWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FontCompareWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FontCompareWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
