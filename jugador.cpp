#include <string>
#include "jugador.h"
#include <iostream>
#include <cstdlib>

using namespace std; 

Jugador::Jugador(int vid, int att):Base(vida,ataque,"no definido"){
    this->atacadoPor=nullptr; 
}

void Jugador::atacarJugador(Jugador &j2)
{
    atacar(j2); 
    j2.atacadoPor = this;
};

