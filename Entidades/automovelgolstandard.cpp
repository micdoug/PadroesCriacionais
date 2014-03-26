#include "automovelgolstandard.h"
#include "motorap.h"
#include "pneugoodyear.h"

using namespace Entidades;

/*!
 * \class Entidades::AutomovelGolStandard
 * Representa um carro modelo Gol com os componentes padrões.
 */

/*!
 * Construtor da classe.
 */
AutomovelGolStandard::AutomovelGolStandard() :
    AutomovelGol
    (
        []() -> Motor* { return new  MotorAP(); }, //Expressão lambda de constução de motor AP
        []() -> Pneu* {return new PneuGoodyear();  //Expressão lambda de construção de pneu Goodyear
        })
{}

/*!
 * Construtor por cópia.
 * \param automovel
 * Objeto a ser copiado.
 */
AutomovelGolStandard::AutomovelGolStandard(const Entidades::AutomovelGolStandard &automovel) : AutomovelGol(automovel)
{}

/*!
 * Destrutor da classe.
 */
AutomovelGolStandard::~AutomovelGolStandard()
{}

Entidades::Automovel *AutomovelGolStandard::clone() const
{
    return new AutomovelGolStandard(*this);
}
