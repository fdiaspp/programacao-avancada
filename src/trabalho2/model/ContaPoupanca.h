//
// Created by felipe on 08/04/18.
//

#ifndef _CONTAPOUPANCA_H_
#define _CONTAPOUPANCA_H_

#include <iostream>
#include <cmath>
#include "Conta.h"

using namespace std;

class ContaPoupanca : public Conta {

public:

    ContaPoupanca(int numero, Cliente* cliente) : Conta(numero, cliente) {
        // Construtor Vazio
    }

    void extrato() {

        cout << "-------------------------" << endl;
        cout << "Extrato de Conta Poupanca" << endl;
        cout << "-------------------------" << endl;

        Conta::extrato();
    }

    void aplicaJurosDiarios(int dias) {

        cout << endl << "Saldo apos aplicacao de juros em Conta Poupanca por " << dias << " dias: " << endl;
        cout << "Saldo Inicial: " << getSaldo() << endl;
        cout << "Saldo Final: " << getSaldo() * (pow(1+0.08/100,dias)) << endl;

    }


};

#endif //_CONTAPOUPANCA_H_
