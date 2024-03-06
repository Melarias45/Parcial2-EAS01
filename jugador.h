#ifndef jugador_h
#define jugador_h
#include <string>

using namespace std; 

class Enemigo; 
class Jugador
{
public:
    int vida, attack;
    string nombre;
    Jugador *atacadoPor;

    Jugador();
    Jugador(int vida, int attack, string nombre);
    void atacarEnemigo(Enemigo &e1); 
    void atacarJugador(Jugador &j2);
};

#endif