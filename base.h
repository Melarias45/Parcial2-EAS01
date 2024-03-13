#ifndef base_h
#define base_h
#include <string>
#include "jugador.h"


using namespace std; 

class Base{
    public: 
    int vida, ataque; 
    string nombre; 

    Base(); 
    Base(int hp, int att, string name); 
    void atacar(Base &attacked);

}; 

#endif

