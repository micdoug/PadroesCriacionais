#ifndef MONTADORA_H
#define MONTADORA_H

#include "automovel.h"
#include "motor.h"
#include "pneu.h"

using Entidades::Automovel;
using Entidades::Motor;
using Entidades::Pneu;

namespace AbstractFactory
{
    class Montadora;
}

class AbstractFactory::Montadora
{
public:
    explicit Montadora();
    virtual ~Montadora();

    //Métodos específicos abstratos
    virtual Automovel* createAutomovel() const = 0;
    virtual Pneu* createPneu() const = 0;
    virtual Motor* createMotor() const = 0;
};

#endif // MONTADORA_H
