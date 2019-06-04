//
// Created by bhn16 on 01/06/19.
//
#include <string>
#include <vector>
#include <utility>
class Ficha {
private:
    int *posicion;//posicion en el vector
    std::pair<int, int> coordenadas;//posicion en la ventana de juego
    int contador_de_recorrido;//determina las casillas recorridas para llegar a la recta final
    std::string color;// determina que equipo es
public:
    Ficha(){};
};