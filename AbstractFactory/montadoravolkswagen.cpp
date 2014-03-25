#include "montadoravolkswagen.h"

#include "motorap.h"
#include "pneugoodyear.h"
#include "automovelgol.h"

using namespace AbstractFactory;
using Entidades::MotorAP;
using Entidades::PneuGoodyear;
using Entidades::AutomovelGol;

MontadoraVolkswagen::MontadoraVolkswagen()
{
    //Expressões lambda nunca foram tão úteis
    m_motorFunction = [] (void) -> Motor* { return new MotorAP(); };
    m_pneuFunction = [] (void) -> Pneu* { return new PneuGoodyear(); };
}

Automovel *MontadoraVolkswagen::createAutomovel() const
{
    return new AutomovelGol(m_motorFunction, m_pneuFunction);
}

Pneu *MontadoraVolkswagen::createPneu() const
{
    return m_pneuFunction();
}

Motor *MontadoraVolkswagen::createMotor() const
{
    return m_motorFunction();
}
