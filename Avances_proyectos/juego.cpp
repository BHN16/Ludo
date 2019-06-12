//
// Created by bhn16 on 10/06/19.
//
#include <iostream>
#include <vector>
#include <string>
#include "juego.h"
#include "dado.h"
#include "tablero.h"
#include "jugador.h"
using namespace std;
Juego::Juego()
{
    this->construirtablero();
    this->LlenarDatos();
}

void Juego::LlenarDatos()
{
    string Nombrejugador;
    int Color;
    mostrarMenu();
    for(int i=0;i<JUGADORES;i++)
    {
        cout<<"Jugador "<<(i+1)<<" Ingrese su Nombre: \n";
        cin>>Nombrejugador;
        cout<<"Ingrese el color que desee de la lista : \n";
        cout << "0 = azul || 1 = verde || 2 = amarillo || 3 = rojo \n";
        cin>>Color;
        crearjugadores(Nombrejugador,Color);
    }
}
//metodos
void Juego::mostrar()
{
    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 15; j++)
        {
            cout << "0" << " ";
        }
        cout << endl;
    }
}

void Juego::mostrarMenu()
{
    //sfml
    cout << "Bienvenido al ludo x, ingrese el nombre y el color";
}

void Juego::crearjugadores(string NombreJugador, int Color)
{
    switch(jugadores.size())
    {
        case 0:
            jugadores.push_back(new Jugador(NombreJugador,Color,make_pair(0,0)));
            break;
        case 1:
            jugadores.push_back(new Jugador(NombreJugador,Color,make_pair(0,13)));
            break;
        case 2:
            jugadores.push_back(new Jugador(NombreJugador,Color,make_pair(13,0)));
            break;
        case 3:
            jugadores.push_back(new Jugador(NombreJugador,Color,make_pair(13,13)));
            break;
    }
}

void Juego::construirtablero()
{
    this->tablero = new Tablero();
    this->dado = new Dado();
}

void Juego::jugar()
{
    //while()
}