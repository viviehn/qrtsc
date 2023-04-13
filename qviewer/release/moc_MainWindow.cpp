/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   43,   43,   43, 0x0a,
      44,   43,   43,   43, 0x0a,
      77,   43,   43,   43, 0x0a,
     112,   43,   43,   43, 0x0a,
     145,   43,   43,   43, 0x0a,
     181,  223,   43,   43, 0x0a,
     229,   43,   43,   43, 0x0a,
     266,   43,   43,   43, 0x0a,
     299,   43,   43,   43, 0x0a,
     338,   43,   43,   43, 0x0a,
     382,   43,   43,   43, 0x0a,
     418,  441,   43,   43, 0x0a,
     446,  465,  474,   43, 0x0a,
     479,  465,  474,   43, 0x0a,
     498,  465,  474,   43, 0x0a,
     522,  546,   43,   43, 0x0a,
     556,  546,   43,   43, 0x0a,
     577,  465,  474,   43, 0x0a,
     597,  465,  474,   43, 0x0a,
     624,  465,  474,   43, 0x0a,
     644,  465,  474,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0on_actionOpen_Scene_triggered()\0"
    "\0on_actionOpen_Camera_triggered()\0"
    "on_actionSave_Scene_As_triggered()\0"
    "on_actionSave_Camera_triggered()\0"
    "on_actionReload_Shaders_triggered()\0"
    "on_actionOpen_Recent_Scene_triggered(int)\0"
    "which\0on_actionSave_Screenshot_triggered()\0"
    "on_actionSmooth_Mesh_triggered()\0"
    "on_actionSmooth_Curvatures_triggered()\0"
    "on_actionSmooth_Curvature_Deriv_triggered()\0"
    "on_actionSmooth_Normals_triggered()\0"
    "fitViewerSize(QString)\0size\0"
    "openScene(QString)\0filename\0bool\0"
    "saveScene(QString)\0saveScreenshot(QString)\0"
    "filterNormals(int,bool)\0i,use_val\0"
    "smoothMesh(int,bool)\0saveCamera(QString)\0"
    "saveCameraProjMat(QString)\0"
    "openCamera(QString)\0saveBufferInfo(QString)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionOpen_Scene_triggered(); break;
        case 1: _t->on_actionOpen_Camera_triggered(); break;
        case 2: _t->on_actionSave_Scene_As_triggered(); break;
        case 3: _t->on_actionSave_Camera_triggered(); break;
        case 4: _t->on_actionReload_Shaders_triggered(); break;
        case 5: _t->on_actionOpen_Recent_Scene_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_actionSave_Screenshot_triggered(); break;
        case 7: _t->on_actionSmooth_Mesh_triggered(); break;
        case 8: _t->on_actionSmooth_Curvatures_triggered(); break;
        case 9: _t->on_actionSmooth_Curvature_Deriv_triggered(); break;
        case 10: _t->on_actionSmooth_Normals_triggered(); break;
        case 11: _t->fitViewerSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: { bool _r = _t->openScene((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->saveScene((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->saveScreenshot((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->filterNormals((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->smoothMesh((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: { bool _r = _t->saveCamera((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->saveCameraProjMat((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->openCamera((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->saveBufferInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
