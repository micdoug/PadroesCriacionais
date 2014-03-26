#ifndef MOTORFLEX_H
#define MOTORFLEX_H

#include "motor.h"

namespace Entidades
{
    class MotorFlex;
}

class Entidades::MotorFlex : public Entidades::Motor
{
public:
    //Construtores e destrutores
    explicit MotorFlex(const Cilindrada &cilindrada = Cilindrada::ALTA);
    explicit MotorFlex(const MotorFlex &motor);
    virtual ~MotorFlex();

    //Métodos específicos reimplementados
    virtual string descricao() const override;
    virtual Motor *clone() const override;
};

#endif // MOTORFLEX_H
