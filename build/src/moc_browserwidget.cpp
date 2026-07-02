/****************************************************************************
** Meta object code from reading C++ file 'browserwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/browserwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browserwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BrowserWidget_t {
    QByteArrayData data[18];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrowserWidget_t qt_meta_stringdata_BrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BrowserWidget"
QT_MOC_LITERAL(1, 14, 16), // "folderSelectFont"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "slotFolderItemclicked"
QT_MOC_LITERAL(4, 54, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 66, 4), // "mIdx"
QT_MOC_LITERAL(6, 71, 17), // "slotFolderPressed"
QT_MOC_LITERAL(7, 89, 22), // "slotFolderAddToWatcher"
QT_MOC_LITERAL(8, 112, 27), // "slotFolderRemoveFromWatcher"
QT_MOC_LITERAL(9, 140, 17), // "slotFolderRefresh"
QT_MOC_LITERAL(10, 158, 7), // "dirPath"
QT_MOC_LITERAL(11, 166, 12), // "slotShowInfo"
QT_MOC_LITERAL(12, 179, 14), // "slotShowSample"
QT_MOC_LITERAL(13, 194, 13), // "slotShowChart"
QT_MOC_LITERAL(14, 208, 10), // "slotImport"
QT_MOC_LITERAL(15, 219, 15), // "slotDetachChart"
QT_MOC_LITERAL(16, 235, 16), // "slotDetachSample"
QT_MOC_LITERAL(17, 252, 25) // "slotFolderViewContextMenu"

    },
    "BrowserWidget\0folderSelectFont\0\0"
    "slotFolderItemclicked\0QModelIndex\0"
    "mIdx\0slotFolderPressed\0slotFolderAddToWatcher\0"
    "slotFolderRemoveFromWatcher\0"
    "slotFolderRefresh\0dirPath\0slotShowInfo\0"
    "slotShowSample\0slotShowChart\0slotImport\0"
    "slotDetachChart\0slotDetachSample\0"
    "slotFolderViewContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrowserWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   82,    2, 0x08 /* Private */,
       6,    1,   85,    2, 0x08 /* Private */,
       7,    1,   88,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
       9,    1,   94,    2, 0x08 /* Private */,
      11,    0,   97,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

void BrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowserWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->folderSelectFont((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slotFolderItemclicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->slotFolderPressed((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->slotFolderAddToWatcher((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 4: _t->slotFolderRemoveFromWatcher((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 5: _t->slotFolderRefresh((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotShowInfo(); break;
        case 7: _t->slotShowSample(); break;
        case 8: _t->slotShowChart(); break;
        case 9: _t->slotImport(); break;
        case 10: _t->slotDetachChart(); break;
        case 11: _t->slotDetachSample(); break;
        case 12: _t->slotFolderViewContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserWidget::folderSelectFont)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BrowserWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BrowserWidget.data,
    qt_meta_data_BrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrowserWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void BrowserWidget::folderSelectFont(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FolderViewMenu_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FolderViewMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FolderViewMenu_t qt_meta_stringdata_FolderViewMenu = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FolderViewMenu"
QT_MOC_LITERAL(1, 15, 13), // "slotImportDir"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 24), // "slotImportDirRecursively"
QT_MOC_LITERAL(4, 55, 14) // "slotImportFile"

    },
    "FolderViewMenu\0slotImportDir\0\0"
    "slotImportDirRecursively\0slotImportFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FolderViewMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FolderViewMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderViewMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotImportDir(); break;
        case 1: _t->slotImportDirRecursively(); break;
        case 2: _t->slotImportFile(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FolderViewMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_FolderViewMenu.data,
    qt_meta_data_FolderViewMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FolderViewMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolderViewMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FolderViewMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int FolderViewMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
