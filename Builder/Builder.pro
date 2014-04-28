TEMPLATE = lib
CONFIG += static
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -O3 \
                  -pedantic

unix:!macx: LIBS += -L$$OUT_PWD/../Entidades/ -lEntidades

INCLUDEPATH += $$PWD/../Entidades
DEPENDPATH += $$PWD/../Entidades

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../Entidades/libEntidades.a

HEADERS += \
    fabrica.h \
    builder.h

SOURCES += \
    fabrica.cpp

unix:!macx: LIBS += -L$$OUT_PWD/../FactoryMethod/ -lFactoryMethod

INCLUDEPATH += $$PWD/../FactoryMethod
DEPENDPATH += $$PWD/../FactoryMethod

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../FactoryMethod/libFactoryMethod.a
