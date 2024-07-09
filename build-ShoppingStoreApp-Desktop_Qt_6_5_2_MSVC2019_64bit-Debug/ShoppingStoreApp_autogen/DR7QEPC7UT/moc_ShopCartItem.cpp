/****************************************************************************
** Meta object code from reading C++ file 'ShopCartItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ShoppingStoreApp/component/ShopCartItem.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShopCartItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSShopCartItemENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSShopCartItemENDCLASS = QtMocHelpers::stringData(
    "ShopCartItem",
    "removeItem",
    "",
    "number",
    "sumMoneyChanged",
    "price",
    "setCheckBoxState",
    "state",
    "on_sub_pushButton_clicked",
    "on_add_pushButton_clicked",
    "on_remove_pushButton_clicked",
    "on_checkBox_stateChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSShopCartItemENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[13];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[16];
    char stringdata5[6];
    char stringdata6[17];
    char stringdata7[6];
    char stringdata8[26];
    char stringdata9[26];
    char stringdata10[29];
    char stringdata11[25];
    char stringdata12[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSShopCartItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSShopCartItemENDCLASS_t qt_meta_stringdata_CLASSShopCartItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ShopCartItem"
        QT_MOC_LITERAL(13, 10),  // "removeItem"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 6),  // "number"
        QT_MOC_LITERAL(32, 15),  // "sumMoneyChanged"
        QT_MOC_LITERAL(48, 5),  // "price"
        QT_MOC_LITERAL(54, 16),  // "setCheckBoxState"
        QT_MOC_LITERAL(71, 5),  // "state"
        QT_MOC_LITERAL(77, 25),  // "on_sub_pushButton_clicked"
        QT_MOC_LITERAL(103, 25),  // "on_add_pushButton_clicked"
        QT_MOC_LITERAL(129, 28),  // "on_remove_pushButton_clicked"
        QT_MOC_LITERAL(158, 24),  // "on_checkBox_stateChanged"
        QT_MOC_LITERAL(183, 4)   // "arg1"
    },
    "ShopCartItem",
    "removeItem",
    "",
    "number",
    "sumMoneyChanged",
    "price",
    "setCheckBoxState",
    "state",
    "on_sub_pushButton_clicked",
    "on_add_pushButton_clicked",
    "on_remove_pushButton_clicked",
    "on_checkBox_stateChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSShopCartItemENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    1,   59,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   62,    2, 0x0a,    5 /* Public */,
       8,    0,   65,    2, 0x0a,    7 /* Public */,
       9,    0,   66,    2, 0x0a,    8 /* Public */,
      10,    0,   67,    2, 0x0a,    9 /* Public */,
      11,    1,   68,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject ShopCartItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSShopCartItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSShopCartItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSShopCartItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShopCartItem, std::true_type>,
        // method 'removeItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sumMoneyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double &, std::false_type>,
        // method 'setCheckBoxState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sub_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_remove_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ShopCartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShopCartItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->removeItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->sumMoneyChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->setCheckBoxState((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_sub_pushButton_clicked(); break;
        case 4: _t->on_add_pushButton_clicked(); break;
        case 5: _t->on_remove_pushButton_clicked(); break;
        case 6: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShopCartItem::*)(const QString & );
            if (_t _q_method = &ShopCartItem::removeItem; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShopCartItem::*)(const double & );
            if (_t _q_method = &ShopCartItem::sumMoneyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ShopCartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShopCartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSShopCartItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ShopCartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ShopCartItem::removeItem(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShopCartItem::sumMoneyChanged(const double & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
