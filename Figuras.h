#ifndef FIGURAS_H_INCLUDED
#define FIGURAS_H_INCLUDED
#include <iostream>
#include <windows.h>
#include <ctime>
#include "Gotoxy.h"

 using namespace std;

 class Objetos{
     public:
        static void recepcion();
        static void maletas();
        static void taxi(int);
        static void abordaje();
        static void plane();
        static void tax_stand();
        static void borrarTaxi();

 };

 void Objetos::recepcion(){

    gotoxy(80, 7 );cout<<"  -------------  ";
    gotoxy(80, 8); cout<<" ||  BOLETOS  || ";
    gotoxy(80, 9); cout<<" ||     o     || ";
    gotoxy(80, 10);cout<<" ||    /|\\    || ";
    gotoxy(80, 11);cout<<" ||-----------|| ";
    gotoxy(80, 12);cout<<" ||           || ";

 }

 void Objetos::maletas(){

    gotoxy(80, 7 ); cout<<"  -------------  ";
    gotoxy(80, 8);  cout<<" ||  MALETAS  || ";
    gotoxy(80, 9);  cout<<" ||     o     || ";
    gotoxy(80, 10); cout<<" ||    /|\\    || ";
    gotoxy(80, 11); cout<<" ||-----------|| ";
    gotoxy(80, 12); cout<<" ||           || ";

 }

 void Objetos::abordaje(){
    gotoxy(20, 7 );cout<<" --------------------------------------------------- ";
    gotoxy(20, 8 );cout<<" || ABORDAJE ||------------------------------------- ";
    gotoxy(20, 9 );cout<<" ";
    gotoxy(20, 10);cout<<" ";
    gotoxy(20, 11);cout<<" ";
    gotoxy(20, 13);cout<<" ___________________________________________________ ";

 }

 void Objetos::tax_stand(){

    gotoxy(80,7);  cout<<"  ------------- ";
    gotoxy(80,8);  cout<<" ||   TAXIS   ||";
    gotoxy(80,9);  cout<<" ||     o     ||";
    gotoxy(80,10); cout<<" ||    /|\\    ||";
    gotoxy(80,11); cout<<" ||-----------||";
    gotoxy(80,12); cout<<" ||           ||";

 }

 void Objetos::taxi(int i){
     //system("cls");


        gotoxy(i, 20); cout<<"        _______ ";
        gotoxy(i, 21); cout<<"       / /||  \\";
        gotoxy(i, 22); cout<<"   __ /_/_||_O_\\_____ ";
        gotoxy(i, 23); cout<<"  /   __T A X I__   ( ";
        gotoxy(i, 24); cout<<"  |__/  \\____/  \\__| ";
        gotoxy(i, 25); cout<<"     \\__/    \\__/ ";

        Sleep(50);

}

 void Objetos::borrarTaxi(){
     //system("cls");
     int ban=0;
     int i=100;


        gotoxy(i, 20); cout<<"                  ";
        gotoxy(i, 21); cout<<"                  ";
        gotoxy(i, 22); cout<<"                  ";
        gotoxy(i, 23); cout<<"                  ";
        gotoxy(i, 24); cout<<"                  ";
        gotoxy(i, 25); cout<<"                  ";

}

void Objetos::plane(){

    system("cls");
    int distancia=80;
    for(int i=0; i<=distancia; i++){

        gotoxy(i,10); cout<<"         ______";
        gotoxy(i,11); cout<<"         _\ _~-\___";
        gotoxy(i,12); cout<<"  =  = ==(____AA____D";
        gotoxy(i,13); cout<<"             \_____\___________________,-~~~~~~~`-.._";
        gotoxy(i,14); cout<<"             /     o O o o o o O O o o o o o o O o  |\_";
        gotoxy(i,15); cout<<"              `~-.__        ___..----..                )";
        gotoxy(i,16); cout<<"                   `---~~\___________/----------------´";
        gotoxy(i,17); cout<<"                   =  ===(_________D";

        Sleep(50);
    }


}





#endif // FIGURAS_H_INCLUDED
