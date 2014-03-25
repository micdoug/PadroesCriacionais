#include "automovelka.h"

using namespace Entidades;


AutomovelKa::AutomovelKa(Motor *motor, Pneu *pneus[]) : Automovel(motor, pneus)
{}

AutomovelKa::AutomovelKa(Motor *motor, Pneu *(*function)()) : Automovel(motor, function)
{}

AutomovelKa::AutomovelKa(Motor *(*mfunction)(), Pneu *pneus[]) : Automovel(mfunction, pneus)
{}

AutomovelKa::AutomovelKa(Motor *(*mfunction)(), Pneu *(*function)()) : Automovel(mfunction, function)
{}

AutomovelKa::~AutomovelKa()
{}

string AutomovelKa::entrar() const
{
    return "Trem!";
}
