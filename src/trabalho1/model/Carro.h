#ifndef _CARRO_H_
#define _CARRO_H_

#include "Veiculo.h"

class Carro : public Veiculo {

public:
    Carro(string modelo, string cor, string placa, double peso, double velocidade_maxima, double preco) : Veiculo(placa,peso,velocidade_maxima, preco) {
        _modelo = modelo;
        _cor = cor;
    }

    const string &get_modelo() const {
        return _modelo;
    }

    void set_modelo(const string &_modelo) {
        Carro::_modelo = _modelo;
    }

    const string &get_cor() const {
        return _cor;
    }

    void set_cor(const string &_cor) {
        Carro::_cor = _cor;
    }

    void print(){
        Veiculo::print();
        cout << "Modelo: " << get_modelo() << endl;
        cout << "Cor: " << get_cor() << endl;

    }

private:
    string _modelo;
    string _cor;
};


#endif //_CARRO_H_
