#include "metalurgico.h"

using namespace FactoryMethod;

/*!
 * \class FactoryMethod::Metalurgico
 * Classe abstrata que define o meio de criação de objetos da classe motor.
 * Este classe deve ser extendida de modo a definir que tipo de motor será criado.
 */

/*!
 * Construtor da classe.
 */
Metalurgico::Metalurgico()
{}

/*!
 * Destrutor da classe.
 */
Metalurgico::~Metalurgico()
{}

/*!
 * \fn virtual Motor *Metalurgico::createMotor(const Cilindrada &cilindrada) const = 0
 * Método abstrato que deve ser reimplementado pelas subclasses instanciando um
 * objeto concreto que implemente a interface de Entidades::Motor.
 * \param cilindrada
 * Nível de cilindrada do motor a ser criado.
 * \return
 * Novo objeto criado.
 */
