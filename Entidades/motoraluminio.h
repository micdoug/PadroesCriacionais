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
    virtual ~MotorAluminio();

    //Métodos específicos reimplementados
    virtual string descricao() const override;
};

#endif // MOTORALUMINIO_H
