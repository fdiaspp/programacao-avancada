
#include "./BancoController.h"
#include "../model/ContaCorrente.h"
#include "../model/ContaPoupanca.h"
#include "../view/ContaView.h"

using namespace std;

void BancoController::atividade3(){

    ContaView view;

    // Cria Contas...
    ContaCorrente cc1 = ContaCorrente(1,new Cliente("Cliente01"));
    ContaCorrente cc2 = ContaCorrente(2,new Cliente("Cliente02"));
    ContaPoupanca cp1 = ContaPoupanca(3,new Cliente("Cliente03"));
    ContaPoupanca cp2 = ContaPoupanca(4,new Cliente("Cliente04"));


    // Define saldos iniciais

    cout << "Operacoes com a conta 1: " << endl;
    cc1.deposita(rand() / float(RAND_MAX) * 10000);
    view.imprimeExtrato(&cc1);


    cc1.retira( cc1.getSaldo() * rand() / float(RAND_MAX));
    view.imprimeExtrato(&cc1);


    cout << endl << endl << " Operacoes com a conta 2: " << endl;
    cc2.deposita(2000);
    view.imprimeExtrato(&cc2);

    cc2.retira( cc2.getSaldo() * rand() / float(RAND_MAX));
    view.imprimeExtrato(&cc2);


    cout << endl << endl << "Operacoes com a conta 3: " << endl;
    cp1.deposita(rand() / float(RAND_MAX) * 1000);
    view.imprimeExtrato(&cp1);

    cp1.retira( cp1.getSaldo() * rand() / float(RAND_MAX));
    view.imprimeExtrato(&cp2);


    cout << endl << endl << "Operacoes com a conta 4: " << endl;
    cp2.deposita(2000);
    view.imprimeExtrato(&cp2);

    cp2.retira( cp2.getSaldo() * rand() / float(RAND_MAX));
    view.imprimeExtrato(&cp2);


    // Operações de transferência
    cp2.transfere(&cc1,1000);
    view.imprimeExtrato(&cp2);
    view.imprimeExtrato(&cp1);

    // Aplicação de juros
    ContaCorrente cc3 = ContaCorrente(5, new Cliente("Conta 5"));
    ContaPoupanca cp3 = ContaPoupanca(6, new Cliente("Conta 6"));

    cp3.deposita(100);
    cc3.deposita(100);

    cp3.aplicaJurosDiarios(100);
    cc3.aplicaJurosDiarios(100);

}

void BancoController::atividade5() {

    ContaCorrente** cc = new ContaCorrente*[100];

    delete [] cc;
}

void BancoController::atividade6() {

    Conta** c = (Conta**) new ContaCorrente*[100];

    delete [] c;
}

