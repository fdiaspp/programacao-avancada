#ifndef _CONTAVIEW_H_
#define _CONTAVIEW_H_

#include "../model/Conta.h"

class ContaView {
public:

    void imprimeExtrato(Conta* c){
        c->extrato();
    }

    void menu(){
        cout << " === Trabalho 2 === " << endl;
        cout << "O que deseja fazer?" << endl;
        cout << "1. Executar Atividade 3" << endl;
        cout << "2. Executar Atividade 5" << endl;
        cout << "3. Executar Atividade 6" << endl;
        cout << "Digite sua opcao ou 0 para sair: ";
    }

};

#endif // _CONTAVIEW_H_
