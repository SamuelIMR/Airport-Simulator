#ifndef PERSONAS_H_INCLUDED
#define PERSONAS_H_INCLUDED
#include <cstdlib>
#include <random>
#include <chrono>
using namespace std;

class Persona{

    private:
        std::string nombre;
        std::string destino;
        int id;
        int maletas;

    public:
        Persona();

        void setID(int);
        void setMaletas();
        void setNombre(std::string);
        void setDestino(std::string);

        int getID();
        int getMaletas();
        std::string getNombre();
        std::string getDestino();

        void movimiento(int , int);
        static void eliminar(int);

};

void Persona::setNombre(std::string n){
    this->nombre = n;
}

void Persona::setDestino(std::string d){
    this->destino = d;
}

int Persona::getID(){
    return this->id=rand();
}

void Persona::setID(int i){
    this->id;
}
int Persona::getMaletas()
{
    return maletas;
}

string Persona::getNombre()
{
    return nombre;
}

string Persona::getDestino()
{
    return destino;
}



void Persona::setMaletas(){
    std::uniform_int_distribution<int> distribution(1,10);
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    this->maletas=distribution(generator);
}



void Persona::eliminar(int distancia){
    gotoxy(distancia,9);cout<<"      ";
    gotoxy(distancia,10);cout<< "     ";
    gotoxy(distancia,11); cout<< "     ";
    gotoxy(distancia,12); cout<< "     ";

}

Persona::Persona(){

    this->setMaletas();

}



#endif // PERSONAS_H_INCLUDED

