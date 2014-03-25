#include "metalurgicobrasileiro.h"
#include "motoraco.h"

using Entidades::MotorAco;

/*!
 * \class FactoryMethod::MetalurgicoBrasileiro
 * Classe que implementa a interface de Entidades::Metalurgico, representando um metalúrgico
 * de nacionalidade brasileira que é capaz de criar motores de aço.
 */

/*!
 * Construtor da classe.
 */
FactoryMethod::MetalurgicoBrasileiro::MetalurgicoBrasileiro()
{}

/*!
 * Destrutor da classe.
 */
FactoryMethod::MetalurgicoBrasileiro::~MetalurgicoBrasileiro()
{}

/*!
 * Método reimplementado que instancia um objeto da classe Entidades::MotorAco.
 * \param cilindrada
 * Nível de cilindrada do motor a ser criado.
 * \return
 * Novo objeto criado.
 */
Motor *FactoryMethod::MetalurgicoBrasileiro::createMotor(const Cilindrada &cilindrada) const
{
    return new MotorAco(cilindrada);
}
