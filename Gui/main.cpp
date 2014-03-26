#include <typeinfo>
#include <iostream>
#include <cxxabi.h>
#include "montadoraford.h"
#include "automovel.h"

using std::cout;
using std::endl;
using abi::__cxa_demangle;
using namespace AbstractFactory;
using namespace Entidades;

int main(int argc, char *argv[])
{
    Montadora *montadora = new MontadoraFord();
    Automovel *automovel = montadora->createAutomovel();

    cout << __cxa_demangle(typeid(*automovel).name(), nullptr, nullptr, nullptr) << endl;
    cout << automovel->entrar() << endl;
    cout << automovel->ligar() << endl;
    cout << automovel->furarPneu(0) << endl;


    delete montadora;
    delete automovel;

    return 0;
}
