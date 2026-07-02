/****************************************************************************
** Meta object code from reading C++ file 'systray.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/systray.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Systray_t {
    QByteArrayData data[27];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Systray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Systray_t qt_meta_stringdata_Systray = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Systray"
QT_MOC_LITERAL(1, 8, 4), // "show"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 4), // "hide"
QT_MOC_LITERAL(4, 19, 14), // "slotSetVisible"
QT_MOC_LITERAL(5, 34, 9), // "isVisible"
QT_MOC_LITERAL(6, 44, 18), // "slotSetActivateAll"
QT_MOC_LITERAL(7, 63, 6), // "newTag"
QT_MOC_LITERAL(8, 70, 9), // "deleteTag"
QT_MOC_LITERAL(9, 80, 4), // "name"
QT_MOC_LITERAL(10, 85, 13), // "updateTagMenu"
QT_MOC_LITERAL(11, 99, 31), // "nameOfFontWhichCausedThisUpdate"
QT_MOC_LITERAL(12, 131, 22), // "requireAllConfirmation"
QT_MOC_LITERAL(13, 154, 9), // "doRequire"
QT_MOC_LITERAL(14, 164, 23), // "requireTagsConfirmation"
QT_MOC_LITERAL(15, 188, 15), // "trayIconClicked"
QT_MOC_LITERAL(16, 204, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(17, 238, 6), // "reason"
QT_MOC_LITERAL(18, 245, 15), // "slotActivateAll"
QT_MOC_LITERAL(19, 261, 17), // "slotDeactivateAll"
QT_MOC_LITERAL(20, 279, 12), // "slotMinimize"
QT_MOC_LITERAL(21, 292, 11), // "slotRestore"
QT_MOC_LITERAL(22, 304, 18), // "slotTagMenuClicked"
QT_MOC_LITERAL(23, 323, 8), // "QAction*"
QT_MOC_LITERAL(24, 332, 6), // "action"
QT_MOC_LITERAL(25, 339, 8), // "slotQuit"
QT_MOC_LITERAL(26, 348, 15) // "slotPrepareMenu"

    },
    "Systray\0show\0\0hide\0slotSetVisible\0"
    "isVisible\0slotSetActivateAll\0newTag\0"
    "deleteTag\0name\0updateTagMenu\0"
    "nameOfFontWhichCausedThisUpdate\0"
    "requireAllConfirmation\0doRequire\0"
    "requireTagsConfirmation\0trayIconClicked\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0slotActivateAll\0slotDeactivateAll\0"
    "slotMinimize\0slotRestore\0slotTagMenuClicked\0"
    "QAction*\0action\0slotQuit\0slotPrepareMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Systray[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    1,  101,    2, 0x0a /* Public */,
       6,    1,  104,    2, 0x0a /* Public */,
       7,    1,  107,    2, 0x0a /* Public */,
       8,    1,  110,    2, 0x0a /* Public */,
      10,    1,  113,    2, 0x0a /* Public */,
      12,    1,  116,    2, 0x0a /* Public */,
      14,    1,  119,    2, 0x0a /* Public */,
      15,    1,  122,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,
      21,    0,  128,    2, 0x08 /* Private */,
      22,    1,  129,    2, 0x08 /* Private */,
      25,    0,  132,    2, 0x08 /* Private */,
      26,    0,  133,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Systray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Systray *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->hide(); break;
        case 2: _t->slotSetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotSetActivateAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->newTag((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->deleteTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->updateTagMenu((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 7: _t->requireAllConfirmation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->requireTagsConfirmation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->trayIconClicked((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 10: _t->slotActivateAll(); break;
        case 11: _t->slotDeactivateAll(); break;
        case 12: _t->slotMinimize(); break;
        case 13: _t->slotRestore(); break;
        case 14: _t->slotTagMenuClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: _t->slotQuit(); break;
        case 16: _t->slotPrepareMenu(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Systray::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Systray.data,
    qt_meta_data_Systray,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Systray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Systray::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Systray.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Systray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
