#include "automovelgoldual.h"
#include "motorflex.h"
#include "pneufirestone.h"

using namespace Entidades;

/*!
 * \class Entidades::AutomovelGolDual
 * Representa um carro modelo Gol da série Dual.
 */

/*!
 * Construtor da classe.
 */
AutomovelGolDual::AutomovelGolDual() :
    AutomovelGol
    (
        []() -> Motor* { return new MotorFlex(); },
        []() -> Pneu* { return new PneuFirestone(); }
        )
{}

/*!
 * Construtor por cópia.
 * \param automovel
 * Objeto a ser copiado.
 */
AutomovelGolDual::AutomovelGolDual(const Entidades::AutomovelGolDual &automovel) : AutomovelGol(automovel)
{}

/*!
 * Destrutor da classe.
 */
AutomovelGolDual::~AutomovelGolDual()
{}

Entidades::Automovel *AutomovelGolDual::clone() const
{
    return new AutomovelGolDual(*this);
}
