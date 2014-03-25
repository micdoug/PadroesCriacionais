#ifndef MONTADORAFIAT_H
#define MONTADORAFIAT_H

#include "montadora.h"

namespace AbstractFactory
{
    class MontadoraFiat;
}

class AbstractFactory::MontadoraFiat : public AbstractFactory::Montadora
{
public:
    explicit MontadoraFiat();
    virtual ~MontadoraFiat();

    //Métodos específicos reimplementados
    virtual Automovel *createAutomovel() const override;
    virtual Pneu *createPneu() const override;
    virtual Motor *createMotor() const override;

private:
    Motor* (*m_motorFunction) ();
    Pneu* (*m_pneuFunction) ();
};

#endif // MONTADORAFIAT_H
