CONFIG += debug_and_release

CONFIG(release, debug|release) {
	DBGNAME = release
}
else {
	DBGNAME = debug
}
DESTDIR = $${DBGNAME}

TEMPLATE = app

DEFINES += DARWIN
DEFINES += HAVE_VA_COPY
#QMAKE_CXXFLAGS += -fopenmp
CONFIG += x86_64
CONFIG(debug, debug|release) {
    CONFIG -= app_bundle
}
LIBS += -framework CoreFoundation
QMAKE_CXXFLAGS += -Xpreprocessor -fopenmp
QMAKE_LFLAGS += -Xpreprocessor -fopenmp
QMAKE_INFO_PLIST = macosx/Info.plist

ICON.files = qviewer/macosx/bunny_icon.icns
ICON.path = Contents/Resources

SHADERS.files = qviewer/shaders
SHADERS.path = Contents/MacOS
QMAKE_BUNDLE_DATA += SHADERS ICON

QT += opengl xml script

TARGET = qviewer

INCLUDEPATH += trimesh2/include
INCLUDEPATH += libgq/include
DEPENDPATH += libgq/include

#Input
#libgq
HEADERS += libgq/include/GQ*.h
SOURCES += libgq/libsrc/GQ*.cc 
SOURCES += libgq/libsrc/GLee.c

# zlib
INCLUDEPATH += libgq/zlib
SOURCES += libgq/zlib/*.c
win32 {
	SOURCES += libgq/zlib/win32/*.c
}

# Matio
INCLUDEPATH += libgq/matio
SOURCES += libgq/matio/*.c

# demoutils
HEADERS += demoutils/include/*.h
INCLUDEPATH += demoutils/include
SOURCES += demoutils/libsrc/*.cc

# qviewer
HEADERS += qviewer/src/*.h
SOURCES += qviewer/src/*.cc

# trimesh2
HEADERS += trimesh2/include/*.h
SOURCES += trimesh2/libsrc/*.cc

# libqglviewer has to be compiled separately because of
# conflicts with the Vec type.
PRE_TARGETDEPS += qglviewer/$${DBGNAME}/libqglviewer.a
DEPENDPATH += qglviewer
INCLUDEPATH += qglviewer 
LIBS += -Lqglviewer/$${DBGNAME} -lqglviewer -lomp
DEFINES += QGLVIEWER_STATIC



