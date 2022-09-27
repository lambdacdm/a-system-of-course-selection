/****************************************************************************
** Meta object code from reading C++ file 'teacherui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../coursesystem/teacherui.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacherui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_TeacherUI_t {
    uint offsetsAndSizes[20];
    char stringdata0[10];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[25];
    char stringdata5[10];
    char stringdata6[2];
    char stringdata7[8];
    char stringdata8[7];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TeacherUI_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TeacherUI_t qt_meta_stringdata_TeacherUI = {
    {
        QT_MOC_LITERAL(0, 9),  // "TeacherUI"
        QT_MOC_LITERAL(10, 22),  // "on_texitButton_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 15),  // "disptablewidget"
        QT_MOC_LITERAL(50, 24),  // "on_releaseButton_clicked"
        QT_MOC_LITERAL(75, 9),  // "deleterow"
        QT_MOC_LITERAL(85, 1),  // "i"
        QT_MOC_LITERAL(87, 7),  // "editrow"
        QT_MOC_LITERAL(95, 6),  // "seerow"
        QT_MOC_LITERAL(102, 19)   // "on_f5Button_clicked"
    },
    "TeacherUI",
    "on_texitButton_clicked",
    "",
    "disptablewidget",
    "on_releaseButton_clicked",
    "deleterow",
    "i",
    "editrow",
    "seerow",
    "on_f5Button_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TeacherUI[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    1,   59,    2, 0x08,    4 /* Private */,
       7,    1,   62,    2, 0x08,    6 /* Private */,
       8,    1,   65,    2, 0x08,    8 /* Private */,
       9,    0,   68,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TeacherUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TeacherUI.offsetsAndSizes,
    qt_meta_data_TeacherUI,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TeacherUI_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TeacherUI, std::true_type>,
        // method 'on_texitButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disptablewidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_releaseButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleterow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'editrow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'seerow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_f5Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TeacherUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TeacherUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_texitButton_clicked(); break;
        case 1: _t->disptablewidget(); break;
        case 2: _t->on_releaseButton_clicked(); break;
        case 3: _t->deleterow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->editrow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->seerow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_f5Button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *TeacherUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TeacherUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TeacherUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TeacherUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
