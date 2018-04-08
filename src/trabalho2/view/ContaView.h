#ifndef _CONTAVIEW_H_
#define _CONTAVIEW_H_

#include "../model/Conta.h"

class ContaView {
public:

    void imprimeExtrato(Conta* c){
        c->extrato();
    }

};

#endif // _CONTAVIEW_H_
