#ifndef METALURGICO_H
#define METALURGICO_H

#include "motor.h"
#include "automovel.h"
#include "pneu.h"

using Entidades::Motor;
using Entidades::Cilindrada;
using Entidades::Pneu;
using Entidades::Automovel;

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
    virtual Automovel *createAutomovel(Motor *motor, Pneu *pneus[]) const = 0;
    virtual Pneu *createPneu() const = 0;
};

#endif // METALURGICO_H
