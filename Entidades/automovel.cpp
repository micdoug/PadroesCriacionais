#include "automovel.h"
#include <iostream>

using std::cout;

using namespace Entidades;

/*!
 * \class Entidades::Automovel
 * Interface para representação de um automóvel.
 */

/*!
 * \typedef Entidades::PneuFactory
 * Ponteiro para função sem parâmetros que retorna um objeto do tipo Entidades::Pneu.
 */

/*!
 * \typedef Entidades::MotorFactory
 * Ponteiro para função sem parâmetros que retorna um objeto do tipo Entidades::Motor.
 */

/*!
 * Construtor com parâmetros de inicialização de atributos.
 * \param motor
 * O motor que será usado para montar o automóvel.
 * \param pneus
 * Um vetor com 4 pneus que irão compor o automóvel.
 */
Automovel::Automovel(Motor *motor, Pneu *pneus[]): m_motor(motor)
{
    for (int i=0; i<4; ++i)
    {
        setPneu(pneus[i], i);
    }
}

/*!
 * Construtor com inicialização do motor e indicação da forma de criar pneus.
 * \param motor
 * O motor que será usado para montar o automóvel.
 * \param function
 * Função que retorna novos objetos do tipo Entidades::Pneu. Esta função será usada para criar os pneus que irão
 * compor o automóvel.
 */
Automovel::Automovel(Motor *motor, PneuFactory function): m_motor(motor)
{
    //Usando função para criar pneus
    for(int i=0; i<4; i++)
    {
        setPneu(function(), i);
    }
}

/*!
 * Construtor com inicialização dos pneus e indicação da forma de criar um motor.
 * \param mfunction
 * Função que retorna novos objetos do tipo Entidades::Motor. Esta função será usada para criar
 * o motor que irá compor o automóvel criado.
 * \param pneus
 * Um vetor com 4 pneus que irão compor o automóvel.
 */
Automovel::Automovel(MotorFactory mfunction, Pneu *pneus[])
{
    //Usando função para criar motor
    setMotor(mfunction());
    //Usando função para criar pneus
    for(int i=0; i<4; i++)
    {
        setPneu(pneus[i], i);
    }
}

/*!
 * Construtor com indicação da forma de criar pneus e motor.
 * \param mfunction
 * Função que retorna novos objetos do tipo Entidades::Motor. Esta função será usada para criar
 * o motor que irá compor o automóvel criado.
 * \param function
 * Função que retorna novos objetos do tipo Entidades::Pneu. Esta função será usada para criar os pneus que irão
 * compor o automóvel.
 */
Automovel::Automovel(MotorFactory mfunction, PneuFactory function)
{
    //Usando funão para criar motor
    setMotor(mfunction());
    //Usando função para criar pneus
    for(int i=0; i<4; ++i)
    {
        setPneu(function(), i);
    }
}

/*!
 * Construtor por cópia.
 * \param automovel
 * Objeto a ser copiado.
 */
Automovel::Automovel(const Entidades::Automovel &automovel)
{
    setMotor(automovel.motor()->clone());
    for(int i=0; i<4; ++i)
    {
        setPneu(automovel.getPneu(i)->clone(), i);
    }
}

/*!
 * Destrutor da classe. Libera objetos armazenados na memória.
 */
Automovel::~Automovel()
{
    //Liberando memória ocupada pelo motor
    delete m_motor;
    //Liberando memória ocupada pelos pneus
    for(Pneu *pneu: m_pneus)
    {
        delete pneu;
    }
}

/*!
 * Método de acesso ao motor que compõe o automóvel.
 * \return
 * Motor que compõe o automóvel.
 */
Motor *Automovel::motor() const
{
    return m_motor;
}

/*!
 * Método de acesso aos pneus que compõem o automóvel.
 * \param indice
 * Índice que varia de 0 a 3 para indicar qual pneu se deseja obter.
 * \return
 * Pneu que compõe o automóvel.
 */
Pneu *Automovel::getPneu(int indice) const
{
    return m_pneus[indice];
}

std::string Automovel::entrar() const
{
    return "";
}

/*!
 * Liga o automóvel. Simula o acionamento do motor do automóvel.
 * \return
 * Representação textual do barulho do automóvel ao ligar.
 */
std::string Automovel::ligar() const
{
    return motor()->ligar();
}

/*!
 * Fura um dos pneus do automóvel.
 * \param indice
 * Varia de 0 a 3 e indica quais dos pneus deve ser furado.
 * \return
 * Representação textual do barulho do pneu ao furar.
 */
std::string Automovel::furarPneu(int indice)
{
    return getPneu(indice)->furar();
}

void Automovel::setMotor(Motor *motor)
{
    m_motor = motor;
}

void Automovel::setPneu(Pneu *pneu, int indice)
{
    m_pneus[indice] = pneu;
}

/*!
 * \fn string Automovel::entrar() const
 * Simula o ato de uma pessoa entrar no carro.
 * \return
 * Representação textual do barulho feito ao uma pessoa entrar no carro.
 */
