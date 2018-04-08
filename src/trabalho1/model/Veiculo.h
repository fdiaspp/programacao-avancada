
#ifndef _VEICULO_H_
#define _VEICULO_H_

#include <string>
#include <iostream>

using namespace std;

class Veiculo {
public:

    Veiculo(string placa, double peso, double velocidade_maxima, double preco) : _placa(placa),
                                                                                 _peso(int(peso * 100)),
                                                                                 _velocidadeMaxima(int(velocidade_maxima * 100)),
                                                                                 _preco(int(preco * 100)) {
        // Construtor vazio
    }

    Veiculo() : _placa(""),
                _peso(0),
                _velocidadeMaxima(0),
                _preco(0){

        // Construtor vazio
    }

    const string &get_placa() const {
        return _placa;
    }

    void set_placa(const string &_placa) {
        Veiculo::_placa = _placa;
    }

    double get_peso() const {
        return _peso/100.0;
    }

    void set_peso(double peso_kg) {
        Veiculo::_peso = int(peso_kg * 100);
    }

    double get_velocidade_maxima() const {
        return _velocidadeMaxima/100.0;
    }

    void set_velocidade_maxima(double vmax) {
        Veiculo::_velocidadeMaxima = int(vmax * 100);
    }

    double get_preco() const {
        return _preco/100.0;
    }

    void set_preco(double preco) {
        Veiculo::_preco = int(preco * 100);
    }

    virtual void print(){
        cout << "------------------------------------" << endl;
        cout << "Este eh um Veiculo (" + get_placa() + ")" << endl;
        cout << "------------------------------------" << endl;
        print_especifico();
    }


protected:

    void print_especifico() {

        cout << "Peso : " << get_peso() << endl;
        cout << "Velocidade Maxima: " << get_velocidade_maxima() << endl;
        cout << "Preco de Venda: " << get_preco() << endl;

    }

private:
    string _placa;
    int _peso;
    int _velocidadeMaxima;
    int _preco;


};

#endif //_VEICULO_H_
