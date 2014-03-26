#include "motortitanio.h"

using namespace Entidades;

/*!
 * \class Entidades::MotorTitanio
 * Representa um motor fabricado utilizando como matéria prima principal o titânio.
 * Este motor tem a opção de ser construído com 5 cilindros em sua versão mais básica
 * ou com 10 cilindros em sua versão melhorada.
 */

/*!
 * Construtor da classe. Deve ser passado como parâmetro o nível de cilindrada que o motor
 * deverá possuir.
 * \param cilindrada
 * Ao passar como parâmetro Entidades::Cilindrada::ALTA o motor será construído com 10 cilindros e
 * ao passar Entidades::Cilindrada::BAIXA o motor será construído com 5 cilindros.
 */
MotorTitanio::MotorTitanio(const Cilindrada &cilindrada): Motor(cilindrada)
{}

/*!
 * Construtor por cópia.
 * \param motor
 * Objeto a ser copiado.
 */
MotorTitanio::MotorTitanio(const Entidades::MotorTitanio &motor) : Motor(motor)
{}

/*!
 * Destrutor da classe. Não faz nenhuma operação em especial.
 */
MotorTitanio::~MotorTitanio()
{}

string MotorTitanio::descricao() const
{
    string desc = "Tipo de Motor: Motor feito de Titanio \n" \
                  "Quantidade de cilindros: ";
    desc +=       (this->cilindrada() == Cilindrada::ALTA ? "10 " : "5 ");
    desc +=       "cilindros. ";
    return desc;
}

Entidades::Motor *MotorTitanio::clone() const
{
    return new MotorTitanio(*this);
}


