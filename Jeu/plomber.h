#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#define RIGHT 1
#define UP 2
#define LEFT 3
#define DOWN 4
#define SIZE 8
#define easy

/*-------------------------------------------------------------------------------------------*/
/*----------------------------------Définition des types-------------------------------------*/
/*-------------------------------------------------------------------------------------------*/

typedef struct pipe {
    int direction[4]; // [right,up,left,down]
    int x;
    int y;
    struct pipe* previous[4]; //[right, up, left,down] pointeur sur le précédent si le tuyau est ouvert a cet endroit, sinon NULL
}Pipe;

typedef struct game {
    int size; //Taille de la grille de niveau
#ifdef easy
    struct pipe* tab[8][8];
#endif
#ifdef intermediate
    struct pipe* tab[15][15];
#endif
#ifdef hard
    struct pipe* tab[20][20];
#endif
    Pipe* beginning;
    Pipe* end;
}Game;




/*-------------------------------------------------------------------------------------------*/
/*--------------------------------Définition des fonctions-----------------------------------*/
/*-------------------------------------------------------------------------------------------*/

void turn(Pipe* t);
//void solution(Pipe* tab[], Pipe first);
bool isConnected(int side, Pipe* tuyau);
bool isAtValidPlace(Pipe tuyau, Pipe* tab[]);
bool isGameEnd(Pipe* tab[]);
Pipe* InitPipe();
Game InitGame();
