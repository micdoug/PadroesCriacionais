#ifndef FABRICA_H
#define FABRICA_H

#include "motor.h"
#include "pneu.h"
#include "metalurgico.h"

namespace Builder
{
    class Fabrica;
}

class Builder::Fabrica
{
public:
    explicit Fabrica(FactoryMethod::Metalurgico *metalurgico);
    virtual ~Fabrica();

    FactoryMethod::Metalurgico *metalurgico() const;
    void setMetalurgico(FactoryMethod::Metalurgico *metalurgico);
    virtual Entidades::Automovel *createAutomovel();

private:
    FactoryMethod::Metalurgico *m_metalurgico;
};

#endif // FABRICA_H
