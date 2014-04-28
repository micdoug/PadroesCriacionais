#include "metalurgicobrasileiro.h"
#include "motoraco.h"
#include "automovelgol.h"
#include "pneuborrachanatural.h"

using namespace Entidades;

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

/*!
 * Método reimplementado que instancia um objeto da classe Entidades::AutomovelGol.
 * \param motor
 * Motor a ser utilizado na construção do automóvel.
 * \param pneus
 * Conjunto de pneus a serem utilizados na construção do automóvel.
 * \return
 * Novo objeto criado.
 */
Automovel *FactoryMethod::MetalurgicoBrasileiro::createAutomovel(Entidades::Motor *motor, Entidades::Pneu *pneus[]) const
{
    return new AutomovelGol(motor, pneus);
}

/*!
 * Método reimplementado que instancia um objeto da classe Entidades::PneuBorrachaNatural.
 * \return
 * Novo objeto criado.
 */
Pneu *FactoryMethod::MetalurgicoBrasileiro::createPneu() const
{
    return new PneuBorrachaNatural();
}


