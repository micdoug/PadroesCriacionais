#include "motorcht.h"

using namespace Entidades;

/*!
 * \class Entidades::MotorCHT
 * Representa um motor modelo CHT que é utilizado pela montadora Ford.
 */

/*!
 * Construtor da classe. Tem como parâmetro opcional o nível de cilindrada que o motor deve
 * conter.
 * \param cilindrada
 * O nível de cilindrada que o motor deve conter ao ser construído.
 */
MotorCHT::MotorCHT(const Cilindrada &cilindrada): Motor(cilindrada)
{}

MotorCHT::~MotorCHT()
{}

string MotorCHT::descricao() const
{
    return "Motor modelo CHT";
}

string MotorCHT::ligar() const
{
    return "CHT Ligado!";
}
