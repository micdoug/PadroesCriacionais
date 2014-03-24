#include "motor.h"

using namespace Entidades;

Motor::Motor(const Cilindrada &cilindrada): m_cilindrada(cilindrada)
{}

Motor::~Motor()
{}

Cilindrada Motor::cilindrada() const
{
    return m_cilindrada;
}

void Motor::setCilindrada(const Cilindrada &cilindrada)
{
    m_cilindrada = cilindrada;
}

