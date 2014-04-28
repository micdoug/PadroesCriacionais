#ifndef METALURGICOBRASILEIRO_H
#define METALURGICOBRASILEIRO_H

#include "metalurgico.h"

namespace FactoryMethod
{
    class MetalurgicoBrasileiro;
}

class FactoryMethod::MetalurgicoBrasileiro : public FactoryMethod::Metalurgico
{
public:
    explicit MetalurgicoBrasileiro();
    virtual ~MetalurgicoBrasileiro();

    //Métodos específicos reimplementados
    virtual Motor *createMotor(const Cilindrada &cilindrada) const override;
    virtual Automovel *createAutomovel(Entidades::Motor *motor, Entidades::Pneu *pneus[]) const override;
    virtual Pneu *createPneu() const override;
};

#endif // METALURGICOBRASILEIRO_H
