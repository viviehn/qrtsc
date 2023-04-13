/****************************************************************************
** Meta object code from reading C++ file 'manipulatedFrame.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../manipulatedFrame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manipulatedFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qglviewer__ManipulatedFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   42,   42,   42, 0x05,
      43,   42,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   80,   42,   42, 0x0a,
      92,   80,   42,   42, 0x0a,
     125,   80,   42,   42, 0x0a,
     155,   80,   42,   42, 0x0a,
     182,  216,   42,   42, 0x0a,
     235,  254,   42,   42, 0x0a,
     269,   42,   42,   42, 0x0a,
     284,   42,   42,   42, 0x09,
     291,   42,   42,   42, 0x08,
     304,  336,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qglviewer__ManipulatedFrame[] = {
    "qglviewer::ManipulatedFrame\0manipulated()\0"
    "\0spun()\0setRotationSensitivity(float)\0"
    "sensitivity\0setTranslationSensitivity(float)\0"
    "setSpinningSensitivity(float)\0"
    "setWheelSensitivity(float)\0"
    "setSpinningQuaternion(Quaternion)\0"
    "spinningQuaternion\0startSpinning(int)\0"
    "updateInterval\0stopSpinning()\0spin()\0"
    "spinUpdate()\0initFromDOMElement(QDomElement)\0"
    "element\0"
};

void qglviewer::ManipulatedFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ManipulatedFrame *_t = static_cast<ManipulatedFrame *>(_o);
        switch (_id) {
        case 0: _t->manipulated(); break;
        case 1: _t->spun(); break;
        case 2: _t->setRotationSensitivity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setTranslationSensitivity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setSpinningSensitivity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setWheelSensitivity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setSpinningQuaternion((*reinterpret_cast< const Quaternion(*)>(_a[1]))); break;
        case 7: _t->startSpinning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->stopSpinning(); break;
        case 9: _t->spin(); break;
        case 10: _t->spinUpdate(); break;
        case 11: _t->initFromDOMElement((*reinterpret_cast< const QDomElement(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qglviewer::ManipulatedFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qglviewer::ManipulatedFrame::staticMetaObject = {
    { &Frame::staticMetaObject, qt_meta_stringdata_qglviewer__ManipulatedFrame,
      qt_meta_data_qglviewer__ManipulatedFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qglviewer::ManipulatedFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qglviewer::ManipulatedFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qglviewer::ManipulatedFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qglviewer__ManipulatedFrame))
        return static_cast<void*>(const_cast< ManipulatedFrame*>(this));
    if (!strcmp(_clname, "MouseGrabber"))
        return static_cast< MouseGrabber*>(const_cast< ManipulatedFrame*>(this));
    return Frame::qt_metacast(_clname);
}

int qglviewer::ManipulatedFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Frame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void qglviewer::ManipulatedFrame::manipulated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void qglviewer::ManipulatedFrame::spun()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
