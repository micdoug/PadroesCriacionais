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
    explicit AutomovelPalio(Motor *motor, Pneu *pneus[]);
    explicit AutomovelPalio(Motor *motor, Pneu* (*function)(void));
    explicit AutomovelPalio(Motor* (*mfunction)(void), Pneu *pneus[]);
    explicit AutomovelPalio(Motor* (*mfunction)(void), Pneu* (*function)(void));
    virtual ~AutomovelPalio();

    virtual string entrar() const override;
};

#endif // AUTOMOVELPALIO_H
