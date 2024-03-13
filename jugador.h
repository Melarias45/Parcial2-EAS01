#ifndef jugador_h
#define jugador_h
#include "base.h"
#include <string>

using namespace std; 

class Jugador: public Base{
public:
    Jugador *atacadoPor;

    Jugador():Base(){
        this->atacadoPor=nullptr; 
    } 
    Jugador(int vid, int att, string nam): Base (vida,ataque,nombre){
        this->atacadoPor=nullptr; 
    }
    Jugador(int vid, int att); 

    void atacarJugador(Jugador &j2);
};

#endif