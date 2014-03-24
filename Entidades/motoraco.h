#ifndef MOTORACO_H
#define MOTORACO_H

#include "motor.h"

namespace Entidades
{
    class MotorAco;
}

class Entidades::MotorAco : public Entidades::Motor
{
public:
    explicit MotorAco(const Cilindrada &cilindrada);
    virtual ~MotorAco();

    //Métodos específicos reimplementados
    virtual string descricao() const override;
};

#endif // MOTORACO_H
