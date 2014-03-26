#include "montadora.h"

using namespace AbstractFactory;

/*!
 * \class AbstractFactory::Montadora
 * Classe abstrata que cria uma interface para uma fábrica de automóveis. Esta classe é
 * a base para montagem do padrão AbstractFactory, pois define quais tipos de objetos poderão
 * ser criados. A classe deve ser extendida de forma que sejam definidos os objetos concretos
 * a serem retornados por cada método definido nela.
 */

/*!
 * Construtor da classe.
 */
Montadora::Montadora()
{}

/*!
 * Destrutor da classe.
 */
Montadora::~Montadora()
{}

/*!
 * \fn Automovel* Montadora::createAutomovel() const
 * Método abstrato para construção de um automóvel. As subclasses devem
 * implementá-lo de forma a retornar um objeto de uma classe concreta que
 * implemente a interface de Entidades::Automovel.
 * \return
 * Um novo objeto automóvel.
 */

/*!
 * \fn Pneu* Montadora::createPneu() const
 * Método abstrato para construção de um pneu. As subclasses devem implementá-lo
 * de forma a retornar um objeto de uma classe concreta que implemente a interface
 * de Entidades::Pneu.
 * \return
 * Um novo objeto pneu.
 */

/*!
 * \fn Motor* Montadora::createMotor() const
 * Método abstrato para construção de motor. As subclasses devem implementá-lo
 * de forma a retornar um objeto de uma classe concreta que implemente a interface
 * de Entidades::Motor.
 * \return
 * Um novo objeto motor.
 */
