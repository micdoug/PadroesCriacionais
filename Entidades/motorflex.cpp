#include "motorflex.h"

using namespace Entidades;

/*!
 * \class Entidades::MotorFlex
 * Representa um motor modelo Flex.
 */

/*!
 * Construtor da classe.
 */
MotorFlex::MotorFlex(const Cilindrada &cilindrada): Motor(cilindrada)
{}

/*!
 * Construtor por cópia.
 * \param motor
 * Objeto a ser copiado.
 */
MotorFlex::MotorFlex(const Entidades::MotorFlex &motor) : Motor(motor)
{}

/*!
 * Destrutor da classe.
 */
MotorFlex::~MotorFlex()
{}

string MotorFlex::descricao() const
{
    return "Motor modelo Flex.";
}

Entidades::Motor *MotorFlex::clone() const
{
    return new MotorFlex(*this);
}
