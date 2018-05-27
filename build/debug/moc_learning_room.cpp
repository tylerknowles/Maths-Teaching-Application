/****************************************************************************
** Meta object code from reading C++ file 'learning_room.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sources/learning_room.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'learning_room.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_learning_room_t {
    QByteArrayData data[15];
    char stringdata0[408];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_learning_room_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_learning_room_t qt_meta_stringdata_learning_room = {
    {
QT_MOC_LITERAL(0, 0, 13), // "learning_room"
QT_MOC_LITERAL(1, 14, 23), // "on_login_button_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "on_continue_module_clicked"
QT_MOC_LITERAL(4, 66, 31), // "on_task_previous_button_clicked"
QT_MOC_LITERAL(5, 98, 37), // "on_task_learn_previous_button..."
QT_MOC_LITERAL(6, 136, 36), // "on_task_test_previous_button_..."
QT_MOC_LITERAL(7, 173, 28), // "on_task_learn_button_clicked"
QT_MOC_LITERAL(8, 202, 27), // "on_task_test_button_clicked"
QT_MOC_LITERAL(9, 230, 26), // "on_register_button_clicked"
QT_MOC_LITERAL(10, 257, 28), // "on_add_module_button_clicked"
QT_MOC_LITERAL(11, 286, 31), // "on_remove_module_button_clicked"
QT_MOC_LITERAL(12, 318, 27), // "on_to_scores_button_clicked"
QT_MOC_LITERAL(13, 346, 33), // "on_scores_previous_button_cli..."
QT_MOC_LITERAL(14, 380, 27) // "on_task_test_submit_clicked"

    },
    "learning_room\0on_login_button_clicked\0"
    "\0on_continue_module_clicked\0"
    "on_task_previous_button_clicked\0"
    "on_task_learn_previous_button_clicked\0"
    "on_task_test_previous_button_clicked\0"
    "on_task_learn_button_clicked\0"
    "on_task_test_button_clicked\0"
    "on_register_button_clicked\0"
    "on_add_module_button_clicked\0"
    "on_remove_module_button_clicked\0"
    "on_to_scores_button_clicked\0"
    "on_scores_previous_button_clicked\0"
    "on_task_test_submit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_learning_room[] = {

 // content:
       7,       // revision
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
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void learning_room::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        learning_room *_t = static_cast<learning_room *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_login_button_clicked(); break;
        case 1: _t->on_continue_module_clicked(); break;
        case 2: _t->on_task_previous_button_clicked(); break;
        case 3: _t->on_task_learn_previous_button_clicked(); break;
        case 4: _t->on_task_test_previous_button_clicked(); break;
        case 5: _t->on_task_learn_button_clicked(); break;
        case 6: _t->on_task_test_button_clicked(); break;
        case 7: _t->on_register_button_clicked(); break;
        case 8: _t->on_add_module_button_clicked(); break;
        case 9: _t->on_remove_module_button_clicked(); break;
        case 10: _t->on_to_scores_button_clicked(); break;
        case 11: _t->on_scores_previous_button_clicked(); break;
        case 12: _t->on_task_test_submit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject learning_room::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_learning_room.data,
      qt_meta_data_learning_room,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *learning_room::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *learning_room::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_learning_room.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int learning_room::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
