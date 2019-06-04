//
// Created by bhn16 on 28/05/19.
//
#include <string>
#include <map>
#include <vector>
#include "ficha.cpp"
class Jugador{
private:
    std::vector<Ficha>* fichas;
    //asumiendo que el sfml pueda recibir como parametro colores en numeros
    int color;
    std::string nombre;
    std::map <int, int[2]> posicion;
public:
    Jugador();
    Jugador(std::string _nombre, int _color)
    {
        this -> color = _color;
        this -> nombre = _nombre;
        this -> fichas = new std::vector<Ficha>(4);
    }
};


