#ifndef AUTOMOVELGOLDUAL_H
#define AUTOMOVELGOLDUAL_H

#include "automovelgol.h"

namespace Entidades
{
    class AutomovelGolDual;
}

class Entidades::AutomovelGolDual : public Entidades::AutomovelGol
{
public:
    explicit AutomovelGolDual();
    explicit AutomovelGolDual(const AutomovelGolDual &automovel);
    virtual ~AutomovelGolDual();

    virtual Automovel *clone() const override;
};

#endif // AUTOMOVELGOLDUAL_H
