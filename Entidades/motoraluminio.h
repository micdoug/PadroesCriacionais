#ifndef MOTORALUMINIO_H
#define MOTORALUMINIO_H

#include "motor.h"

namespace Entidades
{
    class MotorAluminio;
}

class Entidades::MotorAluminio: public Entidades::Motor
{
public:
    explicit MotorAluminio(const Cilindrada &cilindrada);
    explicit MotorAluminio(const MotorAluminio &motor);
    virtual ~MotorAluminio();

    //Métodos específicos reimplementados
    virtual string descricao() const override;
    virtual Motor *clone() const override;
};

#endif // MOTORALUMINIO_H
