#ifndef METALURGICOFRANCES_H
#define METALURGICOFRANCES_H

#include "metalurgico.h"

namespace FactoryMethod
{
    class MetalurgicoFrances;
}

class FactoryMethod::MetalurgicoFrances : public FactoryMethod::Metalurgico
{
public:
    explicit MetalurgicoFrances();
    virtual ~MetalurgicoFrances();

    //Métodos específicos reimplementados
    virtual Motor *createMotor(const Cilindrada &cilindrada) const override;
    virtual Automovel *createAutomovel(Entidades::Motor *motor, Entidades::Pneu *pneus[]) const override;
    virtual Pneu *createPneu() const override;
};

#endif // METALURGICOFRANCES_H
