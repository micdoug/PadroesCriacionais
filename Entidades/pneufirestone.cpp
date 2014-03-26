#include "pneufirestone.h"

using namespace Entidades;

/*!
 * \class Entidades::PneuFirestone
 * Representa um pneu da marca Firestone.
 */

/*!
 * Construtor da classe que recebe opcionalmente um inicializador do atributo furado.
 * \param furado
 * Valor inicial do atributo furado.
 */
PneuFirestone::PneuFirestone(bool furado): Pneu(furado)
{}

/*!
 * Construtor por cópia.
 * \param pneu
 * Objeto a ser copiado.
 */
PneuFirestone::PneuFirestone(const PneuFirestone &pneu) : Pneu(pneu)
{}

/*!
 * Destrutor da classe.
 */
PneuFirestone::~PneuFirestone()
{}

string PneuFirestone::furar()
{
    return Pneu::furar()+"Cheeee!";
}

string PneuFirestone::consertar()
{
    return Pneu::consertar()+"Pneu Firestone consertado!";
}

Entidades::Pneu *PneuFirestone::clone() const
{
    return new PneuFirestone(*this);
}
