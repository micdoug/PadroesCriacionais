#include "motorap.h"

using namespace Entidades;

/*!
 * \class Entidades::MotorAP
 * Representa um motor modelo AP que é utilizado pela montadora VolksWagen.
 */

/*!
 * Construtor da classe. Tem como parâmetro opcional o nível de cilindrada que o motor deve
 * conter.
 * \param cilindrada
 * O nível de cilindrada que o motor deve conter ao ser construído.
 */
MotorAP::MotorAP(const Cilindrada &cilindrada): Motor(cilindrada)
{}

/*!
 * Destrutor da classe. Não faz nenhuma operação especial.
 */
MotorAP::~MotorAP()
{}

string MotorAP::descricao() const
{
    return "Motor do tipo AP.";
}

string MotorAP::ligar() const
{
    return "AP Ligado!";
}
