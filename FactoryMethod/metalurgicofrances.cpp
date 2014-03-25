#include "metalurgicofrances.h"
#include "motortitanio.h"

using namespace FactoryMethod;
using Entidades::MotorTitanio;

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
