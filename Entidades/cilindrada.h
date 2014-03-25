#ifndef CILINDRADA_H
#define CILINDRADA_H

namespace Entidades
{
    /*!
     * * Indica o nível de quantidade de cilindros que um motor contém.
     * Estes níveis são interpretados de maneiras diferentes pelos diferentes tipos de motores.
     */
    enum Cilindrada
    {
        ALTA  = 0,  //!< Maior quantidade de cilindros possível.
        BAIXA = 1   //!< Menor quantidade de cilindros possível.
    };
}

#endif // CILINDRADA_H
