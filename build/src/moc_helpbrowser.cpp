/****************************************************************************
** Meta object code from reading C++ file 'helpbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/helpbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HelpBrowser_t {
    QByteArrayData data[32];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelpBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelpBrowser_t qt_meta_stringdata_HelpBrowser = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HelpBrowser"
QT_MOC_LITERAL(1, 12, 6), // "closed"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "languageChange"
QT_MOC_LITERAL(4, 35, 10), // "histChosen"
QT_MOC_LITERAL(5, 46, 8), // "QAction*"
QT_MOC_LITERAL(6, 55, 1), // "i"
QT_MOC_LITERAL(7, 57, 17), // "jumpToHelpSection"
QT_MOC_LITERAL(8, 75, 13), // "jumpToSection"
QT_MOC_LITERAL(9, 89, 10), // "jumpToFile"
QT_MOC_LITERAL(10, 100, 8), // "loadHelp"
QT_MOC_LITERAL(11, 109, 8), // "filename"
QT_MOC_LITERAL(12, 118, 8), // "loadMenu"
QT_MOC_LITERAL(13, 127, 16), // "showLinkContents"
QT_MOC_LITERAL(14, 144, 4), // "link"
QT_MOC_LITERAL(15, 149, 12), // "bookmarkFile"
QT_MOC_LITERAL(16, 162, 11), // "historyFile"
QT_MOC_LITERAL(17, 174, 12), // "itemSelected"
QT_MOC_LITERAL(18, 187, 14), // "QItemSelection"
QT_MOC_LITERAL(19, 202, 8), // "selected"
QT_MOC_LITERAL(20, 211, 10), // "deselected"
QT_MOC_LITERAL(21, 222, 18), // "itemSearchSelected"
QT_MOC_LITERAL(22, 241, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(23, 258, 20), // "itemBookmarkSelected"
QT_MOC_LITERAL(24, 279, 23), // "searchingButton_clicked"
QT_MOC_LITERAL(25, 303, 4), // "find"
QT_MOC_LITERAL(26, 308, 8), // "findNext"
QT_MOC_LITERAL(27, 317, 12), // "findPrevious"
QT_MOC_LITERAL(28, 330, 5), // "print"
QT_MOC_LITERAL(29, 336, 22), // "bookmarkButton_clicked"
QT_MOC_LITERAL(30, 359, 28), // "deleteBookmarkButton_clicked"
QT_MOC_LITERAL(31, 388, 31) // "deleteAllBookmarkButton_clicked"

    },
    "HelpBrowser\0closed\0\0languageChange\0"
    "histChosen\0QAction*\0i\0jumpToHelpSection\0"
    "jumpToSection\0jumpToFile\0loadHelp\0"
    "filename\0loadMenu\0showLinkContents\0"
    "link\0bookmarkFile\0historyFile\0"
    "itemSelected\0QItemSelection\0selected\0"
    "deselected\0itemSearchSelected\0"
    "QTreeWidgetItem*\0itemBookmarkSelected\0"
    "searchingButton_clicked\0find\0findNext\0"
    "findPrevious\0print\0bookmarkButton_clicked\0"
    "deleteBookmarkButton_clicked\0"
    "deleteAllBookmarkButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpBrowser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  120,    2, 0x09 /* Protected */,
       4,    1,  121,    2, 0x09 /* Protected */,
       7,    2,  124,    2, 0x09 /* Protected */,
       7,    1,  129,    2, 0x29 /* Protected | MethodCloned */,
      10,    1,  132,    2, 0x09 /* Protected */,
      12,    0,  135,    2, 0x09 /* Protected */,
      13,    1,  136,    2, 0x09 /* Protected */,
      15,    0,  139,    2, 0x09 /* Protected */,
      16,    0,  140,    2, 0x09 /* Protected */,
      17,    2,  141,    2, 0x09 /* Protected */,
      21,    2,  146,    2, 0x09 /* Protected */,
      23,    2,  151,    2, 0x09 /* Protected */,
      24,    0,  156,    2, 0x09 /* Protected */,
      25,    0,  157,    2, 0x09 /* Protected */,
      26,    0,  158,    2, 0x09 /* Protected */,
      27,    0,  159,    2, 0x09 /* Protected */,
      28,    0,  160,    2, 0x09 /* Protected */,
      29,    0,  161,    2, 0x09 /* Protected */,
      30,    0,  162,    2, 0x09 /* Protected */,
      31,    0,  163,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HelpBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HelpBrowser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->languageChange(); break;
        case 2: _t->histChosen((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->jumpToHelpSection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->jumpToHelpSection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->loadHelp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->loadMenu(); break;
        case 7: _t->showLinkContents((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { QString _r = _t->bookmarkFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->historyFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->itemSelected((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 11: _t->itemSearchSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->itemBookmarkSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->searchingButton_clicked(); break;
        case 14: _t->find(); break;
        case 15: _t->findNext(); break;
        case 16: _t->findPrevious(); break;
        case 17: _t->print(); break;
        case 18: _t->bookmarkButton_clicked(); break;
        case 19: _t->deleteBookmarkButton_clicked(); break;
        case 20: _t->deleteAllBookmarkButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HelpBrowser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HelpBrowser::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HelpBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_HelpBrowser.data,
    qt_meta_data_HelpBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HelpBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HelpBrowser.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::HelpBrowser"))
        return static_cast< Ui::HelpBrowser*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HelpBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void HelpBrowser::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
