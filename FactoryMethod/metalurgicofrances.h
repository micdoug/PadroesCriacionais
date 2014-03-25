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
};

#endif // METALURGICOFRANCES_H
