#ifndef MOTORCHT_H
#define MOTORCHT_H

#include "motor.h"

namespace Entidades
{
    class MotorCHT;
}

class Entidades::MotorCHT : public Entidades::Motor
{
public:
    explicit MotorCHT(const Cilindrada &cilindrada = Entidades::ALTA);
    explicit MotorCHT(const MotorCHT &motor);
    virtual ~MotorCHT();

    //Métodos específicos reimplementados
    virtual string descricao() const override;
    virtual string ligar() const override;
    virtual Motor *clone() const override;
};

#endif // MOTORCHT_H
