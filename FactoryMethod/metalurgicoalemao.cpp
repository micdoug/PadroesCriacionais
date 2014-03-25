#include "metalurgicoalemao.h"
#include "motoraluminio.h"

using Entidades::MotorAluminio;

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
