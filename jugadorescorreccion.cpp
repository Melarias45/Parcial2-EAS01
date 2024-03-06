#include <iostream>
#include <string>
#include <cstdlib>  // Función rand().
#include <ctime>    // Función time() para generar una nueva seed aleatoria.
using namespace std;

#define log(x) cout << x << endl;

class Jugador{
    /*
        Agrega propiedades para guardar la vida(número entero), ataque(número entero) y nombre del jugador.
        Agrega una propiedad para guardar el jugador que lo atacó por última vez.
    */
public: 
   int vida, ataque; 
   string nombre; 
   Jugador* atacadopor; 

    Jugador(); 
    Jugador(int hp, int att, string name); 
    
    void atacar(Jugador &j); //para que se modifique el valor realmente y que puda disminuir la vida, tambien se podia con un apuntador. 
};

int main()
{
    srand(time(0));  // Seed para generar valores aleatorios
    
    /*
        Crear al menos 2 jugadores con diferentes nombres, vida y ataque. 
        Los jugadores deben atacarse entre sí, tomando turnos, hasta que uno pierda toda su vida.
        En cuanto la vida del jugador se reduzca a 0 el programa muestra al ganador y se termina. 
        No importa quien ataca primero.
    */

   Jugador j1(50,5,"Mel"); 
   Jugador j2(30,7,"Andy"); 
   

   
        
        j2.atacar(j1);
        
        while(j1.vida>0&&j2.vida>0){
            j1.atacar(j2); 
        }

        
        if(j2.vida==0){
        cout<<"El jugador "<<j1.nombre<<" ha ganado!"<<endl; 
        }

        if(j1.vida==0){
        cout<<"El jugador "<<j2.nombre<<" ha ganado!"<<endl; 
         }
    

    return 0;
}

Jugador::Jugador(){
    /*
        Asignar 100 a hp y 5 a attack como valores default.
        Asignar 'No definido' al nombre como default.
    */
   this->vida=100; 
   this->ataque=5; 
   this->nombre="no definido"; 

}; 

Jugador::Jugador(int hp, int att, string name){
    /*
        Asignar los parámetros recibidos a las propiedades del objeto.
        No se pueden asignar valores negativos a hp y attack.
        Máximo 200 hp y 20 attack
    */
   if(hp>0&&hp<=200){
        this->vida=hp; 
   }
   else{
        this->vida=1; 
   }

   if(att>0&&att<=20){
        this->ataque=att;  
   }
   else{
        this->ataque=1;   
   }
   
   this->nombre=name; 

}

void Jugador::atacar(Jugador &j){
    /*
        El jugador atacado(el que recibes como parámetro) pierde HP igual al ataque del jugador que ataca.
        Existe un 20% de probabilidad de que el ataque falle y no haga daño.
        Se debe mostrar lo que pasó en cada ataque:
        nombre1 atacó a nombre2 e hizo 5 de daño, vida restante de nombre2 = 95
        nombre2 atacó a nombre1 pero fallo, vida restante de nombre1 = 100
        El jugador que atacó debe quedar guardar en la propiedad atacadoPor del jugador atacado.
    */
    
   int x = rand() % 5;

    if(x>0){ //porque el 20% de 999 es 199.8
        j.vida-=ataque; 
        cout<<nombre<<" ataco a "<<j.nombre<<" e hizo "<<ataque<<" de danio, vida restante de "<<j.nombre<<" = "<<j.vida<<endl;
        
    }
    else{
         cout<<nombre<<" ataco a "<<j.nombre<<" pero falló!, vida restante de "<<j.nombre<<" = "<<j.vida<<endl; 
    }
    
    j.atacadopor=this; 

    /*
    Nota:
        int x = rand() % 1000; asigna un valor aleatorio entre 0 y 999 a x;
        Puedes usar esto para la probabilidad del ataque.
    */
}