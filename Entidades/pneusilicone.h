#ifndef PNEUSILICONE_H
#define PNEUSILICONE_H

#include "pneu.h"

namespace Entidades
{
    class PneuSilicone;
}

class Entidades::PneuSilicone : public Entidades::Pneu
{
public:
    explicit PneuSilicone(bool furado = false);
    virtual ~PneuSilicone();

public:
    virtual string furar() override;
    virtual string consertar() override;
    virtual Pneu *clone() const override;
};

#endif // PNEUSILICONE_H
