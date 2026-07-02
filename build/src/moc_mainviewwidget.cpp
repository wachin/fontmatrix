/****************************************************************************
** Meta object code from reading C++ file 'mainviewwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/mainviewwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainviewwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainViewWidget_t {
    QByteArrayData data[22];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainViewWidget_t qt_meta_stringdata_MainViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MainViewWidget"
QT_MOC_LITERAL(1, 15, 11), // "faceChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "listChanged"
QT_MOC_LITERAL(4, 40, 19), // "slotOrderingChanged"
QT_MOC_LITERAL(5, 60, 1), // "s"
QT_MOC_LITERAL(6, 62, 22), // "slotFontSelectedByName"
QT_MOC_LITERAL(7, 85, 5), // "fname"
QT_MOC_LITERAL(8, 91, 21), // "slotPreviewUpdateSize"
QT_MOC_LITERAL(9, 113, 1), // "w"
QT_MOC_LITERAL(10, 115, 14), // "slotShowFamily"
QT_MOC_LITERAL(11, 130, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 142, 9), // "familyIdx"
QT_MOC_LITERAL(13, 152, 14), // "slotQuitFamily"
QT_MOC_LITERAL(14, 167, 19), // "refreshVisibleFonts"
QT_MOC_LITERAL(15, 187, 18), // "slotDesactivateAll"
QT_MOC_LITERAL(16, 206, 15), // "slotActivateAll"
QT_MOC_LITERAL(17, 222, 21), // "slotRemoveCurrentItem"
QT_MOC_LITERAL(18, 244, 15), // "slotQuickSearch"
QT_MOC_LITERAL(19, 260, 4), // "text"
QT_MOC_LITERAL(20, 265, 18), // "slotEndQuickSearch"
QT_MOC_LITERAL(21, 284, 25) // "slotSelectFromQuickSearch"

    },
    "MainViewWidget\0faceChanged\0\0listChanged\0"
    "slotOrderingChanged\0s\0slotFontSelectedByName\0"
    "fname\0slotPreviewUpdateSize\0w\0"
    "slotShowFamily\0QModelIndex\0familyIdx\0"
    "slotQuitFamily\0refreshVisibleFonts\0"
    "slotDesactivateAll\0slotActivateAll\0"
    "slotRemoveCurrentItem\0slotQuickSearch\0"
    "text\0slotEndQuickSearch\0"
    "slotSelectFromQuickSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainViewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   86,    2, 0x0a /* Public */,
       6,    1,   89,    2, 0x0a /* Public */,
       8,    1,   92,    2, 0x0a /* Public */,
      10,    1,   95,    2, 0x0a /* Public */,
      13,    0,   98,    2, 0x0a /* Public */,
      14,    0,   99,    2, 0x0a /* Public */,
      15,    0,  100,    2, 0x0a /* Public */,
      16,    0,  101,    2, 0x0a /* Public */,
      17,    0,  102,    2, 0x0a /* Public */,
      18,    1,  103,    2, 0x08 /* Private */,
      20,    0,  106,    2, 0x08 /* Private */,
      21,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainViewWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->faceChanged(); break;
        case 1: _t->listChanged(); break;
        case 2: _t->slotOrderingChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->slotFontSelectedByName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->slotPreviewUpdateSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotShowFamily((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->slotQuitFamily(); break;
        case 7: _t->refreshVisibleFonts(); break;
        case 8: _t->slotDesactivateAll(); break;
        case 9: _t->slotActivateAll(); break;
        case 10: _t->slotRemoveCurrentItem(); break;
        case 11: _t->slotQuickSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->slotEndQuickSearch(); break;
        case 13: _t->slotSelectFromQuickSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainViewWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewWidget::faceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainViewWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewWidget::listChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MainViewWidget.data,
    qt_meta_data_MainViewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainViewWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainViewWidget::faceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainViewWidget::listChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
