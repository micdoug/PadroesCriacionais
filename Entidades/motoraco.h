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
    explicit MotorAco(const MotorAco &motor);
    virtual ~MotorAco();

    //Métodos específicos reimplementados
    virtual string descricao() const override;
    virtual Motor *clone() const override;
};

#endif // MOTORACO_H
