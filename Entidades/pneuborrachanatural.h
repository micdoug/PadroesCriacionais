#ifndef PNEUBORRACHA_H
#define PNEUBORRACHA_H

#include "pneu.h"

namespace Entidades
{
    class PneuBorrachaNatural;
}

class Entidades::PneuBorrachaNatural: public Entidades::Pneu
{
public:
    PneuBorrachaNatural(bool furado = false);
    PneuBorrachaNatural(const Pneu &pneu);
    virtual ~PneuBorrachaNatural();

    // Entidades::Pneu interface
public:
    virtual string furar();
    virtual string consertar();
    virtual Pneu *clone() const override;
};

#endif // PNEUBORRACHA_H
