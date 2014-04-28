#include "automovelpegeout.h"

using namespace Entidades;

AutomovelPegeout::AutomovelPegeout(Motor *motor, Pneu *pneus[]) : Automovel(motor, pneus)
{}

AutomovelPegeout::AutomovelPegeout(Motor *motor, PneuFactory function) : Automovel(motor, function)
{}

AutomovelPegeout::AutomovelPegeout(MotorFactory mfunction, Pneu *pneus[]) : Automovel(mfunction, pneus)
{}

AutomovelPegeout::AutomovelPegeout(MotorFactory mfunction, PneuFactory function): Automovel(mfunction, function)
{}

AutomovelPegeout::AutomovelPegeout(const Entidades::AutomovelPegeout &automovel) : Automovel(automovel)
{}

AutomovelPegeout::~AutomovelPegeout()
{}

string AutomovelPegeout::entrar() const
{
    return Automovel::entrar();
}

string AutomovelPegeout::ligar() const
{
    return Automovel::ligar();
}

string AutomovelPegeout::furarPneu(int indice)
{
    return Automovel::furarPneu(indice);
}

Entidades::Automovel *AutomovelPegeout::clone() const
{
    return new AutomovelPegeout(*this);
}

