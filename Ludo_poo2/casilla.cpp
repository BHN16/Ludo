//
// Created by bhn16 on 01/06/19.
//
#include <map>
#include <vector>
#include <utility>
class Casilla{
private:
    std::map<int,std::pair<int,int>> posicion_coordenadas;
    bool disponible;
    int color;
public:
    Casilla(){};
    Casilla(int i, int x, int y, std::string _color)//indicando la posicion de las casillas en el vector
    {
        disponible = true;
        posicion_coordenadas[i] = std::make_pair(x,y);//introduce las coordenadas en el map
        // condicional para que el color de la casilla varie dependiendo de la posicion
    }
    //instanciar movimiento de la casilla
};
//crear tipos de casillas para cada array(casilla recorrido, casillas finales, casillas hogar)
