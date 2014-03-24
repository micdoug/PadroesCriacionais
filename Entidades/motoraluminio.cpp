#include "motoraluminio.h"

using namespace Entidades;

MotorAluminio::MotorAluminio(const Cilindrada &cilindrada): Motor(cilindrada)
{}

MotorAluminio::~MotorAluminio()
{}

string MotorAluminio::descricao() const
{
    string desc = "Tipo de Motor: Motor feito de Alumínio \n" \
                  "Quantidade de cilindros: ";
    desc +=       (this->cilindrada() == Cilindrada::ALTA ? "6 " : "3 ");
    desc +=       "cilindros. ";
    return desc;
}

