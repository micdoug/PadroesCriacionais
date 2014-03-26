#include "motoraco.h"

using namespace Entidades;

/*!
 * \class Entidades::MotorAco
 * Representa um motor fabricado utilizando como matéria prima principal o aço.
 * Este motor tem a opção de ser construído com 4 cilindros em sua versão mais básica
 * ou com 8 cilindros em sua versão melhorada.
 */

/*!
 * Construtor da classe. Deve ser passado como parâmetro o nível de cilindrada que o motor
 * deverá possuir.
 * \param cilindrada
 * Ao passar como parâmetro Entidades::Cilindrada::ALTA o motor será construído com 8 cilindros e
 * ao passar Entidades::Cilindrada::BAIXA o motor será construído com 4 cilindros.
 */
MotorAco::MotorAco(const Cilindrada &cilindrada): Motor(cilindrada)
{}

/*!
 * Construtor por cópia
 * \param motor
 * Objeto a ser copiado.
 */
MotorAco::MotorAco(const Entidades::MotorAco &motor) : Motor(motor)
{}

/*!
 * Destrutor da classe. Não faz nenhuma operação em especial.
 */
MotorAco::~MotorAco()
{}

string MotorAco::descricao() const
{
    string desc = "Tipo de Motor: Motor feito de Aço \n" \
                  "Quantidade de cilindros: ";
    desc +=       (this->cilindrada() == Cilindrada::ALTA ? "8 " : "4 ");
    desc +=       "cilindros. ";
    return desc;
}

Entidades::Motor *MotorAco::clone() const
{
    return new MotorAco(*this);
}
