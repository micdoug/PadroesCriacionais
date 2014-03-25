TEMPLATE = lib
CONFIG += static
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -O3 \
                  -pedantic

SOURCES += \
    montadora.cpp \
    montadoravolkswagen.cpp \
    montadoraford.cpp \
    montadorafiat.cpp


unix:!macx: LIBS += -L$$OUT_PWD/../Entidades/ -lEntidades

INCLUDEPATH += $$PWD/../Entidades
DEPENDPATH += $$PWD/../Entidades

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../Entidades/libEntidades.a

HEADERS += \
    montadora.h \
    montadoravolkswagen.h \
    montadoraford.h \
    montadorafiat.h
