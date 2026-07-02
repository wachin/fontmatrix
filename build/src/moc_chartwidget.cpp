/****************************************************************************
** Meta object code from reading C++ file 'chartwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/chartwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChartWidget_t {
    QByteArrayData data[13];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChartWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChartWidget_t qt_meta_stringdata_ChartWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ChartWidget"
QT_MOC_LITERAL(1, 12, 16), // "slotShowOneGlyph"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "slotShowAllGlyph"
QT_MOC_LITERAL(4, 47, 19), // "slotAdjustGlyphView"
QT_MOC_LITERAL(5, 67, 5), // "width"
QT_MOC_LITERAL(6, 73, 15), // "slotUpdateGView"
QT_MOC_LITERAL(7, 89, 21), // "slotUpdateGViewSingle"
QT_MOC_LITERAL(8, 111, 17), // "slotPlaneSelected"
QT_MOC_LITERAL(9, 129, 13), // "slotShowULine"
QT_MOC_LITERAL(10, 143, 18), // "slotSearchCharName"
QT_MOC_LITERAL(11, 162, 9), // "slotPrint"
QT_MOC_LITERAL(12, 172, 14) // "slotDoPrinting"

    },
    "ChartWidget\0slotShowOneGlyph\0\0"
    "slotShowAllGlyph\0slotAdjustGlyphView\0"
    "width\0slotUpdateGView\0slotUpdateGViewSingle\0"
    "slotPlaneSelected\0slotShowULine\0"
    "slotSearchCharName\0slotPrint\0"
    "slotDoPrinting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChartWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
       9,    1,   74,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChartWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChartWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotShowOneGlyph(); break;
        case 1: _t->slotShowAllGlyph(); break;
        case 2: _t->slotAdjustGlyphView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotUpdateGView(); break;
        case 4: _t->slotUpdateGViewSingle(); break;
        case 5: _t->slotPlaneSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotShowULine((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotSearchCharName(); break;
        case 8: _t->slotPrint(); break;
        case 9: _t->slotDoPrinting(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChartWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<FloatingWidget::staticMetaObject>(),
    qt_meta_stringdata_ChartWidget.data,
    qt_meta_data_ChartWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChartWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChartWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChartWidget.stringdata0))
        return static_cast<void*>(this);
    return FloatingWidget::qt_metacast(_clname);
}

int ChartWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FloatingWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
