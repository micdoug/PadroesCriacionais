#ifndef PNEUFIRESTONE_H
#define PNEUFIRESTONE_H

#include "pneu.h"

namespace Entidades
{
    class PneuFirestone;
}

class Entidades::PneuFirestone : public Entidades::Pneu
{
public:
    //Construtores e destrutores
    explicit PneuFirestone(bool furado=false);
    explicit PneuFirestone(const PneuFirestone &pneu);
    virtual ~PneuFirestone();

    //Métodos específicos reimplementados
    virtual string furar() override;
    virtual string consertar() override;
    virtual Pneu *clone() const override;
};

#endif // PNEUFIRESTONE_H
