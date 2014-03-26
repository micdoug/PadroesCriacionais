#ifndef PNEUMICHELIN_H
#define PNEUMICHELIN_H

#include "pneu.h"

namespace Entidades
{
    class PneuMichelin;
}

class Entidades::PneuMichelin : public Entidades::Pneu
{
public:
    //Construtores e destrutores
    explicit PneuMichelin(bool furado = false);
    explicit PneuMichelin(const PneuMichelin &pneu);
    virtual ~PneuMichelin();

    //Métodos específicos reimplementados
    virtual string furar() override;
    virtual string consertar() override;
    virtual Pneu *clone() const override;
};

#endif // PNEUMICHELIN_H
