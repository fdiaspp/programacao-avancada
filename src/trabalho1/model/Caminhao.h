#ifndef _CAMINHAO_H_
#define _CAMINHAO_H_

#include "Veiculo.h"

class Caminhao : public Veiculo {

public:

    Caminhao() : _capacidade(0),
                 _comprimento(0),
                 _altura(0),
                 Veiculo() {
        // Construtor Vazio
    }

    Caminhao(double capacidade, double comprimento, double altura, string placa, double peso, double velocidade_maxima, double preco) : Veiculo(placa,peso,velocidade_maxima,preco){
        _capacidade = int(capacidade * 100);
        _comprimento = int(comprimento * 100);
        _altura = int(altura * 100);
    }


    double get_capacidade() const {
        return _capacidade/100.0;
    }

    void set_capacidade(double _capacidade) {
        Caminhao::_capacidade = int(_capacidade * 100);
    }

    double get_comprimento() const {
        return _comprimento/100.0;
    }

    void set_comprimento(double _comprimento) {
        Caminhao::_comprimento = int(_comprimento * 100);
    }

    double get_altura() const {
        return _altura/100.0;
    }

    void set_altura(double _altura) {
        Caminhao::_altura = int(_altura/100);
    }

    void print(){
        cout << "------------------------------------" << endl;
        cout << "Este eh um Caminhao (" + get_placa() + ")" << endl;
        cout << "------------------------------------" << endl;

        Veiculo::print_especifico();

        cout << "Capacidade: " << get_capacidade() << endl;
        cout << "Comprimento: " << get_comprimento() << endl;
        cout << "Altura: " << get_altura() << endl;
    }

private:
    int _capacidade;
    int _comprimento;
    int _altura;


};

#endif //_CAMINHAO_H_
