#include "metalurgicofrances.h"
#include "motortitanio.h"

using namespace FactoryMethod;
using Entidades::MotorTitanio;

MetalurgicoFrances::MetalurgicoFrances()
{}

MetalurgicoFrances::~MetalurgicoFrances()
{}

Entidades::Motor *MetalurgicoFrances::createMotor(const Entidades::Cilindrada &cilindrada) const
{
    return new MotorTitanio(cilindrada);
}
