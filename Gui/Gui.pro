# Add more folders to ship with the application, here
#folder_01.source = qml/Gui
#folder_01.target = qml
#DEPLOYMENTFOLDERS = folder_01

CONFIG += c++11
CONFIG += console

# Additional import path used to resolve QML modules in Creator's code model
#QML_IMPORT_PATH =

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
#include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
#qtcAddDeployment()

unix:!macx: LIBS += -L$$OUT_PWD/../FactoryMethod/ -lFactoryMethod

INCLUDEPATH += $$PWD/../FactoryMethod
DEPENDPATH += $$PWD/../FactoryMethod

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../FactoryMethod/libFactoryMethod.a

unix:!macx: LIBS += -L$$OUT_PWD/../Entidades/ -lEntidades

INCLUDEPATH += $$PWD/../Entidades
DEPENDPATH += $$PWD/../Entidades

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../Entidades/libEntidades.a