//
// Created by bhn16 on 10/06/19.
//

#ifndef AVANCES_PROYECTOS_TABLERO_H
#define AVANCES_PROYECTOS_TABLERO_H
#include <vector>
#include <utility>
#include "casilla.h"
using namespace std;
class Tablero {
private:
    //0 = azul
    //1 = verde
    //2 = amarillo
    //3 = rojo
    vector<Casilla*> casillas_de_movimiento;
    vector<vector<Casilla*>> casillas_finales;
    vector<vector<Casilla*>> casillas_hogar;
public:
    Tablero();
    void mostrar();//coord de 15x15
    pair<int,int> get_coord_casilla_hogar(int color,int num_ficha);
    pair<int,int> get_coord_casilla_movimiento(int color);
    void inicializar_casillas_recorrido();
    void inicializar_casillas_hogar();
    void inicializar_casillas_final();
    /*vector<vector<Casilla*>> get_hogar();
    vector<vector<Casilla*>> get_finales();
    vector<Casilla*> get_movimientos();*/
};


#endif //AVANCES_PROYECTOS_TABLERO_H
