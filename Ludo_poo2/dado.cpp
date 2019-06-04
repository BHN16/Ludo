//
// Created by bhn16 on 01/06/19.
//
#include <ctime>
#include <cstdlib>
class Dado{
private:
    int num;
    int contador_de_6;
public:
    Dado()
    {
        num = 0;
        contador_de_6 = 0;
    }
    //se llama cada turno para poder variar el contador
    int variar_num()
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

    void Reset_de_turno()
    {
        contador_de_6 = 0;
    }
};
