TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

CONFIG -= debug_and_release

SOURCES += main.cpp \
    champion.cpp \
    fileManage.cpp \
    functions.cpp \
    player.cpp \
    team.cpp

QMAKE_CXXFLAGS += -pedantic
QMAKE_CXXFLAGS += -pedantic-errors

QMAKE_CXXFLAGS += -Wmissing-include-dirs
QMAKE_CXXFLAGS += -Wfloat-equal
QMAKE_CXXFLAGS += -Wredundant-decls
QMAKE_CXXFLAGS += -Winit-self
QMAKE_CXXFLAGS += -Wshadow
QMAKE_CXXFLAGS += -Wconversion

HEADERS += \
    champion.h \
    fileManage.h \
    functions.h \
    player.h \
    team.h

DISTFILES += \
    Champions.txt \
    ChampionsShort.txt \
    PlayerDatabase.txt

