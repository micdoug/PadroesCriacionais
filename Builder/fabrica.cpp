#include "fabrica.h"

using namespace Builder;
using namespace Entidades;
using namespace FactoryMethod;

/*!
 * \class Builder::Fabrica
 * Classe responsável por criar novas instâncias de automóveis a partir da combinação de componentes unitários
 * criados por Metalurgicos.
*/

/*!
 * Construtor da classe.
 * \param metalurgico
 * Instância de um metalúrgico que será responsável por criar os componentes unitários do automóvel.
 */
Fabrica::Fabrica(FactoryMethod::Metalurgico *metalurgico) : m_metalurgico(metalurgico)
{}

/*!
 * Destrutor da classe.
 */
Fabrica::~Fabrica()
{
    delete m_metalurgico;
}

/*!
 * Método de acesso à instância de Metalurgico.
 * \return
 * Instância de Metalurgico usado pela fábrica.
 */
FactoryMethod::Metalurgico *Fabrica::metalurgico() const
{
    return m_metalurgico;
}

/*!
 * Método de ajuste da instância de metalurgico usado pela fábrica.
 * \param metalurgico
 * Nova instância a ser utilizada.
 */
void Fabrica::setMetalurgico(FactoryMethod::Metalurgico *metalurgico)
{
    m_metalurgico = metalurgico;
}

/*!
 * Cria um automóvel construindo seus componentes unitários e interligando-os.
 * \return
 * Novo automóvel.
 */
Entidades::Automovel *Fabrica::createAutomovel()
{
    //Criando o motor
    Motor *motor = this->metalurgico()->createMotor(Cilindrada::ALTA);
    //Criando pneus
    Pneu *pneus[] =  {
        this->metalurgico()->createPneu(),
        this->metalurgico()->createPneu(),
        this->metalurgico()->createPneu(),
        this->metalurgico()->createPneu()
    };
    //Criando e retornando automóvel
    return this->metalurgico()->createAutomovel(motor, pneus);
}

