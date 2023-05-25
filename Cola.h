#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include <iostream>
#include <iomanip>
using namespace std;
#include "Figuras.h"
#include "Gotoxy.h"
#include "Personas.h"

struct Nodo{
    Persona datos;
    Nodo *next;

};

class Cola{

    private:
        Nodo *frente;
        Nodo *fin;
        int tam_cola;
        int id;
    public:
        Cola(){
            this->frente=NULL;
            this->fin=NULL;
            tam_cola=0;
            id=0;
        };

        void push( Persona);
        void pop();
        bool colaVacia();
        Persona obtenerFrente();
        void movimiento( int&);
        Cola desencolarCola();
        void desencolarMov(int, int);
        void desencolarUNO(int);
        void fila_taxi();
        void mostrarInfo();

};

Persona Cola::obtenerFrente(){
    return frente->datos;
}


void Cola::movimiento( int &id){
        Nodo *aux = frente;
        int distancia = 70;

        while(aux!=NULL){

            int ban=0;
            for(int i=0;i<distancia;i++){
                gotoxy(i,9); cout<<" " <<id;
                gotoxy(i,10); cout<< "  o ";
                gotoxy(i,11); cout<< " /| \\";
                if(ban==0){
                        gotoxy(i,12); cout<< " / ";
                    ban=1;
                }else{
                    gotoxy(i,12);cout<< "   \\";
                    ban=0;
                }

                Sleep(30);
            }
        distancia-=5;
        aux=aux->next;
        id++;

        }

}


void  Cola::push(Persona p){

    p.setID(this->id++);
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->datos = p;
    nuevo_nodo->next = NULL;
    if(frente==NULL){
        frente = nuevo_nodo;
    }
    else{
        fin->next = nuevo_nodo;
    }
    fin = nuevo_nodo;

}

void Cola::pop(){

    Nodo *aux=frente;

    if(frente == fin){
        frente=NULL;
        fin = NULL;
    }
    else{
        frente=frente->next;
    }

}

Cola Cola::desencolarCola(){
    Cola c;
    while(!colaVacia()){
        c.push(this->obtenerFrente());
        this->pop();
    }

    return c;


}

void Cola::desencolarUNO(int distancia){
    Persona::eliminar(distancia);
    Sleep(50);

}

void Cola::fila_taxi(){

    Nodo *aux(frente);
    int distancia=70;
    while(aux!=NULL){
        for(int i=0; i<100; i++){
            Objetos::taxi(i);
            if(i==70){
                this->desencolarUNO(distancia);
                Sleep(70);
            }
        }
        distancia-=5;
        Objetos::borrarTaxi();
        aux=aux->next;
    }


}

void Cola::desencolarMov(int distancia, int cont){

    int pri_pos=distancia, seg_pos=distancia-5;
    Nodo* aux(frente);

    while(aux!=nullptr){
        Persona::eliminar(distancia);
        distancia-=5;
        aux=aux->next;
        Sleep(170);
    }
}

void Cola::mostrarInfo() {
    cout<<left;
    cout << setw(10)<<"Id ";
    cout << setw(20)<<"|| Nombre";
    cout << setw(10)<<"|| Destino";
    cout << setw(10)<<"|| Maletas";

    cout<<endl;
    cout<<"----------||-------------------||----------||---------"<<endl;
    Nodo* aux(frente);

    while(aux!=NULL) {
        cout << setw(10)<<aux->datos.getID() ;
        cout <<"|| "<< setw(18)<<aux->datos.getNombre();
        cout <<"|| "<< setw(10)<<aux->datos.getDestino();
        cout <<"|| "<< setw(10)<<aux->datos.getMaletas();
        cout<<endl;
        aux=aux->next;
        }

    }

bool Cola::colaVacia(){

    return (frente==NULL);
}

#endif // COLA_H_INCLUDED
