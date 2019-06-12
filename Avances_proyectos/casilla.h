//
// Created by bhn16 on 10/06/19.
//
#ifndef AVANCES_PROYECTOS_CASILLA_H
#define AVANCES_PROYECTOS_CASILLA_H
#include <map>
#include <vector>
#include <utility>
#include <string>
using namespace std;
class Casilla {
protected:
    pair<int,int> posicion_coordenadas;
    int posicion_en_vector;
public:
    Casilla();
    Casilla(int i, int x, int y);
    pair<int,int> get_coord();
};

class Casilla_hogar_final: public Casilla{
private:
    int color;
public:
    Casilla_hogar_final(int color, int pos_vector, int x, int y);
};

class Casilla_de_recorrido : public Casilla{
private:
    bool disponible;
public:
    Casilla_de_recorrido(int pos_vector, int x, int y);
};
#endif //AVANCES_PROYECTOS_CASILLA_H