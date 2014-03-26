#include "automovelgolprototipo.h"

using namespace Prototype;

/*!
 * \class Prototype::AutomovelGolPrototipo
 * Fábrica de automóveis pálio que implementa o padrão prototype.
 */

/*!
 * Construtor da classe
 * \param gol
 */
AutomovelGolPrototipo::AutomovelGolPrototipo(Entidades::AutomovelGol *gol) : m_gol(gol)
{}

/*!
 * Destrutor da classe.
 */
AutomovelGolPrototipo::~AutomovelGolPrototipo()
{
    delete m_gol;
}

/*!
 * Retorna um objeto concreto que implementa a interface Entidades::AutomovelGol
 * criando uma cópia de sua referência interna.
 * \return
 * Novo objeto automóvel gol.
 */
Entidades::AutomovelGol *AutomovelGolPrototipo::clone() const
{
    return static_cast<AutomovelGol *>(gol()->clone());
}

/*!
 * Método de acesso ao atributo gol, que é usado como referência para
 * criar protótipos.
 * \return
 * Atributo gol.
 */
AutomovelGol *AutomovelGolPrototipo::gol() const
{
    return m_gol;
}

/*!
 * Método de ajuste do atributo gol.
 * \param gol
 * Novo valor para o atributo gol.
 */
void AutomovelGolPrototipo::setGol(AutomovelGol *gol)
{
    delete m_gol;
    m_gol = gol;
}

