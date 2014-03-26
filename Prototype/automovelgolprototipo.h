#ifndef AUTOMOVELGOLPROTOTIPO_H
#define AUTOMOVELGOLPROTOTIPO_H

#include "automovelgol.h"

using Entidades::AutomovelGol;

namespace Prototype
{
    class AutomovelGolPrototipo;
}

class Prototype::AutomovelGolPrototipo
{
public:
    //Construtores e destrutores
    explicit AutomovelGolPrototipo(AutomovelGol *gol);
    virtual ~AutomovelGolPrototipo();

    //Métodos acessadores
    AutomovelGol *clone() const;
    AutomovelGol *gol() const;
    void setGol(AutomovelGol *gol);

private:
    AutomovelGol *m_gol;
};

#endif // AUTOMOVELGOLPROTOTIPO_H
