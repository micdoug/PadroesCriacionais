#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include "motor.h"
#include "pneu.h"
#include <string>

using std::string;

namespace Entidades
{
    class Automovel;
}

class Entidades::Automovel
{
public:
    //Construtores e destrutores
    explicit Automovel(Motor *motor, Pneu *pneus[]);
    explicit Automovel(Motor *motor, Pneu* (*function)(void));
    explicit Automovel(Motor* (*mfunction)(void), Pneu *pneus[]);
    explicit Automovel(Motor* (*mfunction)(void), Pneu* (*function)(void));
    virtual ~Automovel();

    //Métodos acessadores
    Motor *motor() const;
    Pneu *getPneu(int indice);

    //Métodos específicos abstratos
    virtual string entrar() const = 0;
    virtual string ligar() const;
    virtual string furarPneu(int indice);

private:
    Motor *m_motor;
    Pneu *m_pneus[4];

    void setMotor(Motor *motor);
    void setPneu(Pneu *pneu, int indice);

};

#endif // AUTOMOVEL_H
