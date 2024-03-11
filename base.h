#ifndef base_h
#define base_h
#include <string>
#include "jugador.h"


using namespace std; 

class Jugador; 

class Entidad{
    public: 
    int hp, attack; 
    string name; 

    Entidad(); 
    Entidad(int vid, int att, string nam); 
    void atacarJugador(Jugador &j2);

}; 



#endif

