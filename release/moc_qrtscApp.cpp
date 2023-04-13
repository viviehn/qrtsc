/****************************************************************************
** Meta object code from reading C++ file 'qrtscApp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qviewer/src/qrtscApp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrtscApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qrtscApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   24,   30,   35, 0x0a,
      36,   60,   35,   35, 0x0a,
      67,   95,   30,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qrtscApp[] = {
    "qrtscApp\0event(QEvent*)\0event\0bool\0\0"
    "printUsage(const char*)\0myname\0"
    "findShadersDirectory(QDir&)\0shaders_dir\0"
};

void qrtscApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qrtscApp *_t = static_cast<qrtscApp *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->event((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->printUsage((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->findShadersDirectory((*reinterpret_cast< QDir(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qrtscApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qrtscApp::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_qrtscApp,
      qt_meta_data_qrtscApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qrtscApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qrtscApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qrtscApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qrtscApp))
        return static_cast<void*>(const_cast< qrtscApp*>(this));
    return QApplication::qt_metacast(_clname);
}

int qrtscApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
