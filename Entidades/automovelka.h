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
    explicit AutomovelKa(Motor *motor, Pneu* (*function)(void));
    explicit AutomovelKa(Motor* (*mfunction)(void), Pneu *pneus[]);
    explicit AutomovelKa(Motor* (*mfunction)(void), Pneu* (*function)(void));
    virtual ~AutomovelKa();

    virtual string entrar() const override;
};

#endif // AUTOMOVELKA_H
