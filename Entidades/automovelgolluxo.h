#ifndef AUTOMOVELGOLLUXO_H
#define AUTOMOVELGOLLUXO_H

#include "automovelgol.h"

namespace Entidades
{
    class AutomovelGolLuxo;
}

class Entidades::AutomovelGolLuxo : public AutomovelGol
{
public:
    explicit AutomovelGolLuxo();
    explicit AutomovelGolLuxo(const AutomovelGolLuxo &automovel);
    virtual ~AutomovelGolLuxo();

    virtual Automovel *clone() const override;
};

#endif // AUTOMOVELGOLLUXO_H
