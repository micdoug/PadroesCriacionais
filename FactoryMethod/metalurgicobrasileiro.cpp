#include "metalurgicobrasileiro.h"
#include "motoraco.h"

using Entidades::MotorAco;

FactoryMethod::MetalurgicoBrasileiro::MetalurgicoBrasileiro()
{}

FactoryMethod::MetalurgicoBrasileiro::~MetalurgicoBrasileiro()
{}

Motor *FactoryMethod::MetalurgicoBrasileiro::createMotor(const Cilindrada &cilindrada) const
{
    return new MotorAco(cilindrada);
}
