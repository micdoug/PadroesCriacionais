#include "motoraluminio.h"

using namespace Entidades;

/*!
 * \class Entidades::MotorAluminio
 * Representa um motor fabricado utilizando como matéria prima principal o alumínio.
 * Este motor tem a opção de ser construído com 3 cilindros em sua versão mais básica
 * ou com 6 cilindros em sua versão melhorada.
 */

/*!
 * Construtor da classe. Deve ser passado como parâmetro o nível de cilindrada que o motor
 * deverá possuir.
 * \param cilindrada
 * Ao passar como parâmetro Entidades::Cilindrada::ALTA o motor será construído com 6 cilindros e
 * ao passar Entidades::Cilindrada::BAIXA o motor será construído com 3 cilindros.
 */
MotorAluminio::MotorAluminio(const Cilindrada &cilindrada): Motor(cilindrada)
{}

/*!
 * Destrutor da classe. Não faz nenhuma operação em especial.
 */
MotorAluminio::~MotorAluminio()
{}

string MotorAluminio::descricao() const
{
    string desc = "Tipo de Motor: Motor feito de Alumínio \n" \
                  "Quantidade de cilindros: ";
    desc +=       (this->cilindrada() == Cilindrada::ALTA ? "6 " : "3 ");
    desc +=       "cilindros. ";
    return desc;
}

