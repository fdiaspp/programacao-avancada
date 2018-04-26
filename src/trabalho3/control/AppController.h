#ifndef _APPCONTROLLER_H_
#define _APPCONTROLLER_H_

#include "../view/AppView.h"

class AppController{

public:
    AppController();
    void executa();

private:
    AppView _view;

    void testePilha();
    void atividade2();
    void testePonto();

};

#endif // _APPCONTROLLER_H_
