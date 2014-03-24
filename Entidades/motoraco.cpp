#include "motoraco.h"

using namespace Entidades;

MotorAco::MotorAco(const Cilindrada &cilindrada): Motor(cilindrada)
{}

MotorAco::~MotorAco()
{}

string MotorAco::descricao() const
{
    string desc = "Tipo de Motor: Motor feito de Aço \n" \
                  "Quantidade de cilindros: ";
    desc +=       (this->cilindrada() == Cilindrada::ALTA ? "8 " : "4 ");
    desc +=       "cilindros. ";
    return desc;
}
