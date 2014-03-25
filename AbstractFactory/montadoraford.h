#ifndef MONTADORAFORD_H
#define MONTADORAFORD_H

#include "montadora.h"

namespace AbstractFactory
{
    class MontadoraFord;
}

class AbstractFactory::MontadoraFord : public AbstractFactory::Montadora
{
public:
    explicit MontadoraFord();
    virtual ~MontadoraFord();

    virtual Automovel *createAutomovel() const override;
    virtual Pneu *createPneu() const override;
    virtual Motor *createMotor() const override;

private:
    Motor* (*m_motorFunction) ();
    Pneu* (*m_pneuFunction) ();
};

#endif // MONTADORAFORD_H
