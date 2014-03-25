#include "montadoraford.h"
#include "motorcht.h"
#include "pneufirestone.h"
#include "automovelka.h"

using namespace AbstractFactory;
using Entidades::MotorCHT;
using Entidades::PneuFirestone;
using Entidades::AutomovelKa;

MontadoraFord::MontadoraFord()
{
    //Expressões lambda nunca foram tão úteis
    m_motorFunction = [] (void) -> Motor* { return new MotorCHT(); };
    m_pneuFunction = [] (void) -> Pneu* { return new PneuFirestone(); };
}

MontadoraFord::~MontadoraFord()
{}

Automovel *MontadoraFord::createAutomovel() const
{
    return new AutomovelKa(m_motorFunction, m_pneuFunction);
}

Pneu *MontadoraFord::createPneu() const
{
    return m_pneuFunction();
}

Motor *MontadoraFord::createMotor() const
{
    return m_motorFunction();
}
