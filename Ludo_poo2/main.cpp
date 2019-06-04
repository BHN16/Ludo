#include <iostream>
#include <thread>
#include <future>
#include <string>
#include <ctime>
#include "jugador.cpp"
//friend class te ayuda a acceder a los tributos y metodos de la otra clase
//constantes del recorrido final y por el tablero 46 y 6
int main()
{
    srand(time(nullptr));//semilla para el dado
    Jugador A("aaa",32);
    return 0;
}