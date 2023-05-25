//Samuel Israel Medina Rodriguez
#include <iostream>
#include <windows.h>
#include <ctime>
#include <stdlib.h>
#include "Figuras.h"
#include "Cola.h"
#include "Gotoxy.h"
#include "Personas.h"


void noValor(){
    cout<< "Por favor ingrese una opcion valida. "<<endl;
    system("pasue");
    system("cls");
}

void menu(){


   Persona p;
   Objetos o;
   Cola tickets;
   Cola maletas;
   Cola abordar;
   Cola tax;
   char opcion[100];
   char respuesta[100];
   int opc, rsp;
   int cont=0;
   int distancia = 70;
   string nombre, destino;


    int id=1;
    HideCursor();

    do{


        system("cls");
        cout<< "\tAEROPUERTO INTERNACIONAL DE CUCEI "<<endl<<endl;
        cout<< "Ingrese el nombre del pasajero: ";
        cin>>nombre;
        Persona p;
        p.setNombre(nombre);
        cout<< "Ingrese destino del pasajero: ";
        cin>>destino;
        p.setDestino(destino);
        tickets.push(p);
        cont++;
        cout<< "¿Desea añadir a otro pasajero?  [1]Si   [2] No "<<endl; cin>>respuesta;
        if(rsp=atoi(respuesta)){

        }
        else{
            noValor();
        }
    }while(rsp==1);


           o.recepcion();
           tickets.movimiento(id);
           tickets.desencolarMov( distancia, cont);
           maletas=tickets.desencolarCola();
           system("cls");
           distancia=70;
           id=1;

           maletas.mostrarInfo();
           o.maletas();
           maletas.movimiento( id);
           maletas.desencolarMov( distancia, cont);
           abordar=maletas.desencolarCola();
           system("cls");
           distancia=70;
           id=1;

           o.abordaje();
           abordar.movimiento( id);
           abordar.desencolarMov( distancia, cont);
            tax=abordar.desencolarCola();
           system("cls");
           distancia=70;
           id=1;



           o.plane();
           system("cls");
           distancia=70;
           id=1;


           o.tax_stand();
           tax.movimiento(id);
           tax.fila_taxi();



}


int main(){

    menu();

    return 0;
}
