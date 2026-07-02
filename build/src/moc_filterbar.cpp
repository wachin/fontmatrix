/****************************************************************************
** Meta object code from reading C++ file 'filterbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/filterbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filterbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TagListModel_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagListModel_t qt_meta_stringdata_TagListModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TagListModel"
QT_MOC_LITERAL(1, 13, 13), // "tagsDBChanged"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "TagListModel\0tagsDBChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TagListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TagListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tagsDBChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TagListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_TagListModel.data,
    qt_meta_data_TagListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TagListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int TagListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_TagListView_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagListView_t qt_meta_stringdata_TagListView = {
    {
QT_MOC_LITERAL(0, 0, 11) // "TagListView"

    },
    "TagListView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TagListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TagListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_TagListView.data,
    qt_meta_data_TagListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TagListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagListView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int TagListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FilterBar_t {
    QByteArrayData data[26];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterBar_t qt_meta_stringdata_FilterBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FilterBar"
QT_MOC_LITERAL(1, 10, 10), // "initSearch"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "filterChanged"
QT_MOC_LITERAL(4, 36, 14), // "processFilters"
QT_MOC_LITERAL(5, 51, 14), // "slotPanoFilter"
QT_MOC_LITERAL(6, 66, 10), // "metaFilter"
QT_MOC_LITERAL(7, 77, 15), // "metaSelectField"
QT_MOC_LITERAL(8, 93, 3), // "idx"
QT_MOC_LITERAL(9, 97, 13), // "filtersDialog"
QT_MOC_LITERAL(10, 111, 14), // "slotLoadFilter"
QT_MOC_LITERAL(11, 126, 5), // "fname"
QT_MOC_LITERAL(12, 132, 16), // "slotRemoveFilter"
QT_MOC_LITERAL(13, 149, 20), // "slotRemoveFilterItem"
QT_MOC_LITERAL(14, 170, 7), // "process"
QT_MOC_LITERAL(15, 178, 13), // "slotTagSelect"
QT_MOC_LITERAL(16, 192, 11), // "QModelIndex"
QT_MOC_LITERAL(17, 204, 5), // "index"
QT_MOC_LITERAL(18, 210, 11), // "slotTagEdit"
QT_MOC_LITERAL(19, 222, 15), // "slotClearFilter"
QT_MOC_LITERAL(20, 238, 14), // "slotToggleTags"
QT_MOC_LITERAL(21, 253, 1), // "t"
QT_MOC_LITERAL(22, 255, 14), // "slotToggleMeta"
QT_MOC_LITERAL(23, 270, 14), // "slotTogglePano"
QT_MOC_LITERAL(24, 285, 16), // "slotToggleFilter"
QT_MOC_LITERAL(25, 302, 14) // "slotSaveFilter"

    },
    "FilterBar\0initSearch\0\0filterChanged\0"
    "processFilters\0slotPanoFilter\0metaFilter\0"
    "metaSelectField\0idx\0filtersDialog\0"
    "slotLoadFilter\0fname\0slotRemoveFilter\0"
    "slotRemoveFilterItem\0process\0slotTagSelect\0"
    "QModelIndex\0index\0slotTagEdit\0"
    "slotClearFilter\0slotToggleTags\0t\0"
    "slotToggleMeta\0slotTogglePano\0"
    "slotToggleFilter\0slotSaveFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,
       3,    0,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  115,    2, 0x08 /* Private */,
       5,    0,  116,    2, 0x08 /* Private */,
       6,    0,  117,    2, 0x08 /* Private */,
       7,    1,  118,    2, 0x08 /* Private */,
       9,    0,  121,    2, 0x08 /* Private */,
      10,    1,  122,    2, 0x08 /* Private */,
      12,    1,  125,    2, 0x08 /* Private */,
      13,    1,  128,    2, 0x08 /* Private */,
      13,    0,  131,    2, 0x28 /* Private | MethodCloned */,
      15,    1,  132,    2, 0x08 /* Private */,
      18,    1,  135,    2, 0x08 /* Private */,
      19,    0,  138,    2, 0x08 /* Private */,
      20,    1,  139,    2, 0x08 /* Private */,
      22,    1,  142,    2, 0x08 /* Private */,
      23,    1,  145,    2, 0x08 /* Private */,
      24,    1,  148,    2, 0x08 /* Private */,
      25,    0,  151,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,

       0        // eod
};

void FilterBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initSearch((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->filterChanged(); break;
        case 2: _t->processFilters(); break;
        case 3: _t->slotPanoFilter(); break;
        case 4: _t->metaFilter(); break;
        case 5: _t->metaSelectField((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->filtersDialog(); break;
        case 7: _t->slotLoadFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotRemoveFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->slotRemoveFilterItem((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->slotRemoveFilterItem(); break;
        case 11: _t->slotTagSelect((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->slotTagEdit((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->slotClearFilter(); break;
        case 14: _t->slotToggleTags((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slotToggleMeta((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->slotTogglePano((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->slotToggleFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->slotSaveFilter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterBar::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterBar::initSearch)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FilterBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterBar::filterChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FilterBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FilterBar.data,
    qt_meta_data_FilterBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilterBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilterBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FilterBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void FilterBar::initSearch(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FilterBar::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
