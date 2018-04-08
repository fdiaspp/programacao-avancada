#ifndef CONTA_H_
#define CONTA_H_

#include <iostream>
#include <string>
#include "Cliente.h"

using namespace std;

class Conta {

public:
    Conta(int numero, Cliente* cliente) : _numero(numero),
                                         _saldo(0),
                                         _cliente(cliente){

        // Cosntrutor vazio
    }

    void deposita(float valor) {
        _saldo += int(valor * 100);
    }

    void retira(float valor) {
        _saldo -= int(valor * 100);
    }

    void transfere(Conta *contaDestino, float valor){
        contaDestino->deposita(valor);
        this->retira(valor);
    }

    virtual void extrato() {
        cout << "Conta nº: " << _numero << endl;
        cout << "Cliente Nome: " << _cliente->getNome() << endl;
        cout << "Saldo Atual: " << getSaldo() << endl;
    }

    virtual void aplicaJurosDiarios(int dias) = 0;

    int getNumero(){
        return _numero;
    }

    void setNumero(int numero) {
        _numero = numero;
    }

    float getSaldo(){
        return float(_saldo/100.0);
    }

    void setSaldo(float saldo){
        _saldo = int(saldo * 100);
    }

    Cliente* getCliente(){
        return _cliente;
    }

    void setCliente(Cliente *cliente){
        _cliente = cliente;
    }

    ~Conta(){
        delete(_cliente);
    }

protected:
    int _numero;
    int _saldo;
    Cliente* _cliente;
};

#endif //CONTA_H_