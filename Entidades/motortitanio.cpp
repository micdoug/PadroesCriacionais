#include "motortitanio.h"

using namespace Entidades;

MotorTitanio::MotorTitanio(const Cilindrada &cilindrada): Motor(cilindrada)
{}

MotorTitanio::~MotorTitanio()
{}

string MotorTitanio::descricao() const
{
    string desc = "Tipo de Motor: Motor feito de Titanio \n" \
                  "Quantidade de cilindros: ";
    desc +=       (this->cilindrada() == Cilindrada::ALTA ? "10 " : "5 ");
    desc +=       "cilindros. ";
    return desc;
}


