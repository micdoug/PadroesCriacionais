#ifndef MOTORFIRE_H
#define MOTORFIRE_H

#include "motor.h"

namespace Entidades
{
    class MotorFire;
}

class Entidades::MotorFire : public Entidades::Motor
{
public:
    explicit MotorFire(const Cilindrada &cilindrada = Entidades::ALTA);
    explicit MotorFire(const MotorFire &motor);
    virtual ~MotorFire();

    //Métodos específicos reimplementados
    virtual string descricao() const override;
    virtual string ligar() const override;
    virtual Motor *clone() const override;
};

#endif // MOTORFIRE_H
