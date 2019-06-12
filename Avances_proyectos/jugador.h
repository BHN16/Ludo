//
// Created by bhn16 on 10/06/19.
//
#ifndef AVANCES_PROYECTOS_JUGADOR_H
#define AVANCES_PROYECTOS_JUGADOR_H
#include <string>
#include <map>
#include <vector>
#include <utility>
#include "ficha.h"
using namespace std;
int const CANTJUG=1;

class Jugador {
private:
    vector<Ficha*> fichas;
    int color;
    string nombre;
    pair<int,int> posicion;
public:
    Jugador();
    Jugador(string _nombre, int _color,pair<int,int> a);
    void jugar_dado_salir_de_casa(int num_dado);
    void victoria();
    void derrota();
};


#endif //AVANCES_PROYECTOS_JUGADOR_H
