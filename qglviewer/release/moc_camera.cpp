/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../camera.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qglviewer__Camera[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   35,   39,   39, 0x0a,
      40,   67,   39,   39, 0x0a,
      69,   97,   39,   39, 0x0a,
     107,  129,   39,   39, 0x0a,
     139,  156,   39,   39, 0x2a,
     159,  181,   39,   39, 0x0a,
     191,  203,   39,   39, 0x0a,
     210,   39,   39,   39, 0x0a,
     228,  249,   39,   39, 0x0a,
     263,  287,   39,   39, 0x0a,
     295,  318,   39,   39, 0x0a,
     328,   39,   39,   39, 0x0a,
     342,  375,   39,   39, 0x0a,
     381,   39,   39,   39, 0x0a,
     405,  432,   39,   39, 0x0a,
     444,  458,   39,   39, 0x0a,
     463,  485,   39,   39, 0x0a,
     489,  521,   39,   39, 0x0a,
     526,   39,   39,   39, 0x0a,
     545,  567,   39,   39, 0x0a,
     574,  607,   39,   39, 0x0a,
     620,  647,   39,   39, 0x0a,
     652,  647,   39,   39, 0x0a,
     683,  705,   39,   39, 0x0a,
     712,  732,   39,   39, 0x0a,
     739,  375,  771,   39, 0x0a,
     776,  287,   39,   39, 0x0a,
     805,  832,   39,   39, 0x0a,
     836,  375,  771,   39, 0x0a,
     875,  914,   39,   39, 0x0a,
     918,  974,   39,   39, 0x0a,
     980, 1003,   39,   39, 0x0a,
    1005, 1003,   39,   39, 0x0a,
    1019, 1003,   39,   39, 0x0a,
    1035, 1003,   39,   39, 0x0a,
    1050,   39,   39,   39, 0x0a,
    1065, 1084,   39,   39, 0x0a,
    1090, 1111,   39,   39, 0x0a,
    1120, 1111,   39,   39, 0x0a,
    1155, 1185,   39,   39, 0x0a,
    1191, 1111,   39,   39, 0x0a,
    1215, 1247,   39,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qglviewer__Camera[] = {
    "qglviewer::Camera\0setPosition(Vec)\0"
    "pos\0\0setOrientation(Quaternion)\0q\0"
    "setOrientation(float,float)\0theta,phi\0"
    "setUpVector(Vec,bool)\0up,noMove\0"
    "setUpVector(Vec)\0up\0setViewDirection(Vec)\0"
    "direction\0lookAt(Vec)\0target\0"
    "showEntireScene()\0fitSphere(Vec,float)\0"
    "center,radius\0fitBoundingBox(Vec,Vec)\0"
    "min,max\0fitScreenRegion(QRect)\0rectangle\0"
    "centerScene()\0interpolateToZoomOnPixel(QPoint)\0"
    "pixel\0interpolateToFitScene()\0"
    "interpolateTo(Frame,float)\0fr,duration\0"
    "setType(Type)\0type\0setFieldOfView(float)\0"
    "fov\0setHorizontalFieldOfView(float)\0"
    "hfov\0setFOVToFitScene()\0setAspectRatio(float)\0"
    "aspect\0setScreenWidthAndHeight(int,int)\0"
    "width,height\0setZNearCoefficient(float)\0"
    "coef\0setZClippingCoefficient(float)\0"
    "setSceneRadius(float)\0radius\0"
    "setSceneCenter(Vec)\0center\0"
    "setSceneCenterFromPixel(QPoint)\0bool\0"
    "setSceneBoundingBox(Vec,Vec)\0"
    "setRevolveAroundPoint(Vec)\0rap\0"
    "setRevolveAroundPointFromPixel(QPoint)\0"
    "setFrame(ManipulatedCameraFrame*const)\0"
    "mcf\0setKeyFrameInterpolator(int,KeyFrameInterpolator*const)\0"
    "i,kfi\0addKeyFrameToPath(int)\0i\0"
    "playPath(int)\0deletePath(int)\0"
    "resetPath(int)\0drawAllPaths()\0"
    "setFlySpeed(float)\0speed\0setIODistance(float)\0"
    "distance\0setPhysicalDistanceToScreen(float)\0"
    "setPhysicalScreenWidth(float)\0width\0"
    "setFocusDistance(float)\0"
    "initFromDOMElement(QDomElement)\0element\0"
};

void qglviewer::Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Camera *_t = static_cast<Camera *>(_o);
        switch (_id) {
        case 0: _t->setPosition((*reinterpret_cast< const Vec(*)>(_a[1]))); break;
        case 1: _t->setOrientation((*reinterpret_cast< const Quaternion(*)>(_a[1]))); break;
        case 2: _t->setOrientation((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 3: _t->setUpVector((*reinterpret_cast< const Vec(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setUpVector((*reinterpret_cast< const Vec(*)>(_a[1]))); break;
        case 5: _t->setViewDirection((*reinterpret_cast< const Vec(*)>(_a[1]))); break;
        case 6: _t->lookAt((*reinterpret_cast< const Vec(*)>(_a[1]))); break;
        case 7: _t->showEntireScene(); break;
        case 8: _t->fitSphere((*reinterpret_cast< const Vec(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 9: _t->fitBoundingBox((*reinterpret_cast< const Vec(*)>(_a[1])),(*reinterpret_cast< const Vec(*)>(_a[2]))); break;
        case 10: _t->fitScreenRegion((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 11: _t->centerScene(); break;
        case 12: _t->interpolateToZoomOnPixel((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->interpolateToFitScene(); break;
        case 14: _t->interpolateTo((*reinterpret_cast< const Frame(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 15: _t->setType((*reinterpret_cast< Type(*)>(_a[1]))); break;
        case 16: _t->setFieldOfView((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 17: _t->setHorizontalFieldOfView((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->setFOVToFitScene(); break;
        case 19: _t->setAspectRatio((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->setScreenWidthAndHeight((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->setZNearCoefficient((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->setZClippingCoefficient((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: _t->setSceneRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->setSceneCenter((*reinterpret_cast< const Vec(*)>(_a[1]))); break;
        case 25: { bool _r = _t->setSceneCenterFromPixel((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: _t->setSceneBoundingBox((*reinterpret_cast< const Vec(*)>(_a[1])),(*reinterpret_cast< const Vec(*)>(_a[2]))); break;
        case 27: _t->setRevolveAroundPoint((*reinterpret_cast< const Vec(*)>(_a[1]))); break;
        case 28: { bool _r = _t->setRevolveAroundPointFromPixel((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->setFrame((*reinterpret_cast< ManipulatedCameraFrame*const(*)>(_a[1]))); break;
        case 30: _t->setKeyFrameInterpolator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< KeyFrameInterpolator*const(*)>(_a[2]))); break;
        case 31: _t->addKeyFrameToPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->playPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->deletePath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->resetPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->drawAllPaths(); break;
        case 36: _t->setFlySpeed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->setIODistance((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->setPhysicalDistanceToScreen((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setPhysicalScreenWidth((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->setFocusDistance((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 41: _t->initFromDOMElement((*reinterpret_cast< const QDomElement(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qglviewer::Camera::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qglviewer::Camera::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qglviewer__Camera,
      qt_meta_data_qglviewer__Camera, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qglviewer::Camera::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qglviewer::Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qglviewer::Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qglviewer__Camera))
        return static_cast<void*>(const_cast< Camera*>(this));
    return QObject::qt_metacast(_clname);
}

int qglviewer::Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
