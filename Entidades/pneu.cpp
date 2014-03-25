#include "pneu.h"

using namespace Entidades;

/*!
 * \class Entidades::Pneu
 * Classe abstrata que representa um pneu usado na montagem de um carro.
 */

/*!
 * Construtor da classe com parâmetro opcional de inicializar o estado do pneu como furado ou não.
 * \param furado
 * Se passado como true o pneu é criado com status furado, caso contrário o pneu é criado com status
 * não furado.
 */
Pneu::Pneu(bool furado) : m_furado(furado)
{}

/*!
 * Destrutor da classe.
 */
Pneu::~Pneu()
{}

/*!
 * Retorna o status de um pneu para não furado. As subclasses devem reimplementar
 * este método retornando uma mensagem descritiva do processo e podem chamar a implementação
 * padrão em Entidades::Pneu que somente ajusta o atributo furado para false e retorna uma string vazia.
 * \return
 * String com informações sobre o processo.
 */
string Pneu::consertar()
{
    setFurado(false);
    return "";
}

/*!
 * Ajusta o status de furado do pneu para true e retorna uma string com a
 * representação textual do barulho feito do pneu ao estourar. As subclasses devem reimplementar
 * este método retornando o barulho característico de cada tipo de pneu e podem usar
 * a implementação padrão em Entidades::Pneu que somente ajusta o atributo furado e retorna string vazia.
 * \return
 * Descrição textual do barulho feito pelo pneu ao furar.
 */
string Pneu::furar()
{
    setFurado(true);
    return "";
}

/*!
 * Método de acesso à propriedade furado do pneu, que indica seu estado funcional.
 * \return
 * O status do pneu quanto a estar furado ou não.
 */
bool Pneu::furado() const
{
    return m_furado;
}

/*!
 * Método modificador da propriedade furado. Usado internamente para unificar o ajuste do atributo.
 * \param furado
 * Novo valor para o atributo furado.
 */
void Pneu::setFurado(bool furado)
{
    m_furado = furado;
}
