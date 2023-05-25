#ifndef GOTOXY_H_INCLUDED
#define GOTOXY_H_INCLUDED
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}

void HideCursor(){
    CONSOLE_CURSOR_INFO cursor;
    cursor.bVisible = FALSE;
    cursor.dwSize = sizeof(cursor);
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorInfo(handle, &cursor);
}

void movimiento(int id, int distancia){

    system("cls");
        int ban=0;
        for(int i=0;i<distancia;i++){
            gotoxy(i,9); cout<<id;
            gotoxy(i,10); cout<< "  o";
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

            system("pause>>cls");


}




#endif // GOTOXY_H_INCLUDED
