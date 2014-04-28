#include "pneuborrachanatural.h"

using namespace Entidades;


PneuBorrachaNatural::PneuBorrachaNatural(bool furado): Pneu(furado)
{}

PneuBorrachaNatural::PneuBorrachaNatural(const Entidades::Pneu &pneu) : Pneu(pneu)
{}

PneuBorrachaNatural::~PneuBorrachaNatural()
{}

string PneuBorrachaNatural::furar()
{
    return Pneu::furar();
}

string PneuBorrachaNatural::consertar()
{
    return Pneu::consertar();
}

Entidades::Pneu *PneuBorrachaNatural::clone() const
{
    return new PneuBorrachaNatural(*this);
}




