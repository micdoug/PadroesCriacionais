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
    Entidades::Motor *createMotor(const Entidades::Cilindrada &cilindrada) const;
};

#endif // METALURGICOFRANCES_H
