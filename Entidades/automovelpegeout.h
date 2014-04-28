#ifndef AUTOMOVELPEGEOUT_H
#define AUTOMOVELPEGEOUT_H

#include "automovel.h"

namespace Entidades
{
    class AutomovelPegeout;
}

class Entidades::AutomovelPegeout : public Entidades::Automovel
{
public:
    explicit AutomovelPegeout(Motor *motor, Pneu *pneus[]);
    explicit AutomovelPegeout(Motor *motor, PneuFactory function);
    explicit AutomovelPegeout(MotorFactory mfunction, Pneu *pneus[]);
    explicit AutomovelPegeout(MotorFactory mfunction, PneuFactory function);
    explicit AutomovelPegeout(const AutomovelPegeout &automovel);
    virtual ~AutomovelPegeout();

    virtual string entrar() const override;
    virtual string ligar() const override;
    virtual string furarPneu(int indice) override;
    virtual Automovel *clone() const override;
};

#endif // AUTOMOVELPEGEOUT_H
