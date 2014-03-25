#include "motor.h"
#include "motoraco.h"
#include "metalurgicobrasileiro.h"
#include "metalurgicoalemao.h"
#include "motorfire.h"
#include "motorcht.h"
#include "motorap.h"
#include "metalurgicofrances.h"
#include "pneugoodyear.h"
#include "pneufirestone.h"
#include "pneumichelin.h"
#include "automovel.h"
#include <typeinfo>
#include <iostream>

using namespace Entidades;
using namespace FactoryMethod;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
//    QGuiApplication app(argc, argv);

//    QtQuick2ApplicationViewer viewer;
//    viewer.setMainQmlFile(QStringLiteral("qml/Gui/main.qml"));
//    viewer.showExpanded();

//    return app.exec();

    auto motorFactory = [] (void) -> Motor* { return new MotorAP(); };
    auto pneuFactory = [] (void) -> Pneu* { return new PneuGoodyear(); };

    Pneu *pneus[4];

    for(int i=0; i<4; ++i)
    {
        pneus[i] = new PneuFirestone();
    }

    Automovel *automovel = new Automovel(motorFactory, pneuFactory);

    cout << typeid(*(automovel->getPneu(0))).name() << endl;
    cout << typeid(*(automovel->motor())).name() << endl;

    delete automovel;

    return 0;
}
