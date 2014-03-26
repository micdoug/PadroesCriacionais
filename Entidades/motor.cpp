#include "motor.h"
#include <iostream>

using namespace Entidades;

/*!
 * \class Entidades::Motor
 * Classe abstrata que serve de base para a implementação da cadeia de motores que podem ser construídos.
 */

/*!
 * Construtor da classe.
 * \param cilindrada
 * Nível de cilindrada a ser utilizada para construir o motor.
 */
Motor::Motor(const Cilindrada &cilindrada): m_cilindrada(cilindrada)
{}

/*!
 * Construtor por cópia.
 * \param motor
 * Objeto a ser copiado.
 */
Motor::Motor(const Entidades::Motor &motor) : m_cilindrada(motor.cilindrada())
{}

/*!
 * Destrutor da classe.
 */
Motor::~Motor()
{}

/*!
 * Método de acesso ao nível de cilindrada do motor.
 * \return
 * Nível de cilindrada do motor.
 */
Cilindrada Motor::cilindrada() const
{
    return m_cilindrada;
}

/*!
 * Método de ajuste do nível de cilindrada do motor.
 * \param cilindrada
 * Nível de cilindrada a ser ajustado para o motor.
 */
void Motor::setCilindrada(const Cilindrada &cilindrada)
{
    m_cilindrada = cilindrada;
}

/*!
 * Devolve uma string com o barulho feito por este motor ao ser ligado.
 * \return
 * Descrição textual do barulho feito pelo motor ao ligar.
 */
string Motor::ligar() const
{
    return "Motor ligado!!!";
}

/*!
 * \fn virtual string Entidades::Motor::descricao() const = 0
 * Este método devolve uma string com uma breve descrição sobre este motor. A descrição pode conter,
 * por exemplo, o material usado em sua construção e o número de cilindros que o mesmo contém.
 */

/*!
 * \fn Motor *Motor::clone() const
 * Cria um clone desta instância.
 * \return
 * Cópia deste objeto.
 */
