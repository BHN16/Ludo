//
// Created by bhn16 on 10/06/19.
//
#include <map>
#include <vector>
#include <utility>
#include "casilla.h"
using namespace std;
Casilla::Casilla(){};
Casilla::Casilla(int pos_vector, int x, int y)
{
    posicion_en_vector = pos_vector;
    posicion_coordenadas = make_pair(x,y);
}
pair<int,int> Casilla::get_coord()
{
    return posicion_coordenadas;
}
Casilla_de_recorrido::Casilla_de_recorrido(int pos_vector, int x, int y) : Casilla(pos_vector,x,y)
{
    this->disponible = true;
}

Casilla_hogar_final::Casilla_hogar_final(int color,int pos_vector,int x,int y) : Casilla(pos_vector,x,y)
{
    this->color = color;
}

