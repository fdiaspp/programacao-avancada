
#ifndef _PONTO_H_
#define _PONTO_H_

#include <iostream>

using namespace std;

class Ponto{

public:

    Ponto(int x, int y) : _x(x),
                          _y(y) {

        // Construtor Vazio

    }


    Ponto* operator+ (Ponto dir){
        this->_x += dir._x;
        this->_y += dir._y;

        return this;
    }

    Ponto* operator- (Ponto dir){
        this->_x -= dir._x;
        this->_y -= dir._y;

        return this;
    }

    Ponto* operator* (Ponto dir){
        this->_x *= dir._x;
        this->_y *= dir._y;

        return this;
    }

    Ponto* operator* (int e){
        this->_x *= e;
        this->_y *= e;

        return this;
    }

    int operator[] (int index){

        if(index == 1)
            return this->_y;
        else
            return this->_x;
    }



    void imprime(){
        cout << "Ponto (x = " << _x << ", y = " << _y << ")" << endl;
    }


private:
    int _x;
    int _y;

};

#endif // _PONTO_H_
