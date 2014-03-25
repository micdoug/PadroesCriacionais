#ifndef PNEUGOODYEAR_H
#define PNEUGOODYEAR_H

#include "pneu.h"

namespace Entidades
{
    class PneuGoodyear;
}

class Entidades::PneuGoodyear : public Entidades::Pneu
{
public:
    //Construtores e destrutores
    explicit PneuGoodyear(bool furado = false);
    virtual ~PneuGoodyear();

    //Métodos específicos reimplementados
    virtual string furar() override;
    virtual string consertar() override;
};

#endif // PNEUGOODYEAR_H
