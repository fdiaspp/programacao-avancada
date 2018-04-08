
#ifndef _CLIENTE_H_
#define _CLIENTE_H_

#include <string>

using namespace std;

class Cliente {

public:
    Cliente(string nome) : _nome(nome) {
        // construtor Vazio
    }

    void setNome(string nome){
        _nome = nome;
    }

    string getNome(){
        return _nome;
    }

private:
    string _nome;

};

#endif // _CLIENTE_H_