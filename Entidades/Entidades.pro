TEMPLATE = lib
CONFIG += static
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -O3 \
                  -pedantic

SOURCES += \
    motor.cpp \
    motoraluminio.cpp \
    motoraco.cpp \
    motortitanio.cpp \
    motorap.cpp \
    motorcht.cpp \
    motorfire.cpp \
    pneu.cpp \
    pneugoodyear.cpp \
    pneufirestone.cpp \
    pneumichelin.cpp \
    automovel.cpp \
    automovelgol.cpp \
    automovelka.cpp \
    automovelpalio.cpp \
    automovelgolstandard.cpp \
    automovelgoldual.cpp \
    motorflex.cpp \
    automovelgolluxo.cpp \
    automovelbmw.cpp \
    pneusilicone.cpp \
    pneuborrachanatural.cpp \
    pneuborrachasintetica.cpp \
    automovelpegeout.cpp

HEADERS += \
    motor.h \
    cilindrada.h \
    motoraluminio.h \
    motoraco.h \
    motortitanio.h \
    motorap.h \
    motorcht.h \
    motorfire.h \
    pneu.h \
    pneugoodyear.h \
    pneufirestone.h \
    pneumichelin.h \
    entidades.h \
    automovel.h \
    automovelgol.h \
    automovelka.h \
    automovelpalio.h \
    automovelgolstandard.h \
    automovelgoldual.h \
    motorflex.h \
    automovelgolluxo.h \
    automovelbmw.h \
    pneusilicone.h \
    pneuborrachanatural.h \
    pneuborrachasintetica.h \
    automovelpegeout.h
