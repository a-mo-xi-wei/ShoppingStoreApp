/****************************************************************************
** Meta object code from reading C++ file 'BasicWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ShoppingStoreApp/component/BasicWindow.h"
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
    "loadProductInfo",
    "",
    "pageCount",
    "adjustScrollbar",
    "showDetailPage",
    "QModelIndex",
    "index",
    "on_meizhuang_pushButton_clicked",
    "on_shuma_pushButton_clicked",
    "on_jiadian_pushButton_clicked",
    "on_jiaju_pushButton_clicked",
    "on_fuzhuang_pushButton_clicked",
    "on_shipin_pushButton_clicked",
    "on_pushButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBasicWindowENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[12];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[16];
    char stringdata5[15];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[32];
    char stringdata9[28];
    char stringdata10[30];
    char stringdata11[28];
    char stringdata12[31];
    char stringdata13[29];
    char stringdata14[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBasicWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBasicWindowENDCLASS_t qt_meta_stringdata_CLASSBasicWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "BasicWindow"
        QT_MOC_LITERAL(12, 15),  // "loadProductInfo"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 9),  // "pageCount"
        QT_MOC_LITERAL(39, 15),  // "adjustScrollbar"
        QT_MOC_LITERAL(55, 14),  // "showDetailPage"
        QT_MOC_LITERAL(70, 11),  // "QModelIndex"
        QT_MOC_LITERAL(82, 5),  // "index"
        QT_MOC_LITERAL(88, 31),  // "on_meizhuang_pushButton_clicked"
        QT_MOC_LITERAL(120, 27),  // "on_shuma_pushButton_clicked"
        QT_MOC_LITERAL(148, 29),  // "on_jiadian_pushButton_clicked"
        QT_MOC_LITERAL(178, 27),  // "on_jiaju_pushButton_clicked"
        QT_MOC_LITERAL(206, 30),  // "on_fuzhuang_pushButton_clicked"
        QT_MOC_LITERAL(237, 28),  // "on_shipin_pushButton_clicked"
        QT_MOC_LITERAL(266, 21)   // "on_pushButton_clicked"
    },
    "BasicWindow",
    "loadProductInfo",
    "",
    "pageCount",
    "adjustScrollbar",
    "showDetailPage",
    "QModelIndex",
    "index",
    "on_meizhuang_pushButton_clicked",
    "on_shuma_pushButton_clicked",
    "on_jiadian_pushButton_clicked",
    "on_jiaju_pushButton_clicked",
    "on_fuzhuang_pushButton_clicked",
    "on_shipin_pushButton_clicked",
    "on_pushButton_clicked"
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
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x0a,    1 /* Public */,
       1,    0,   83,    2, 0x2a,    3 /* Public | MethodCloned */,
       4,    0,   84,    2, 0x0a,    4 /* Public */,
       5,    1,   85,    2, 0x0a,    5 /* Public */,
       8,    0,   88,    2, 0x08,    7 /* Private */,
       9,    0,   89,    2, 0x08,    8 /* Private */,
      10,    0,   90,    2, 0x08,    9 /* Private */,
      11,    0,   91,    2, 0x08,   10 /* Private */,
      12,    0,   92,    2, 0x08,   11 /* Private */,
      13,    0,   93,    2, 0x08,   12 /* Private */,
      14,    0,   94,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Int, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
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
        // method 'on_meizhuang_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_shuma_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_jiadian_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_jiaju_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fuzhuang_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_shipin_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
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
        case 0: { int _r = _t->loadProductInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->loadProductInfo();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->adjustScrollbar(); break;
        case 3: _t->showDetailPage((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->on_meizhuang_pushButton_clicked(); break;
        case 5: _t->on_shuma_pushButton_clicked(); break;
        case 6: _t->on_jiadian_pushButton_clicked(); break;
        case 7: _t->on_jiaju_pushButton_clicked(); break;
        case 8: _t->on_fuzhuang_pushButton_clicked(); break;
        case 9: _t->on_shipin_pushButton_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
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
QT_WARNING_POP
