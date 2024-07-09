/****************************************************************************
** Meta object code from reading C++ file 'BasicWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../component/BasicWindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BasicWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBasicWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBasicWindowENDCLASS = QtMocHelpers::stringData(
    "BasicWindow",
    "turnToBlack",
    "",
    "styleStr",
    "loadProductInfo",
    "pageCount",
    "adjustScrollbar",
    "showDetailPage",
    "QModelIndex",
    "index",
    "classifyButtonClicked",
    "on_pushButton_clicked",
    "on_black_pushButton_clicked",
    "on_pink_pushButton_clicked",
    "on_white_pushButton_clicked",
    "on_return_pushButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBasicWindowENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[16];
    char stringdata5[10];
    char stringdata6[16];
    char stringdata7[15];
    char stringdata8[12];
    char stringdata9[6];
    char stringdata10[22];
    char stringdata11[22];
    char stringdata12[28];
    char stringdata13[27];
    char stringdata14[28];
    char stringdata15[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBasicWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBasicWindowENDCLASS_t qt_meta_stringdata_CLASSBasicWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "BasicWindow"
        QT_MOC_LITERAL(12, 11),  // "turnToBlack"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 8),  // "styleStr"
        QT_MOC_LITERAL(34, 15),  // "loadProductInfo"
        QT_MOC_LITERAL(50, 9),  // "pageCount"
        QT_MOC_LITERAL(60, 15),  // "adjustScrollbar"
        QT_MOC_LITERAL(76, 14),  // "showDetailPage"
        QT_MOC_LITERAL(91, 11),  // "QModelIndex"
        QT_MOC_LITERAL(103, 5),  // "index"
        QT_MOC_LITERAL(109, 21),  // "classifyButtonClicked"
        QT_MOC_LITERAL(131, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(153, 27),  // "on_black_pushButton_clicked"
        QT_MOC_LITERAL(181, 26),  // "on_pink_pushButton_clicked"
        QT_MOC_LITERAL(208, 27),  // "on_white_pushButton_clicked"
        QT_MOC_LITERAL(236, 28)   // "on_return_pushButton_clicked"
    },
    "BasicWindow",
    "turnToBlack",
    "",
    "styleStr",
    "loadProductInfo",
    "pageCount",
    "adjustScrollbar",
    "showDetailPage",
    "QModelIndex",
    "index",
    "classifyButtonClicked",
    "on_pushButton_clicked",
    "on_black_pushButton_clicked",
    "on_pink_pushButton_clicked",
    "on_white_pushButton_clicked",
    "on_return_pushButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBasicWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   83,    2, 0x0a,    3 /* Public */,
       4,    0,   86,    2, 0x2a,    5 /* Public | MethodCloned */,
       6,    0,   87,    2, 0x0a,    6 /* Public */,
       7,    1,   88,    2, 0x0a,    7 /* Public */,
      10,    0,   91,    2, 0x08,    9 /* Private */,
      11,    0,   92,    2, 0x08,   10 /* Private */,
      12,    0,   93,    2, 0x08,   11 /* Private */,
      13,    0,   94,    2, 0x08,   12 /* Private */,
      14,    0,   95,    2, 0x08,   13 /* Private */,
      15,    0,   96,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BasicWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSBasicWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBasicWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBasicWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BasicWindow, std::true_type>,
        // method 'turnToBlack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'loadProductInfo'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'loadProductInfo'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'adjustScrollbar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showDetailPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'classifyButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_black_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pink_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_white_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_return_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BasicWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BasicWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->turnToBlack((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: { int _r = _t->loadProductInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->loadProductInfo();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->adjustScrollbar(); break;
        case 4: _t->showDetailPage((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->classifyButtonClicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_black_pushButton_clicked(); break;
        case 8: _t->on_pink_pushButton_clicked(); break;
        case 9: _t->on_white_pushButton_clicked(); break;
        case 10: _t->on_return_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BasicWindow::*)(const QString & );
            if (_t _q_method = &BasicWindow::turnToBlack; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *BasicWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBasicWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BasicWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void BasicWindow::turnToBlack(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
