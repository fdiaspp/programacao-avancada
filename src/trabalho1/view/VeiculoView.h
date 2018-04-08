#ifndef _VEICULO_VIEW_H_
#define _VEICULO_VIEW_H_

#include "../model/Veiculo.h"

class VeiculoView {

public:
    void imprime_veiculo(Veiculo* v){

        v->print();
    }
};

#endif // _VEICULO_VIEW_H_