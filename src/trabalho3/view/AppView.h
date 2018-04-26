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

};

#endif // _APPVIEW_H_
