#include "automovelgol.h"

using namespace Entidades;

AutomovelGol::AutomovelGol(Motor *motor, Pneu *pneus[]) : Automovel(motor, pneus)
{}

AutomovelGol::AutomovelGol(Motor *motor, Pneu *(*function)()) : Automovel(motor, function)
{}

AutomovelGol::AutomovelGol(Motor *(*mfunction)(), Pneu *pneus[]) : Automovel(mfunction, pneus)
{}

AutomovelGol::AutomovelGol(Motor *(*mfunction)(), Pneu *(*function)()) : Automovel(mfunction, function)
{}

AutomovelGol::~AutomovelGol()
{}

string AutomovelGol::entrar() const
{
    return "Brum!";
}
