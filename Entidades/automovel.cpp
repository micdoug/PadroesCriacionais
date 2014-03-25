#include "automovel.h"
#include <iostream>

using std::cout;

using namespace Entidades;


Automovel::Automovel(Motor *motor, Pneu *pneus[]): m_motor(motor)
{
    for (int i=0; i<4; ++i)
    {
        setPneu(pneus[i], i);
    }
}

Automovel::Automovel(Motor *motor, Pneu *(*function)()): m_motor(motor)
{
    //Usando função para criar pneus
    for(int i=0; i<4; i++)
    {
        setPneu(function(), i);
    }
}

Automovel::Automovel(Motor *(*mfunction)(), Pneu *pneus[])
{
    //Usando função para criar motor
    setMotor(mfunction());
    //Usando função para criar pneus
    for(int i=0; i<4; i++)
    {
        setPneu(pneus[i], i);
    }
}

Automovel::Automovel(Motor *(*mfunction)(), Pneu *(*function)())
{
    //Usando funão para criar motor
    setMotor(mfunction());
    //Usando função para criar pneus
    for(int i=0; i<4; ++i)
    {
        setPneu(function(), i);
    }
}

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
Motor *Automovel::motor() const
{
    return m_motor;
}

Pneu *Automovel::getPneu(int indice)
{
    return m_pneus[indice];
}

std::string Automovel::ligar() const
{
    return motor()->ligar();
}

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
