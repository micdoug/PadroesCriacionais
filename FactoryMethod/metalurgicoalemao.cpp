#include "metalurgicoalemao.h"
#include "motoraluminio.h"
#include "automovelbmw.h"
#include "pneusilicone.h"

using namespace Entidades;

/*!
 * \class FactoryMethod::MetalurgicoAlemao
 * Classe que implementa a interface de Entidades::Metalurgico, representando um metalúrgico
 * de nacionalidade alemã que é capaz de criar motores de alumínio.
 */

/*!
 * Construtor da classe.
 */
FactoryMethod::MetalurgicoAlemao::MetalurgicoAlemao()
{}

/*!
 * Destrutor da classe.
 */
FactoryMethod::MetalurgicoAlemao::~MetalurgicoAlemao()
{}

/*!
 * Método reimplementado que instancia um objeto da classe Entidades::MotorAluminio.
 * \param cilindrada
 * Nível de cilindrada do motor a ser criado.
 * \return
 * Novo objeto criado.
 */
Motor *FactoryMethod::MetalurgicoAlemao::createMotor(const Cilindrada &cilindrada) const
{
    return new MotorAluminio(cilindrada);
}

/*!
 * Método reimplementado que instancia um objeto da classe Entidades::AutomovelBMW
 * \param motor
 * Motor a ser utilizado na construção do automóvel.
 * \param pneus
 * Conjunto de pneus a serem utilizados na construção do automóvel.
 * \return
 * Novo objeto criado.
 */
Automovel *FactoryMethod::MetalurgicoAlemao::createAutomovel(Entidades::Motor *motor, Entidades::Pneu *pneus[]) const
{
    return new AutomovelBMW(motor, pneus);
}

/*!
 * Método reimplementado que instancia um objeto da classe Entidades::PneuSilicone
 * \return
 * Novo objeto criado
 */
Pneu *FactoryMethod::MetalurgicoAlemao::createPneu() const
{
    return new PneuSilicone();
}
