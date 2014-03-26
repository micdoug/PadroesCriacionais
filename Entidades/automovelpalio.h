#ifndef AUTOMOVELPALIO_H
#define AUTOMOVELPALIO_H

#include "automovel.h"

namespace Entidades
{
    class AutomovelPalio;
}

class Entidades::AutomovelPalio : public Entidades::Automovel
{
public:
    //Construtores e destrutores
    explicit AutomovelPalio(Motor *motor, Pneu *pneus[]);
    explicit AutomovelPalio(Motor *motor, PneuFactory function);
    explicit AutomovelPalio(MotorFactory mfunction, Pneu *pneus[]);
    explicit AutomovelPalio(MotorFactory mfunction, PneuFactory function);
    explicit AutomovelPalio(const AutomovelPalio &automovel);
    virtual ~AutomovelPalio();

    //Métodos específicos reimplementados
    virtual string entrar() const override;
    virtual Automovel *clone() const override;
};

#endif // AUTOMOVELPALIO_H
