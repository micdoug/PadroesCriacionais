#include <typeinfo>
#include <iostream>
#include "montadoraford.h"
#include "automovel.h"

using std::cout;
using std::endl;
using namespace AbstractFactory;
using namespace Entidades;

int main(int argc, char *argv[])
{
    Montadora *montadora = new MontadoraFord();
    Automovel *automovel = montadora->createAutomovel();

    cout << typeid(*automovel).name() << endl;
    cout << automovel->entrar() << endl;
    cout << automovel->getPneu(0)->furar() << endl;

    delete montadora;
    delete automovel;

    return 0;
}
