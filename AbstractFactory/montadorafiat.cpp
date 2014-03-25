#include "montadorafiat.h"
#include "motorfire.h"
#include "pneumichelin.h"
#include "automovelpalio.h"

using Entidades::MotorFire;
using Entidades::PneuMichelin;
using Entidades::AutomovelPalio;

using namespace AbstractFactory;

MontadoraFiat::MontadoraFiat()
{
    //Expressões lambda nunca foram tão úteis
    m_motorFunction = [] (void) -> Motor* { return new MotorFire(); };
    m_pneuFunction = [] (void) -> Pneu* { return new PneuMichelin(); };
}

MontadoraFiat::~MontadoraFiat()
{}

Automovel *MontadoraFiat::createAutomovel() const
{
    return new AutomovelPalio(m_motorFunction, m_pneuFunction);
}

Pneu *MontadoraFiat::createPneu() const
{
    return m_pneuFunction();
}

Motor *MontadoraFiat::createMotor() const
{
    return m_motorFunction();
}
