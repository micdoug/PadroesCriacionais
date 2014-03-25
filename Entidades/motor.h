#ifndef MOTOR_H
#define MOTOR_H

#include <string>
#include "cilindrada.h"

using std::string;

namespace Entidades
{
    class Motor;
}

class Entidades::Motor
{
public:
    //Construtores e destrutores
    explicit Motor(const Cilindrada &cilindrada);
    virtual ~Motor();

    //Métodos acessadores
    Cilindrada cilindrada() const;
    void setCilindrada(const Cilindrada &cilindrada);

    //Métodos específicos
    virtual string descricao() const = 0;
    virtual string ligar() const;

private:
    //Atributos
    Cilindrada m_cilindrada;

};

#endif // MOTOR_H
