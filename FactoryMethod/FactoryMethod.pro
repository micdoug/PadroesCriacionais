TEMPLATE = lib
CONFIG += console
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += static

SOURCES += \
    metalurgico.cpp \
    metalurgicobrasileiro.cpp \
    metalurgicoalemao.cpp \
    metalurgicofrances.cpp

HEADERS += \
    metalurgico.h \
    metalurgicobrasileiro.h \
    metalurgicoalemao.h \
    metalurgicofrances.h


unix:!macx: LIBS += -L$$OUT_PWD/../Entidades/ -lEntidades

INCLUDEPATH += $$PWD/../Entidades
DEPENDPATH += $$PWD/../Entidades

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../Entidades/libEntidades.a
