//
// Created by bhn16 on 10/06/19.
//
#ifndef AVANCES_PROYECTOS_JUEGO_H
#define AVANCES_PROYECTOS_JUEGO_H
const int JUGADORES = 4;
const int TAMMATRIZ = 15;
#include <iostream>
#include <vector>
#include <string>
#include "dado.h"
#include "tablero.h"
#include "jugador.h"
using namespace std;
class Juego {
private:
    Tablero *tablero;
    vector<Jugador*> jugadores;
    Dado* dado;
public:
    Juego();
    void mostrar();
    void construirtablero();
    void crearjugadores(string NombreJugador, int Color);
    void LlenarDatos();
    void mostrarMenu();
    void jugar();
};


#endif //AVANCES_PROYECTOS_JUEGO_H
