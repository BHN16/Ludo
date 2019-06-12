//
// Created by bhn16 on 10/06/19.
//

#ifndef AVANCES_PROYECTOS_DADO_H
#define AVANCES_PROYECTOS_DADO_H

#include <ctime>
#include <cstdlib>
using namespace std;
class Dado {
private:
    int num;
    int contador_de_6;
public:
    Dado();
    int variar_num();
    void reset_de_turno();
};


#endif //AVANCES_PROYECTOS_DADO_H
