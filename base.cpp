#include "base.h"
#include <iostream>
#include <cstdlib>
#include<string>

using namespace std; 

Base::Base(){
    this->vida=100; 
    this->ataque=50; 
    this->nombre="desconocido";
}; 

Base::Base(int hp, int att, string name){
    this->vida=hp; 
    this->ataque=att; 
    this->nombre=name; 
}; 


void Base::atacar(Base &attacked){
    int ran = rand() % 5;
    if (ran == 0)
    {
        cout << this->nombre << " ataco a " << attacked.nombre << " pero fallo, vida restante de " << attacked.nombre << " = " << attacked.vida << endl;
    }
    else
    {
        attacked.vida -= this->ataque;
        cout << this->nombre << " ataco a " << attacked.nombre << " e hizo " << this->ataque << " de danio, vida restante de " << attacked.nombre << " = " << attacked.vida << endl;
    }

}; 

