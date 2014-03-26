#ifndef AUTOMOVELGOL_H
#define AUTOMOVELGOL_H

#include "automovel.h"

namespace Entidades
{
    class AutomovelGol;
}

class Entidades::AutomovelGol : public Entidades::Automovel
{
public:
    //Construtores e destrutores
    explicit AutomovelGol(Motor *motor, Pneu *pneus[]);
    explicit AutomovelGol(Motor *motor, PneuFactory function);
    explicit AutomovelGol(MotorFactory mfunction, Pneu *pneus[]);
    explicit AutomovelGol(MotorFactory mfunction, PneuFactory function);
    virtual ~AutomovelGol();

    //Métodos específicos reimplementados
    virtual string entrar() const override;
};

#endif // AUTOMOVELGOL_H
