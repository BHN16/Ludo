//
// Created by bhn16 on 01/06/19.
//
#include <iostream>
#include "jugador.cpp"
#include "dado.cpp"
#include "tablero.cpp"
class Juego{
protected:
    Tablero tablero;
    Jugador* jugadores;
    Dado dado;
public:
    Juego();
    Juego(int n)
    {
        //crear array de jugadores
        std::string nombre;
        std::cin >> nombre;
        int _color = 9;
        jugadores = new Jugador[n];
        for(int i = 0; i < n; i++)
        {
            jugadores[i] = Jugador(nombre,_color);
        }

    }
};
