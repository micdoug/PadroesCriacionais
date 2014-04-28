#ifndef PNEUBORRACHASINTETICA_H
#define PNEUBORRACHASINTETICA_H

#include "pneu.h"

namespace Entidades
{
    class PneuBorrachaSintetica;
}

class Entidades::PneuBorrachaSintetica : public Entidades::Pneu
{
public:
    explicit PneuBorrachaSintetica(bool furado = false);
    explicit PneuBorrachaSintetica(const Pneu &pneu);
    virtual ~PneuBorrachaSintetica();

    // Entidades::Pneu interface
    virtual std::string furar() override;
    virtual std::string consertar() override;
    virtual Pneu *clone() const override;
};

#endif // PNEUBORRACHASINTETICA_H
