
#ifndef _CONTACORRENTE_H_
#define _CONTACORRENTE_H_

#include "Conta.h"
#include <iostream>
#include <cmath>

using namespace std;

class ContaCorrente : public Conta {

public:

    ContaCorrente(int numero, Cliente* cliente) : Conta(numero, cliente) {
        // Construtor Vazio
    }

    void extrato() {

        cout << "-------------------------" << endl;
        cout << "Extrato de Conta Corrente" << endl;
        cout << "-------------------------" << endl;

        Conta::extrato();
    }

    void aplicaJurosDiarios(int dias) {

        cout << endl << "Saldo apos aplicacao de juros em Conta Corrente por " << dias << " dias: " << endl;
        cout << "Saldo Inicial: " << getSaldo() << endl;
        cout << "Saldo Final: " << getSaldo() * (pow(1+0.01/100, dias)) << endl;
    }


};

#endif //_CONTACORRENTE_H_
