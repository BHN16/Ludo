//
// Created by bhn16 on 10/06/19.
//
#ifndef AVANCES_PROYECTOS_FICHA_H
#define AVANCES_PROYECTOS_FICHA_H
#include <string>
#include <utility>
#include <vector>
#include "casilla.h"

using namespace std;
class Ficha {
private:
    //Casilla* posicion;
    pair<int,int> coordenadas;
    int contador_de_recorrido;
    int numero_de_ficha;
    char estado;
    //C = casa
    //J = en juego
    //F = final
    //S = zona segura
    string color;
public:
    Ficha();
    Ficha(int num_ficha,int posx, int posy);
    void cambiar_de_ruta(int color);
    int movimiento(int n);
    void mostrar();
    void comer();
    void comido();
};


#endif //AVANCES_PROYECTOS_FICHA_H
