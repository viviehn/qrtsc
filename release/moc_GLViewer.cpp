/****************************************************************************
** Meta object code from reading C++ file 'GLViewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qviewer/src/GLViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GLViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   30,   35,   35, 0x0a,
      36,   60,   35,   35, 0x0a,
      69,  111,   35,   35, 0x0a,
     119,  149,   35,   35, 0x0a,
     155,  149,   35,   35, 0x0a,
     184,  149,   35,   35, 0x0a,
     216,  149,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GLViewer[] = {
    "GLViewer\0setRandomCamera(int)\0seed\0\0"
    "saveScreenshot(QString)\0filename\0"
    "on_actionCamera_Perspective_toggled(bool)\0"
    "checked\0mousePressEvent(QMouseEvent*)\0"
    "event\0mouseMoveEvent(QMouseEvent*)\0"
    "mouseReleaseEvent(QMouseEvent*)\0"
    "keyPressEvent(QKeyEvent*)\0"
};

void GLViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GLViewer *_t = static_cast<GLViewer *>(_o);
        switch (_id) {
        case 0: _t->setRandomCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->saveScreenshot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_actionCamera_Perspective_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GLViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GLViewer::staticMetaObject = {
    { &QGLViewer::staticMetaObject, qt_meta_stringdata_GLViewer,
      qt_meta_data_GLViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLViewer))
        return static_cast<void*>(const_cast< GLViewer*>(this));
    return QGLViewer::qt_metacast(_clname);
}

int GLViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLViewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
