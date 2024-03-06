#include<string>
#include "enemigo.h"
#include "jugador.h"
#include <iostream>
#include <cstdlib>

using namespace std; 


Jugador::Jugador()
{
 
    this->vida = 100;
    this->attack = 5;
    this->nombre = "No definido";
};

Jugador::Jugador(int vida, int attack, string nombre)
{
 
    this->vida = vida;
    if (vida > 200)
        this->vida = 200;
    if (vida <= 0)
        this->vida = 1;

    this->attack = attack;
    if (attack > 200)
        this->attack = 200;
    if (attack <= 0)
        this->attack = 1;

    this->nombre = nombre;
};

void Jugador::atacarJugador(Jugador &j2)
{
    int ran = rand() % 5;
    if (ran == 0)
    {
        cout << this->nombre << " ataco a " << j2.nombre << " pero fallo, vida restante de " << j2.nombre << " = " << j2.vida << endl;
    }
    else
    {
        j2.vida -= this->attack;
        cout << this->nombre << " ataco a " << j2.nombre << " e hizo " << this->attack << " de danio, vida restante de " << j2.nombre << " = " << j2.vida << endl;
    }

    j2.atacadoPor = this;
   
};

void Jugador::atacarEnemigo(Enemigo &e){
    int ran = rand() % 5;
    if (ran == 0)
    {
        cout << this->nombre << " ataco a " << e.nombre << " pero fallo, vida restante de " << e.nombre << " = " << e.vida << endl;
    }
    else
    {
        e.vida -= this->attack;
        cout << this->nombre << " ataco a " << e.nombre << " e hizo " << this->attack << " de danio, vida restante de " << e.nombre << " = " << e.vida << endl;
    }

}; 