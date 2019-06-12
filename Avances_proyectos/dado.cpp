//
// Created by bhn16 on 10/06/19.
//

#include "dado.h"
using namespace std;
Dado::Dado()
{
    num = 0;
    contador_de_6 = 0;
}
int Dado::variar_num()
{
    num = rand()%7;
    if(num == 6)
    {
        contador_de_6++;
        if(contador_de_6 == 3)
        {
            //perdida de turno
            contador_de_6 = 0;
            return 0;
        }
    }
    return num;
}

void Dado::reset_de_turno()
{
    contador_de_6 = 0;
}
