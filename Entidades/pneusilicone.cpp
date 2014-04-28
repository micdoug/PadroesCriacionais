#include "pneusilicone.h"

using namespace Entidades;

PneuSilicone::PneuSilicone(bool furado) : Pneu(furado)
{}

PneuSilicone::~PneuSilicone()
{}

string PneuSilicone::furar()
{
    return Pneu::furar();
}

string PneuSilicone::consertar()
{
    return Pneu::consertar();
}

Entidades::Pneu *PneuSilicone::clone() const
{
    return new PneuSilicone(*this);
}


