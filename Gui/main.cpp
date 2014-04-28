#include "qtquick2applicationviewer.h"
#include <QGuiApplication>

#include <typeinfo>
#include <iostream>
#include <cxxabi.h>
#include "abstractfactory.h"
#include "automovel.h"
#include "automovelgolprototipo.h"
#include "entidades.h"
#include "factorymethod.h"
#include "builder.h"

using std::cout;
using std::endl;
using abi::__cxa_demangle;
using namespace AbstractFactory;
using namespace Entidades;
using namespace Prototype;
using namespace FactoryMethod;
using namespace Builder;

int main(int argc, char *argv[])
{
    /*QGuiApplication app(argc, argv);
    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile("qml/Gui/main.qml");
    viewer.showExpanded();
    return app.exec();*/
    Montadora *montadora = new MontadoraVolkswagen();
    Automovel *automovel = montadora->createAutomovel();

    cout << __cxa_demangle(typeid(*automovel).name(), nullptr, nullptr, nullptr) << endl;
    cout << automovel->entrar() << endl;
    cout << automovel->ligar() << endl;
    cout << automovel->furarPneu(0) << endl;


    delete montadora;
    delete automovel;
    AutomovelGolPrototipo *prototipo = new AutomovelGolPrototipo(new AutomovelGolDual());
    automovel = prototipo->clone();

    cout << __cxa_demangle(typeid(*automovel).name(), nullptr, nullptr, nullptr) << endl;


    delete prototipo;
    delete automovel;

    Metalurgico *metalurgico = new MetalurgicoFrances();
    Motor *motor = metalurgico->createMotor(Cilindrada::ALTA);

    cout << motor->descricao() << endl;

    delete metalurgico;
    delete motor;

    Fabrica *fabrica = new Fabrica(new MetalurgicoFrances());
    automovel = fabrica->createAutomovel();

    cout << __cxa_demangle(typeid(*fabrica).name(), nullptr, nullptr, nullptr) << endl;
    cout << __cxa_demangle(typeid(*automovel).name(), nullptr, nullptr, nullptr) << endl;
    cout << __cxa_demangle(typeid(*automovel->motor()).name(), nullptr, nullptr, nullptr) << endl;
    cout << __cxa_demangle(typeid(*automovel->getPneu(1)).name(), nullptr, nullptr, nullptr) << endl;

    delete fabrica;
    delete automovel;

    return 0;
}
