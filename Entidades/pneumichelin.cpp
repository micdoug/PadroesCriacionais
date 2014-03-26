#include "pneumichelin.h"

using namespace Entidades;

/*!
 * \class Entidades::PneuMichelin
 * Representa um pneu da marca Michelin.
 */

/*!
 * Construtor da classe que recebe opcionalmente um inicializador do atributo furado.
 * \param furado
 * Valor inicial do atributo furado.
 */
PneuMichelin::PneuMichelin(bool furado): Pneu(furado)
{}

/*!
 * Construtor por cópia
 * \param pneu
 * Objeto a ser copiado
 */
PneuMichelin::PneuMichelin(const PneuMichelin &pneu) : Pneu(pneu)
{}

/*!
 * Destrutor da classe.
 */
PneuMichelin::~PneuMichelin()
{}

string PneuMichelin::furar()
{
    return Pneu::furar()+"Lascou!";
}

string PneuMichelin::consertar()
{
    return Pneu::furar()+"Pneu Michelin consertado!";
}

Entidades::Pneu *PneuMichelin::clone() const
{
    return new PneuMichelin(*this);
}
