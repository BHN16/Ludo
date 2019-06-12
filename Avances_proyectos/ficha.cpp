//
// Created by bhn16 on 10/06/19.
//
#include "ficha.h"
#include <vector>
#include <string>
#include <utility>
int const NUMERO_DE_CASILLAS_POR_AVANZAR = 52;
using namespace std;
Ficha::Ficha(){};
Ficha::Ficha(int num_ficha, int posx,int posy)
{
    coordenadas = make_pair(posx,posy);
    this->estado = 'C';
    this->numero_de_ficha = num_ficha;
}

int Ficha::movimiento(int n)
{
    contador_de_recorrido = contador_de_recorrido + n;
    return contador_de_recorrido;
}

void Ficha::mostrar()
{

}

void Ficha::comer()
{

}

void Ficha::comido()
{

}

void Ficha::cambiar_de_ruta(int color)
{
    if(color == 0)
    {
        this->coordenadas = make_pair(1,6);
    }
    if(color == 1)
    {
        this->coordenadas = make_pair(9,1);
    }
    if(color == 2)
    {
        this->coordenadas = make_pair(14,7);
    }
    if(color == 3)
    {
        this->coordenadas = make_pair(6,13);
    }
}