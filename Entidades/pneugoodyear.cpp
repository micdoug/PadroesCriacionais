#include "pneugoodyear.h"

using namespace Entidades;

/*!
 * \class Entidades::PneuGoodyear
 * Representa um pneu da marca Goodyear.
 */

/*!
 * Construtor da classe que recebe opcionalmente um inicializador do atributo furado.
 * \param furado
 * Valor inicial do atributo furado.
 */
PneuGoodyear::PneuGoodyear(bool furado) : Pneu(furado)
{}

/*!
 * Destrutor da classe.
 */
PneuGoodyear::~PneuGoodyear()
{}

string PneuGoodyear::furar()
{
    return Pneu::furar()+"Crash!";
}

string PneuGoodyear::consertar()
{
    return Pneu::consertar()+"Pneu Goodyear consertado!";
}
