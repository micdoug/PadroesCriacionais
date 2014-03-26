#ifndef AUTOMOVELKA_H
#define AUTOMOVELKA_H

#include "automovel.h"

namespace Entidades
{
    class AutomovelKa;
}

class Entidades::AutomovelKa : public Entidades::Automovel
{
public:
    explicit AutomovelKa(Motor *motor, Pneu *pneus[]);
    explicit AutomovelKa(Motor *motor, PneuFactory function);
    explicit AutomovelKa(MotorFactory mfunction, Pneu *pneus[]);
    explicit AutomovelKa(MotorFactory mfunction, PneuFactory function);
    virtual ~AutomovelKa();

    virtual string entrar() const override;
};

#endif // AUTOMOVELKA_H
