#include <typeinfo>
#include <iostream>
#include <cxxabi.h>
#include "abstractfactory.h"
#include "automovel.h"
#include "teste.h"
#include "automovelgolprototipo.h"
#include "entidades.h"
#include "factorymethod.h"

using std::cout;
using std::endl;
using abi::__cxa_demangle;
using namespace AbstractFactory;
using namespace Entidades;
using namespace Prototype;
using namespace FactoryMethod;

int main(int argc, char *argv[])
{
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

    return 0;
}
