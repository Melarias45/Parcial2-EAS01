#ifndef enemigo_h
#define enemigo_h
#include "jugador.h"


class Enemigo{
public: 
    int vida, ataque; 
    string nombre; 

    Enemigo(); 
    Enemigo(int hp, int att, string name); 
    void atacarJugador(Jugador &j); 


}; 



#endif