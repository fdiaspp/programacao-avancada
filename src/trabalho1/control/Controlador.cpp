


#include <iostream>
#include "../model/Veiculo.h"
#include "../model/Carro.h"
#include "Controlador.h"
#include "../model/Caminhao.h"
#include "../view/VeiculoView.h"

using namespace std;

void Controlador::teste() {

    Veiculo *veiculo[10];
    VeiculoView view;

    veiculo[0] = new Veiculo("AAA-000", 1000, 190, 25500.10);
    veiculo[1] = new Veiculo("AAA-001", 1000, 192, 20000);
    veiculo[2] = new Carro("Vectra", "Preto", "CAR-000", 1010, 200, 11500.20);
    veiculo[3] = new Carro("Fusca", "Branco", "CAR-001", 1010, 200, 11500.20);
    veiculo[4] = new Caminhao(200,15.75,1.5,"CAM-001", 1010, 200, 11500.20);
    veiculo[5] = new Caminhao(300, 5.4,1.2, "CAM-001", 1010, 200, 11500.20);


    for(int i = 0; i < 6; ++i){

        view.imprime_veiculo(veiculo[i]);

        delete(veiculo[i]);
    }



    return;

}