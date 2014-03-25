#ifndef PNEU_H
#define PNEU_H

#include <string>

using std::string;

namespace Entidades
{
    class Pneu;
}

class Entidades::Pneu
{
public:
    //Construtores e destrutores
    explicit Pneu(bool furado = false);
    virtual ~Pneu();

    //Métodos específicos
    virtual string furar() = 0;
    virtual string consertar() = 0;

    //Métodos acessadores e modificadores
    bool furado() const;

private:
    //Atributos
    bool m_furado;
    //Métodos privados
    void setFurado(bool furado);
};

#endif // PNEU_H
