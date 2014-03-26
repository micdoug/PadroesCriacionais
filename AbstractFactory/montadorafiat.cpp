#include "montadorafiat.h"
#include "motorfire.h"
#include "pneumichelin.h"
#include "automovelpalio.h"

using Entidades::MotorFire;
using Entidades::PneuMichelin;
using Entidades::AutomovelPalio;

using namespace AbstractFactory;

/*!
 * \class AbstractFactory::MontadoraFiat
 * Representa a montadora de automóveis FIAT. Implementa a interface de montadora,
 * sendo assim criando uma fábrica concreta seguindo o padrão AbstractFactory.
 * \sa AbstractFactory::Montadora
 */

/*!
 * Construtor da classe.
 */
MontadoraFiat::MontadoraFiat()
{
    //Expressões lambda nunca foram tão úteis
    m_motorFunction = [] (void) -> Motor* { return new MotorFire(); };
    m_pneuFunction = [] (void) -> Pneu* { return new PneuMichelin(); };

      /*************************************************************************/
     /*** Modifique as expressões lambda ao invés de modificar os métodos.  ***/
    /*************************************************************************/
}

/*!
 * Destrutor da classe.
 */
MontadoraFiat::~MontadoraFiat()
{}

/*!
 * Retorna um objeto concreto que implementa a interface de Entidades::Automovel.
 * Na atual implementação retorna um objeto da classe Entidades::AutomovelPalio.
 * \return
 * Um novo objeto automóvel.
 */
Automovel *MontadoraFiat::createAutomovel() const
{
    return new AutomovelPalio(m_motorFunction, m_pneuFunction);
}

/*!
 * Retorna um objeto concreto que implementa a interface de Entidades::Pneu.
 * Na atual implementação retorna um objeto da classe Entidades::PneuMichelin.
 * \return
 * Um novo objeto pneu.
 */
Pneu *MontadoraFiat::createPneu() const
{
    return m_pneuFunction();
}

/*!
 * Retorna um objeto concreto que implementa a interface de Entidades::Motor.
 * Na atual implementação retorna um objeto da classe Entidades::MotorFire.
 * \return
 * Um novo objeto motor.
 */
Motor *MontadoraFiat::createMotor() const
{
    return m_motorFunction();
}
