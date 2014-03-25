#ifndef MONTADORAVOLKSWAGEN_H
#define MONTADORAVOLKSWAGEN_H

#include "montadora.h"

namespace AbstractFactory
{
    class MontadoraVolkswagen;
}

class AbstractFactory::MontadoraVolkswagen : public AbstractFactory::Montadora
{
public:
    explicit MontadoraVolkswagen();
    virtual ~MontadoraVolkswagen();

    //Métodos específicos reimplementados
    virtual Automovel *createAutomovel() const override;
    virtual Pneu *createPneu() const override;
    virtual Motor *createMotor() const override;

private:
    Motor* (*m_motorFunction) ();
    Pneu* (*m_pneuFunction) ();
};

#endif // MONTADORAVOLKSWAGEN_H
