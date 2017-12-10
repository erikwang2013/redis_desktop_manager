/****************************************************************************
** Meta object code from reading C++ file 'qmlutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/app/qmlutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlUtils_t {
    QByteArrayData data[21];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlUtils_t qt_meta_stringdata_QmlUtils = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QmlUtils"
QT_MOC_LITERAL(1, 9, 14), // "isBinaryString"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "value"
QT_MOC_LITERAL(4, 31, 18), // "binaryStringLength"
QT_MOC_LITERAL(5, 50, 9), // "humanSize"
QT_MOC_LITERAL(6, 60, 4), // "size"
QT_MOC_LITERAL(7, 65, 13), // "valueToBinary"
QT_MOC_LITERAL(8, 79, 17), // "binaryListToValue"
QT_MOC_LITERAL(9, 97, 10), // "binaryList"
QT_MOC_LITERAL(10, 108, 9), // "printable"
QT_MOC_LITERAL(11, 118, 11), // "htmlEscaped"
QT_MOC_LITERAL(12, 130, 16), // "printableToValue"
QT_MOC_LITERAL(13, 147, 5), // "toUtf"
QT_MOC_LITERAL(14, 153, 14), // "getPathFromUrl"
QT_MOC_LITERAL(15, 168, 3), // "url"
QT_MOC_LITERAL(16, 172, 15), // "copyToClipboard"
QT_MOC_LITERAL(17, 188, 4), // "text"
QT_MOC_LITERAL(18, 193, 25), // "addNewValueToDynamicChart"
QT_MOC_LITERAL(19, 219, 20), // "QtCharts::QXYSeries*"
QT_MOC_LITERAL(20, 240, 6) // "series"

    },
    "QmlUtils\0isBinaryString\0\0value\0"
    "binaryStringLength\0humanSize\0size\0"
    "valueToBinary\0binaryListToValue\0"
    "binaryList\0printable\0htmlEscaped\0"
    "printableToValue\0toUtf\0getPathFromUrl\0"
    "url\0copyToClipboard\0text\0"
    "addNewValueToDynamicChart\0"
    "QtCharts::QXYSeries*\0series"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlUtils[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x02 /* Public */,
       4,    1,   77,    2, 0x02 /* Public */,
       5,    1,   80,    2, 0x02 /* Public */,
       7,    1,   83,    2, 0x02 /* Public */,
       8,    1,   86,    2, 0x02 /* Public */,
      10,    2,   89,    2, 0x02 /* Public */,
      10,    1,   94,    2, 0x22 /* Public | MethodCloned */,
      12,    1,   97,    2, 0x02 /* Public */,
      13,    1,  100,    2, 0x02 /* Public */,
      14,    1,  103,    2, 0x02 /* Public */,
      16,    1,  106,    2, 0x02 /* Public */,
      18,    2,  109,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVariant,    3,
    QMetaType::Long, QMetaType::QVariant,    3,
    QMetaType::QString, QMetaType::Long,    6,
    QMetaType::QVariant, QMetaType::QVariant,    3,
    QMetaType::QVariant, QMetaType::QVariantList,    9,
    QMetaType::QVariant, QMetaType::QVariant, QMetaType::Bool,    3,   11,
    QMetaType::QVariant, QMetaType::QVariant,    3,
    QMetaType::QVariant, QMetaType::QVariant,   10,
    QMetaType::QVariant, QMetaType::QVariant,    3,
    QMetaType::QString, QMetaType::QUrl,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Double,   20,    3,

       0        // eod
};

void QmlUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlUtils *_t = static_cast<QmlUtils *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->isBinaryString((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { long _r = _t->binaryStringLength((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->humanSize((*reinterpret_cast< long(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QVariant _r = _t->valueToBinary((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 4: { QVariant _r = _t->binaryListToValue((*reinterpret_cast< const QVariantList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 5: { QVariant _r = _t->printable((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->printable((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->printableToValue((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->toUtf((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->getPathFromUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->copyToClipboard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->addNewValueToDynamicChart((*reinterpret_cast< QtCharts::QXYSeries*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtCharts::QXYSeries* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QmlUtils::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlUtils.data,
      qt_meta_data_QmlUtils,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlUtils.stringdata0))
        return static_cast<void*>(const_cast< QmlUtils*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
