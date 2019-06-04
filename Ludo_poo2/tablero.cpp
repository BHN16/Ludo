//
// Created by bhn16 on 03/06/19.
//
#include <vector>
#include "casilla.cpp"
class Tablero{
private:
//vector de 52 casillas en movimiento
    std::vector<Casilla>* casillas;
//vector de 4 vectores con clasificacion de color, estos son vectores de 7 casillas
    std::vector<std::vector<Casilla>>** final;
//4 vectores de 4 casillas donde parten los jugadores
    std::vector<std::vector<Casilla>>** casa;

public:
    Tablero()
    {
        int coord_x,coord_y;
        std::string color;
        casillas = new std::vector<Casilla>(48);
        for(int index = 0;  index < casillas->size(); index++)
        {
            casillas -> push_back(Casilla(index, coord_x, coord_y, color));
        }
    }
};
