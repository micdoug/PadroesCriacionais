#include "automovelka.h"

using namespace Entidades;

/*!
 * \class Entidades::AutomovelKa
 * Representa um carro do modelo Ka. Implementa a interface definida por Entidades::Automovel.
 */

/*!
 * Construtor com parâmetros de inicialização de atributos.
 * \param motor
 * O motor que será usado para montar o automóvel.
 * \param pneus
 * Um vetor com 4 pneus que irão compor o automóvel.
 */
AutomovelKa::AutomovelKa(Motor *motor, Pneu *pneus[]) : Automovel(motor, pneus)
{}

/*!
 * Construtor com inicialização do motor e indicação da forma de criar pneus.
 * \param motor
 * O motor que será usado para montar o automóvel.
 * \param function
 * Função que retorna novos objetos do tipo Entidades::Pneu. Esta função será usada para criar os pneus que irão
 * compor o automóvel.
 */
AutomovelKa::AutomovelKa(Motor *motor, PneuFactory function) : Automovel(motor, function)
{}

/*!
 * Construtor com inicialização dos pneus e indicação da forma de criar um motor.
 * \param mfunction
 * Função que retorna novos objetos do tipo Entidades::Motor. Esta função será usada para criar
 * o motor que irá compor o automóvel criado.
 * \param pneus
 * Um vetor com 4 pneus que irão compor o automóvel.
 */
AutomovelKa::AutomovelKa(MotorFactory mfunction, Pneu *pneus[]) : Automovel(mfunction, pneus)
{}

/*!
 * Construtor com indicação da forma de criar pneus e motor.
 * \param mfunction
 * Função que retorna novos objetos do tipo Entidades::Motor. Esta função será usada para criar
 * o motor que irá compor o automóvel criado.
 * \param function
 * Função que retorna novos objetos do tipo Entidades::Pneu. Esta função será usada para criar os pneus que irão
 * compor o automóvel.
 */
AutomovelKa::AutomovelKa(MotorFactory mfunction, PneuFactory function) : Automovel(mfunction, function)
{}

/*!
 * Destrutor da classe
 */
AutomovelKa::~AutomovelKa()
{}

string AutomovelKa::entrar() const
{
    return "Trem!";
}
