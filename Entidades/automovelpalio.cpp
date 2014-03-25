#include "automovelpalio.h"

using namespace Entidades;

AutomovelPalio::AutomovelPalio(Motor *motor, Pneu *pneus[]) : Automovel(motor, pneus)
{}

AutomovelPalio::AutomovelPalio(Motor *motor, Pneu *(*function)()) : Automovel(motor, function)
{}

AutomovelPalio::AutomovelPalio(Motor *(*mfunction)(), Pneu *pneus[]) : Automovel(mfunction, pneus)
{}

AutomovelPalio::AutomovelPalio(Motor *(*mfunction)(), Pneu *(*function)()) : Automovel(mfunction, function)
{}

AutomovelPalio::~AutomovelPalio()
{}

string AutomovelPalio::entrar() const
{
    return "Galooo!";
}
