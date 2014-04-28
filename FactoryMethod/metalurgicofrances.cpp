#include "metalurgicofrances.h"
#include "motortitanio.h"
#include "automovelpegeout.h"
#include "pneuborrachasintetica.h"

using namespace FactoryMethod;
using namespace Entidades;

/*!
 * \class FactoryMethod::MetalurgicoFrances
 * Classe que implementa a interface de Entidades::Metalurgico, representando um metalúrgico
 * de nacionalidade fracesa que é capaz de criar motores de titânio.
 */

/*!
 * Construtor da classe.
 */
MetalurgicoFrances::MetalurgicoFrances()
{}

/*!
 * Destrutor da classe.
 */
MetalurgicoFrances::~MetalurgicoFrances()
{}

/*!
 * Método reimplementado que instancia um objeto da classe Entidades::MotorTitanio.
 * \param cilindrada
 * Nível de cilindrada do motor a ser criado.
 * \return
 * Novo objeto criado.
 */
Motor *MetalurgicoFrances::createMotor(const Entidades::Cilindrada &cilindrada) const
{
    return new MotorTitanio(cilindrada);
}

/*!
 * Método reimplementado que instancia um objeto da classe Entidades::AutomovelPegeout.
 * \param motor
 * Motor a ser utilizado na construção do automóvel.
 * \param pneus
 * Conjunto de pneus a serem utilizados na construção do automóvel.
 * \return
 * Novo objeto criado.
 */
Automovel *MetalurgicoFrances::createAutomovel(Motor *motor, Pneu *pneus[]) const
{
    return new AutomovelPegeout(motor, pneus);
}

/*!
 * Método reimplementado que instancia um objeto da classe Entidades::PneuBorrachaSintetica.
 * \return
 * Novo objeto criado.
 */
Pneu *MetalurgicoFrances::createPneu() const
{
    return new PneuBorrachaSintetica();
}
