/****************************************************************************
** Meta object code from reading C++ file 'connectionconf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/app/models/connectionconf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionconf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ServerConfig_t {
    QByteArrayData data[25];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerConfig_t qt_meta_stringdata_ServerConfig = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ServerConfig"
QT_MOC_LITERAL(1, 13, 12), // "useSshTunnel"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "name"
QT_MOC_LITERAL(4, 32, 4), // "host"
QT_MOC_LITERAL(5, 37, 4), // "port"
QT_MOC_LITERAL(6, 42, 4), // "auth"
QT_MOC_LITERAL(7, 47, 10), // "sslEnabled"
QT_MOC_LITERAL(8, 58, 16), // "sslLocalCertPath"
QT_MOC_LITERAL(9, 75, 17), // "sslPrivateKeyPath"
QT_MOC_LITERAL(10, 93, 13), // "sslCaCertPath"
QT_MOC_LITERAL(11, 107, 11), // "sshPassword"
QT_MOC_LITERAL(12, 119, 7), // "sshUser"
QT_MOC_LITERAL(13, 127, 7), // "sshHost"
QT_MOC_LITERAL(14, 135, 7), // "sshPort"
QT_MOC_LITERAL(15, 143, 13), // "sshPrivateKey"
QT_MOC_LITERAL(16, 157, 11), // "keysPattern"
QT_MOC_LITERAL(17, 169, 18), // "namespaceSeparator"
QT_MOC_LITERAL(18, 188, 14), // "executeTimeout"
QT_MOC_LITERAL(19, 203, 17), // "connectionTimeout"
QT_MOC_LITERAL(20, 221, 24), // "defautNamespaceSeparator"
QT_MOC_LITERAL(21, 246, 21), // "defautKeysGlobPattern"
QT_MOC_LITERAL(22, 268, 10), // "defautPort"
QT_MOC_LITERAL(23, 279, 13), // "defautSshPort"
QT_MOC_LITERAL(24, 293, 17) // "defautTimeoutInMs"

    },
    "ServerConfig\0useSshTunnel\0\0name\0host\0"
    "port\0auth\0sslEnabled\0sslLocalCertPath\0"
    "sslPrivateKeyPath\0sslCaCertPath\0"
    "sshPassword\0sshUser\0sshHost\0sshPort\0"
    "sshPrivateKey\0keysPattern\0namespaceSeparator\0"
    "executeTimeout\0connectionTimeout\0"
    "defautNamespaceSeparator\0defautKeysGlobPattern\0"
    "defautPort\0defautSshPort\0defautTimeoutInMs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      22,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095103,
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::UInt, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::Bool, 0x00095003,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095103,
      14, QMetaType::UInt, 0x00095103,
      15, QMetaType::QString, 0x00095003,
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::QString, 0x00095103,
      18, QMetaType::UInt, 0x00095003,
      19, QMetaType::UInt, 0x00095103,
      20, QMetaType::QString, 0x00095401,
      21, QMetaType::QString, 0x00095401,
      22, QMetaType::UInt, 0x00095401,
      23, QMetaType::UInt, 0x00095401,
      24, QMetaType::UInt, 0x00095401,

       0        // eod
};

void ServerConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServerConfig *_t = reinterpret_cast<ServerConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->useSshTunnel();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ServerConfig *_t = reinterpret_cast<ServerConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->host(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->port(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->auth(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->useSsl(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->sslLocalCertPath(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->sslPrivateKeyPath(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->sslCaCertPath(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->sshPassword(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->sshUser(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->sshHost(); break;
        case 11: *reinterpret_cast< uint*>(_v) = _t->sshPort(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->getSshPrivateKeyPath(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->keysPattern(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->namespaceSeparator(); break;
        case 15: *reinterpret_cast< uint*>(_v) = _t->executeTimeout(); break;
        case 16: *reinterpret_cast< uint*>(_v) = _t->connectionTimeout(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->DEFAULT_NAMESPACE_SEPARATOR; break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->DEFAULT_KEYS_GLOB_PATTERN; break;
        case 19: *reinterpret_cast< uint*>(_v) = _t->DEFAULT_REDIS_PORT; break;
        case 20: *reinterpret_cast< uint*>(_v) = _t->DEFAULT_SSH_PORT; break;
        case 21: *reinterpret_cast< uint*>(_v) = _t->DEFAULT_TIMEOUT_IN_MS; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ServerConfig *_t = reinterpret_cast<ServerConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHost(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPort(*reinterpret_cast< uint*>(_v)); break;
        case 3: _t->setAuth(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setSsl(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setSslLocalCertPath(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setSslPrivateKeyPath(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setSslCaCertPath(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setSshPassword(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setSshUser(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setSshHost(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setSshPort(*reinterpret_cast< uint*>(_v)); break;
        case 12: _t->setSshPrivateKeyPath(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setKeysPattern(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setNamespaceSeparator(*reinterpret_cast< QString*>(_v)); break;
        case 15: _t->setExecutionTimeout(*reinterpret_cast< uint*>(_v)); break;
        case 16: _t->setConnectionTimeout(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ServerConfig::staticMetaObject = {
    { Q_NULLPTR, qt_meta_stringdata_ServerConfig.data,
      qt_meta_data_ServerConfig,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
