#include "motorfire.h"

using namespace Entidades;

/*!
 * \class Entidades::MotorFire
 * Representa um motor modelo Fire que é utilizado pela montadora FIAT.
 */

/*!
 * Construtor da classe. Tem como parâmetro opcional o nível de cilindrada que o motor deve
 * conter.
 * \param cilindrada
 * O nível de cilindrada que o motor deve conter ao ser construído.
 */
MotorFire::MotorFire(const Cilindrada &cilindrada): Motor(cilindrada)
{}

MotorFire::~MotorFire()
{}

string MotorFire::descricao() const
{
    return "Motor modelo Fire.";
}

string MotorFire::ligar() const
{
    return "FIRE Ligado!";
}
