/****************************************************************************
** Meta object code from reading C++ file 'teacherreleaseui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../coursesystem/teacherreleaseui.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacherreleaseui.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TeacherReleaseUI_t {
    uint offsetsAndSizes[8];
    char stringdata0[17];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TeacherReleaseUI_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TeacherReleaseUI_t qt_meta_stringdata_TeacherReleaseUI = {
    {
        QT_MOC_LITERAL(0, 16),  // "TeacherReleaseUI"
        QT_MOC_LITERAL(17, 19),  // "on_noButton_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 19)   // "on_okButton_clicked"
    },
    "TeacherReleaseUI",
    "on_noButton_clicked",
    "",
    "on_okButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TeacherReleaseUI[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TeacherReleaseUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TeacherReleaseUI.offsetsAndSizes,
    qt_meta_data_TeacherReleaseUI,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TeacherReleaseUI_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TeacherReleaseUI, std::true_type>,
        // method 'on_noButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_okButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TeacherReleaseUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TeacherReleaseUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_noButton_clicked(); break;
        case 1: _t->on_okButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TeacherReleaseUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TeacherReleaseUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TeacherReleaseUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TeacherReleaseUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
