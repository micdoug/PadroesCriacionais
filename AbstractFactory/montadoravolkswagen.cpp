#include "montadoravolkswagen.h"

#include "motorap.h"
#include "pneugoodyear.h"
#include "automovelgol.h"

using namespace AbstractFactory;
using Entidades::MotorAP;
using Entidades::PneuGoodyear;
using Entidades::AutomovelGol;

/*!
 * \class AbstractFactory::MontadoraVolkswagen
 * Representa a montadora de automóveis Volkswagen. Implementa a interface de montadora,
 * sendo assim criando uma fábrica concreta seguindo o padrão AbstractFactory.
 * \sa AbstractFactory::Montadora
 */

/*!
 * Construtor da classe.
 */
MontadoraVolkswagen::MontadoraVolkswagen()
{
    //Expressões lambda nunca foram tão úteis
    m_motorFunction = [] (void) -> Motor* { return new MotorAP(); };
    m_pneuFunction = [] (void) -> Pneu* { return new PneuGoodyear(); };

    /*************************************************************************/
   /*** Modifique as expressões lambda ao invés de modificar os métodos.  ***/
  /*************************************************************************/

}

/*!
 * Destrutor da classe.
 */
MontadoraVolkswagen::~MontadoraVolkswagen()
{}

/*!
 * Retorna um objeto concreto que implementa a interface de Entidades::Automovel.
 * Na atual implementação retorna um objeto da classe Entidades::AutomovelGol.
 * \return
 * Um novo objeto automóvel.
 */
Automovel *MontadoraVolkswagen::createAutomovel() const
{
    return new AutomovelGol(m_motorFunction, m_pneuFunction);
}

/*!
 * Retorna um objeto concreto que implementa a interface de Entidades::Pneu.
 * Na atual implementação retorna um objeto da classe Entidades::PneuGoodyear.
 * \return
 * Um novo objeto pneu.
 */
Pneu *MontadoraVolkswagen::createPneu() const
{
    return m_pneuFunction();
}

/*!
 * Retorna um objeto concreto que implementa a interface de Entidades::Motor.
 * Na atual implementação retorna um objeto da classe Entidades::MotorAP.
 * \return
 * Um novo objeto motor.
 */
Motor *MontadoraVolkswagen::createMotor() const
{
    return m_motorFunction();
}
