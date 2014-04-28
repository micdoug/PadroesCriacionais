#ifndef AUTOMOVELBMW_H
#define AUTOMOVELBMW_H

#include "automovel.h"

namespace Entidades
{
    class AutomovelBMW;
}

class Entidades::AutomovelBMW : public Entidades::Automovel
{
public:
    explicit AutomovelBMW(Motor *motor, Pneu *pneus[]);
    explicit AutomovelBMW(Motor *motor, PneuFactory function);
    explicit AutomovelBMW(MotorFactory mfunction, Pneu *pneus[]);
    explicit AutomovelBMW(MotorFactory mfunction, PneuFactory function);
    explicit AutomovelBMW(const AutomovelBMW &automovel);
    virtual ~AutomovelBMW();

    // Entidades::Automovel interface
public:
    virtual string entrar() const override;
    virtual string ligar() const override;
    virtual string furarPneu(int indice) override;
    virtual Automovel *clone() const override;
};

#endif // AUTOMOVELBMW_H
