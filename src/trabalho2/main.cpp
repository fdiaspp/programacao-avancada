
#include "control/BancoController.h"

int main() {

    BancoController control = BancoController();
    control.executa();

    /**
     * Questão 5
     * O que aconteceu foi que o compilador tentou estanciar
     * os 100 objetos, mas não pode pois o construtor da classe espera dois parâmetros
     * para construir adequadamente o objeto. Uma solução seria criar um vetor de ponteiros
     * do tipo ContaCorrente e alocá-lo dinâmicamente.
     */

    /**
     * Questão 6
     *
     *
     */

    return 0;
}