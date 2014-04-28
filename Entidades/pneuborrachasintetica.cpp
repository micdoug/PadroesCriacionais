#include "pneuborrachasintetica.h"

Entidades::PneuBorrachaSintetica::PneuBorrachaSintetica(bool furado): Pneu(furado)
{}

Entidades::PneuBorrachaSintetica::PneuBorrachaSintetica(const Entidades::Pneu &pneu) : Pneu(pneu)
{}

Entidades::PneuBorrachaSintetica::~PneuBorrachaSintetica()
{}

std::string Entidades::PneuBorrachaSintetica::furar()
{
    return Pneu::furar();
}

std::string Entidades::PneuBorrachaSintetica::consertar()
{
    return Pneu::consertar();
}

Entidades::Pneu *Entidades::PneuBorrachaSintetica::clone() const
{
    return new PneuBorrachaSintetica(*this);
}

