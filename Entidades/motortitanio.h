#ifndef MOTORTITANIO_H
#define MOTORTITANIO_H

#include "motor.h"

namespace Entidades
{
    class MotorTitanio;
}

class Entidades::MotorTitanio : public Entidades::Motor
{
public:
    explicit MotorTitanio(const Cilindrada &cilindrada);
    virtual ~MotorTitanio();

    virtual string descricao() const override;
};

#endif // MOTORTITANIO_H
