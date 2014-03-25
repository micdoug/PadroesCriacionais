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
    explicit AutomovelGol(Motor *motor, Pneu *pneus[]);
    explicit AutomovelGol(Motor *motor, Pneu* (*function)(void));
    explicit AutomovelGol(Motor* (*mfunction)(void), Pneu *pneus[]);
    explicit AutomovelGol(Motor* (*mfunction)(void), Pneu* (*function)(void));
    virtual ~AutomovelGol();

    virtual string entrar() const override;
};

#endif // AUTOMOVELGOL_H
