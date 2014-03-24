#ifndef METALURGICOALEMAO_H
#define METALURGICOALEMAO_H

#include "metalurgico.h"

namespace FactoryMethod
{
    class MetalurgicoAlemao;
}

class FactoryMethod::MetalurgicoAlemao : public FactoryMethod::Metalurgico
{
public:
    explicit MetalurgicoAlemao();
    virtual ~MetalurgicoAlemao();

    //Métodos específicos reimplementados
    virtual Motor *createMotor(const Cilindrada &cilindrada) const override;
};

#endif // METALURGICOALEMAO_H
