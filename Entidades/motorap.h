#ifndef MOTORAP_H
#define MOTORAP_H

#include "motor.h"

namespace Entidades
{
    class MotorAP;
}

class Entidades::MotorAP: public Entidades::Motor
{
public:
    //Construtores e destrutores
    explicit MotorAP(const Cilindrada &cilindrada = Entidades::ALTA);
    virtual ~MotorAP();

    //Métodos específicos reimplementados
    virtual string descricao() const override;
    virtual string ligar() const override;
};

#endif // MOTORAP_H
