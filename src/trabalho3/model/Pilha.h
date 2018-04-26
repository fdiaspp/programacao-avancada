
#ifndef _PILHA_H_
#define _PILHA_H_

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Pilha {

public:
    Pilha(int tamanho = 100) : _itens(nullptr),
                               _posicao_atual(0),
                               _tamanho(tamanho) {

        _itens = new string[_tamanho];
    }

    void empilha(string valor) {

        if (this->overflow()) {
            _itens[_posicao_atual] = valor;
            ++_posicao_atual;
        } else {
            cout << "Pilha cheia. Nao foi possivel inserir: '" << valor << "'" << endl;
        }

    }

    string desempilha() {

        if (!this->underflow()) {
            string aux = _itens[_posicao_atual-1];
            _itens[_posicao_atual-1] = "";
            --_posicao_atual;
            return aux;
        } else {
            cout << "Pilha vazia." << endl;
        }

    }

    int tamanho() {
        return _tamanho;
    }

    int imprime() {

        for (int i = 0; i < _posicao_atual; ++i)
            cout << "Posicao " << i << ": " << _itens[i] << endl;

    }

    ~Pilha(){
        delete [] _itens;
    }

    void operator +=(string s){
        this->empilha(s);
    }

    string operator --(){
        return desempilha();
    }
private:

    string *_itens;
    int _posicao_atual;
    int _tamanho;

    bool overflow() {
        return _posicao_atual <= _tamanho - 1;
    }

    bool underflow() {
        return _posicao_atual == 0;
    }

};

#endif // _PILHA_H_
