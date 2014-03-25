#ifndef CILINDRADA_H
#define CILINDRADA_H

/*!
 * Engloba todas as entidades básicas envolvidas no domínio do problema. Estas entidades representam
 * estruturas que armazenam status e se comportam de maneira a representar as entidades do mundo real.
 */
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
