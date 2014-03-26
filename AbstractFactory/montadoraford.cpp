#include "montadoraford.h"
#include "motorcht.h"
#include "pneufirestone.h"
#include "automovelka.h"

using namespace AbstractFactory;
using Entidades::MotorCHT;
using Entidades::PneuFirestone;
using Entidades::AutomovelKa;

/*!
 * \class AbstractFactory::MontadoraFord
 * Representa a montadora de automóveis Ford. Implementa a interface de montadora,
 * sendo assim criando uma fábrica concreta seguindo o padrão AbstractFactory.
 * \sa AbstractFactory::Montadora
 */

/*!
 * Construtor da classe.
 */
MontadoraFord::MontadoraFord()
{
    //Expressões lambda nunca foram tão úteis
    m_motorFunction = [] (void) -> Motor* { return new MotorCHT(); };
    m_pneuFunction = [] (void) -> Pneu* { return new PneuFirestone(); };

    /*************************************************************************/
   /*** Modifique as expressões lambda ao invés de modificar os métodos.  ***/
  /*************************************************************************/
}

/*!
 * Destrutor da classe.
 */
MontadoraFord::~MontadoraFord()
{}

/*!
 * Retorna um objeto concreto que implementa a interface de Entidades::Automovel.
 * Na atual implementação retorna um objeto da classe Entidades::AutomovelKa.
 * \return
 * Um novo objeto automóvel.
 */
Automovel *MontadoraFord::createAutomovel() const
{
    return new AutomovelKa(m_motorFunction, m_pneuFunction);
}

/*!
 * Retorna um objeto concreto que implementa a interface de Entidades::Pneu.
 * Na atual implementação retorna um objeto da classe Entidades::PneuFirestone.
 * \return
 * Um novo objeto pneu.
 */
Pneu *MontadoraFord::createPneu() const
{
    return m_pneuFunction();
}

/*!
 * Retorna um objeto concreto que implementa a interface de Entidades::Motor.
 * Na atual implementação retorna um objeto da classe Entidades::MotorCHT.
 * \return
 * Um novo objeto motor.
 */
Motor *MontadoraFord::createMotor() const
{
    return m_motorFunction();
}
