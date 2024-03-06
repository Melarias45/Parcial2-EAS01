#include<string>
#include "enemigo.h"
#include "jugador.h"
#include <iostream>
#include <cstdlib>

using namespace std; 


Enemigo::Enemigo(){
    this->vida=100; 
    this->ataque=50; 
    this->nombre="desconocido";
}; 

Enemigo::Enemigo(int hp, int att, string name){
    this->vida=hp; 
    this->ataque=att; 
    this->nombre=name; 
}; 

void Enemigo::atacarJugador(Jugador &j){
    int ran = rand() % 5;
    if (ran == 0)
    {
        cout << this->nombre << " ataco a " << j.nombre << " pero fallo, vida restante de " << j.nombre << " = " << j.vida << endl;
    }
    else
    {
        j.vida -= this->ataque;
        cout << this->nombre << " ataco a " << j.nombre << " e hizo " << this->ataque << " de danio, vida restante de " << j.nombre << " = " << j.vida << endl;
    }

}; 

