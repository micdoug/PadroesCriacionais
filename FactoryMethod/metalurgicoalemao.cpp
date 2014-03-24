#include "metalurgicoalemao.h"
#include "motoraluminio.h"

using Entidades::MotorAluminio;

FactoryMethod::MetalurgicoAlemao::MetalurgicoAlemao()
{}

FactoryMethod::MetalurgicoAlemao::~MetalurgicoAlemao()
{}

Motor *FactoryMethod::MetalurgicoAlemao::createMotor(const Cilindrada &cilindrada) const
{
    return new MotorAluminio(cilindrada);
}
