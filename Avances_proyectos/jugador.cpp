//
// Created by bhn16 on 10/06/19.
//
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <iostream>
#include "ficha.h"
#include "jugador.h"
using namespace std;
Jugador::Jugador(){};
Jugador::Jugador(string _nombre, int _color,pair<int,int> a)
{
    this->color = _color;
    this->nombre = _nombre;
    int contador = 0;
    for(int i=0;i<=CANTJUG;i++){
        for(int j=0;j<=CANTJUG;j++){
            this->fichas.push_back(new Ficha(contador++,a.first+j,a.second+i));
        }
    }
    /*this->fichas.push_back(new Ficha(0,a.first,a.second));
    this->fichas.push_back(new Ficha(1,a.first+1,a.second));
    this->fichas.push_back(new Ficha(2,a.first,a.second+1));
    this->fichas.push_back(new Ficha(3,a.first+1,a.second+1));*/

}

void Jugador::jugar_dado_salir_de_casa(int num_dado)
{
    if(num_dado == 6) {
        int numero_de_ficha_a_sacar;
        cout << "Elije que ficha deseas sacar :";
        cin >> numero_de_ficha_a_sacar;
        fichas[numero_de_ficha_a_sacar]->cambiar_de_ruta();
    }
};
void Jugador::victoria() {};
void Jugador::derrota() {};
