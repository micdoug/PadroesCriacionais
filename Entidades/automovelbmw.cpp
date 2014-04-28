#include "automovelbmw.h"

using namespace Entidades;

AutomovelBMW::AutomovelBMW(Motor *motor, Pneu *pneus[]) : Automovel(motor, pneus)
{}

AutomovelBMW::AutomovelBMW(Motor *motor, PneuFactory function) : Automovel(motor, function)
{}

AutomovelBMW::AutomovelBMW(MotorFactory mfunction, Pneu *pneus[]) : Automovel(mfunction, pneus)
{}

AutomovelBMW::AutomovelBMW(MotorFactory mfunction, PneuFactory function) : Automovel(mfunction, function)
{}

AutomovelBMW::AutomovelBMW(const Entidades::AutomovelBMW &automovel) : Automovel(automovel)
{}

AutomovelBMW::~AutomovelBMW()
{}

string AutomovelBMW::entrar() const
{
    return Automovel::entrar();
}

string AutomovelBMW::ligar() const
{
    return Automovel::ligar();
}

string AutomovelBMW::furarPneu(int indice)
{
    return Automovel::furarPneu(indice);
}

Entidades::Automovel *AutomovelBMW::clone() const
{
    return new AutomovelBMW(*this);
}
