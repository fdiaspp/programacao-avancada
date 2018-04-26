#ifndef _APPVIEW_H_
#define _APPVIEW_H_

#include "../model/Pilha.h"
#include "../model/Ponto.h"

class AppView{

public:
    void pilhaPrint(Pilha *p){
        cout << endl << "======= pilha" << endl;
        p->imprime();
        cout << "======= topo" << endl << endl;
    }

    void pilhaTexto(string texto, Pilha *p = nullptr) {
        cout << texto << endl;

        if( p ) {
            this->pilhaPrint(p);
        }
    }

    void pontoPrint(Ponto *p){
        cout << endl << "======= ponto:" << endl;
        p->imprime();

    }

    void menu(){
        cout << " === Trabalho 3 === " << endl;
        cout << "O que deseja fazer?" << endl;
        cout << "1. Executar Teste Entidade Pilha" << endl;
        cout << "2. Executar Atividade 2" << endl;
        cout << "3. Executar Teste Entidade Ponto" << endl;
        cout << "Digite sua opcao ou 0 para sair: ";
    }

};

#endif // _APPVIEW_H_
