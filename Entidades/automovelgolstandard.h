#ifndef AUTOMOVELGOLSTANDARD_H
#define AUTOMOVELGOLSTANDARD_H

#include "automovelgol.h"

namespace Entidades
{
    class AutomovelGolStandard;
}

class Entidades::AutomovelGolStandard : public Entidades::AutomovelGol
{
public:
    //Construtores e destrutores
    explicit AutomovelGolStandard();
    explicit AutomovelGolStandard(const AutomovelGolStandard &automovel);
    virtual ~AutomovelGolStandard();

    virtual Automovel *clone() const override;
};

#endif // AUTOMOVELGOLSTANDARD_H
