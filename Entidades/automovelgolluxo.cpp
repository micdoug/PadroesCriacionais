#include "automovelgolluxo.h"
#include "pneumichelin.h"
#include "motorfire.h"
using namespace Entidades;

/*!
 * \class Entidades::AutomovelGolLuxo
 * Representa um carro modelo Gol série de luxo.
 */

/*!
 * Construtor da classe
 */
AutomovelGolLuxo::AutomovelGolLuxo() :
    AutomovelGol
    (
        []() -> Motor* { return new MotorFire(); },
        []() -> Pneu* { return new PneuMichelin(); }
        )
{}

/*!
 * Construtor por cópia.
 * \param automovel
 * Objeto a ser copiado.
 */
AutomovelGolLuxo::AutomovelGolLuxo(const Entidades::AutomovelGolLuxo &automovel) : AutomovelGol(automovel)
{}

/*!
 * Destrutor da classe.
 */
AutomovelGolLuxo::~AutomovelGolLuxo()
{}

Entidades::Automovel *AutomovelGolLuxo::clone() const
{
    return new AutomovelGolLuxo(*this);
}
