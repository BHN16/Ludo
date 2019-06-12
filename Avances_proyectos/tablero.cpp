//
// Created by bhn16 on 10/06/19.
//
#include <vector>
#include <string>
#include <utility>
#include "tablero.h"
int const CASILLA_AZUL_VERDE=5;
int const CASILLA_AZUL=8;
int const CASILLA_VERDE = 6;
int const CASILLA_AMARILLO = 9;
int const CASILLA_ROJO = 14;
using namespace std;
Tablero::Tablero()
{
    this->inicializar_casillas_recorrido();
    this->inicializar_casillas_hogar();
    this->inicializar_casillas_final();
}
pair<int,int> Tablero::get_coord_casilla_hogar(int color,int num_ficha)
{
    pair<int,int> coord_para_fichas = casillas_hogar[color][num_ficha]->get_coord();
    return coord_para_fichas;
}
pair<int,int> Tablero::get_coord_casilla_movimiento(int color)
{
    pair<int,int> coord_casillas_movimiento;
    if(color == 0)
    {
        //coord_casillas_movimiento = make_pair(1,6);
        return casillas_de_movimiento[8]->get_coord();
    }
    if(color == 1)
    {
        //coord_casillas_movimiento = make_pair(8,1);
        return casillas_de_movimiento[21]->get_coord();
    }
    if(color == 2)
    {
        //coord_casillas_movimiento = make_pair(13,8);
        return casillas_de_movimiento[34]->get_coord();
    }
    if(color == 3)
    {
        //coord_casillas_movimiento = make_pair(6,13);
        return casillas_de_movimiento[47]->get_coord();
    }
}

void Tablero::inicializar_casillas_final()
{
    for(int i = 0; i < 4; i++)
    {
        vector<Casilla*> aux;
        int x_or_y = 8;
        for(int j = 0; j < 6; j++)
        {
            if(i == 0)
            {
                aux.push_back(new Casilla_hogar_final(i, j, (j + 1), x_or_y));
            }
            if(i == 1)
            {
                aux.push_back(new Casilla_hogar_final(i, j, x_or_y, (j + 1)));
            }
            if(i == 2)
            {
                aux.push_back(new Casilla_hogar_final(i, j, (13-j),x_or_y));
            }
            if(i == 3)
            {
                aux.push_back(new Casilla_hogar_final(i, j, x_or_y,(13-j)));
            }
        }
        casillas_finales.push_back(aux);
    }
}

void Tablero::inicializar_casillas_hogar()
{
    for(int i = 0; i < 4; i++)
    {
        vector<Casilla*> aux_2;
        for(int j = 0; j < 4; j++)
        {
            if(i == 0)
            {
                for(int k=0;k<=1;k++)
                {
                    for(int l=0;l<=1;l++)
                    {
                        aux_2.push_back(new Casilla_hogar_final(i,j,k,l));
                    }
                }
            }
            if(i == 1)
            {
                for(int k=0;k<=1;k++)
                {
                    for(int l=0;l<=1;l++)
                    {
                        aux_2.push_back(new Casilla_hogar_final(i,j,k,(l+13)));
                    }
                }
            }
            if(i == 2)
            {
                for(int k=0;k<=1;k++)
                {
                    for(int l=0;l<=1;l++)
                    {
                        aux_2.push_back(new Casilla_hogar_final(i,j,(k+13),(l+13)));
                    }
                }
            }
            if(i == 3)
            {
                for(int k=0;k<=1;k++)
                {
                    for(int l=0;l<=1;l++)
                    {
                        aux_2.push_back(new Casilla_hogar_final(i,j,(k+13),l));
                    }
                }
            }
        }
        casillas_hogar.push_back(aux_2);
    }
}

void Tablero::inicializar_casillas_recorrido()
{
    int cont_azul = 0;
    int cont_verde = 0;
    int cont_amarillo = 0;
    int cont_rojo = 0;
    int aux_amarillo = 0;
    int aux_rojo = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            if(i == 0)
            {
                if((CASILLA_AZUL_VERDE-j)<=0)
                {
                    if((CASILLA_AZUL-cont_azul)<6)
                    {
                        casillas_de_movimiento.push_back(new Casilla_de_recorrido(j,(j-7),CASILLA_VERDE));
                    }
                    casillas_de_movimiento.push_back(new Casilla_de_recorrido(j,0,(CASILLA_AZUL-cont_azul)));
                    cont_azul++;
                }
                casillas_de_movimiento.push_back(new Casilla_de_recorrido(j,(CASILLA_AZUL_VERDE-j),CASILLA_AZUL));
            }
            if(i == 1)
            {
                if((CASILLA_AZUL-j)<=0)
                {
                    if((CASILLA_VERDE+cont_verde)>9)
                    {
                        casillas_de_movimiento.push_back(new Casilla_de_recorrido((13+j),CASILLA_AZUL,(j-7)));
                    }
                    casillas_de_movimiento.push_back(new Casilla_de_recorrido((13+j),(CASILLA_VERDE+cont_verde),0));
                    cont_verde++;
                }
                casillas_de_movimiento.push_back(new Casilla_de_recorrido((13+j),CASILLA_VERDE,(CASILLA_AZUL-j)));
            }
            if(i == 2)
            {
                if((j+CASILLA_AMARILLO)>=14)
                {
                    if((CASILLA_VERDE+cont_amarillo)>14)
                    {
                        casillas_de_movimiento.push_back(new Casilla_de_recorrido((j+26),(13-aux_amarillo),CASILLA_AZUL));
                        aux_amarillo++;
                    }
                    casillas_de_movimiento.push_back(new Casilla_de_recorrido((j+26),CASILLA_ROJO,(CASILLA_VERDE+cont_amarillo)));
                    cont_amarillo++;
                }
                casillas_de_movimiento.push_back(new Casilla_de_recorrido((j+26),(j+CASILLA_AMARILLO),CASILLA_VERDE));
            }
            if(i == 3)
            {
                if((CASILLA_AMARILLO+j)>=14)
                {
                    if((CASILLA_AZUL-cont_amarillo)<6)
                    {
                        casillas_de_movimiento.push_back(new Casilla_de_recorrido((j+39),CASILLA_VERDE,(13-aux_rojo)));
                        aux_rojo++;
                    }
                    casillas_de_movimiento.push_back(new Casilla_de_recorrido((j+39),(CASILLA_AZUL-cont_rojo),CASILLA_ROJO));
                    cont_rojo++;
                }
                casillas_de_movimiento.push_back(new Casilla_de_recorrido((j+39),CASILLA_AZUL,(CASILLA_AMARILLO+j)));
            }
        }
    }
}
