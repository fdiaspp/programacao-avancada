#include <iostream>
#include "../model/Pilha.h"
#include "../model/Ponto.h"
#include "AppController.h"


AppController::AppController() {
    _view = AppView();
}


void AppController::executa(){

    // this->testePilha();
    // this->atividade2();
    this->testePonto();

}

void AppController::testePilha(){
    cout << endl << "======== Teste ======== " << endl;

    Pilha a = Pilha();
    a.empilha("teste1");
    a.empilha("teste2");
    a.empilha("teste3");

    _view.pilhaPrint(&a);
    _view.pilhaTexto("Desempilhando... " + a.desempilha());
    _view.pilhaPrint(&a);
}

void AppController::atividade2(){

    cout << endl << "======== Atividade 2======== " << endl;

    Pilha p = Pilha(2);

    p += "teste1";
    p += "teste2";
    p += "teste3";
    p += "Teste4";

    _view.pilhaPrint(&p);
    _view.pilhaTexto("Teste --: " + --p + " ", &p);

}

void AppController::testePonto() {

    Ponto p1 = Ponto(1,2);
    Ponto p2 = Ponto(3,4);

    _view.pontoPrint(p1 + p2);
    _view.pontoPrint(p1 - p2);
    _view.pontoPrint(p1 * p2);
    _view.pontoPrint(p1 * 10);

    cout << p1[0] << endl;
    cout << p1[1] << endl;


}

