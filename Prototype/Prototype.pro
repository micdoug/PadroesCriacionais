TEMPLATE = lib
CONFIG += static
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -O3 \
                  -pedantic

#Incluindo projeto Entidades
unix:!macx: LIBS += -L$$OUT_PWD/../Entidades/ -lEntidades
INCLUDEPATH += $$PWD/../Entidades
DEPENDPATH += $$PWD/../Entidades
unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../Entidades/libEntidades.a

#Incluindo projeto AbstractFactory
unix:!macx: LIBS += -L$$OUT_PWD/../AbstractFactory/ -lAbstractFactory
INCLUDEPATH += $$PWD/../AbstractFactory
DEPENDPATH += $$PWD/../AbstractFactory
unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../AbstractFactory/libAbstractFactory.a

HEADERS += \
    automovelgolprototipo.h \
    prototype.h

SOURCES += \
    automovelgolprototipo.cpp
