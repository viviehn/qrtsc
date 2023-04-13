CONFIG += debug_and_release

CONFIG(release, debug|release) {
	DBGNAME = release
}
else {
	DBGNAME = debug
}
DESTDIR = $${DBGNAME}

win32 {
	TEMPLATE = vclib
}
else {
	TEMPLATE = lib

#    QMAKE_CXXFLAGS += -fopenmp
	macx {
		DEFINES += DARWIN
	}
	else {
		DEFINES += LINUX
	}
}

QMAKE_CXXFLAGS += -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk

CONFIG += staticlib
QT += opengl xml script

TARGET = demoutils

DEPENDPATH += include
INCLUDEPATH += include

#Input
HEADERS += include/*.h
SOURCES += libsrc/*.cc

# Trimesh2
INCLUDEPATH += ../trimesh2/include

INCLUDEPATH += /usr/local/Cellar/qt@4/4.8.7_6/lib/QtCore.framework/Versions/4/Headers/
