#ifndef METALURGICO_H
#define METALURGICO_H

#include "motor.h"

using Entidades::Motor;
using Entidades::Cilindrada;

namespace FactoryMethod
{
    class Metalurgico;
}

class FactoryMethod::Metalurgico
{
public:
    explicit Metalurgico();
    virtual ~Metalurgico();
    virtual Motor *createMotor(const Cilindrada &cilindrada) const = 0;
};

#endif // METALURGICO_H
