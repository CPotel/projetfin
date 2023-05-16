#include "plomber.h"

//Cr�ation d'un tuyau

Pipe* InitPipe() {
	Pipe* NewPipe;
	NewPipe = (Pipe*)malloc(sizeof(Pipe)); //Allocation de m�moire
	if (NewPipe != NULL && NewPipe->direction != NULL) {
		int count = 0;
		while (count < 2) { //Tant que le tuyau n'est pas valide, on en reg�n�re un nouveau
			count = 0;
			NewPipe->direction[0] = rand() % 2; //Initialisation des sorties du tuyau
			NewPipe->direction[1] = rand() % 2; //Si 1 alors sortie, si 0 pas de sortie
			NewPipe->direction[2] = rand() % 2;
			NewPipe->direction[3] = rand() % 2;
			if (NewPipe->direction[0] == 1) count++;
			if (NewPipe->direction[1] == 1) count++;
			if (NewPipe->direction[2] == 1) count++;
			if (NewPipe->direction[3] == 1) count++;
		}
	}
	return NewPipe;
}

Game InitGame() {
	Game game;
#ifdef easy
	//Cr�ation du niveau
	for (int i = 0; i < 8; i++) { //Grille de 8x8
		for (int j = 0; j < 8; j++) {
			game.tab[i][j] = InitPipe();
			game.tab[i][j]->x = i;
			game.tab[i][j]->y = j;
		}
	}
	game.size = 64;

	//Cr�ation du d�but du niveau
	game.beginning_x = rand() % 8; //On cr�e la position en x de l'entr�e
	if (game.beginning_x != 0 && game.beginning_ != 7) { //Si cette entr�e n'est pas au bord de la grille selon x, sa position y doit l'�tre
		int temp = rand() % 2;
		if (temp == 0) game.beginning_y = 0;
		else game.beginning_y = 7;
	}
	else game.beginning_y = rand() % 8;

	//Cr�ation Fin du niveau
	game.end_x = rand() % 8; //On cr�e la position en x de la sortie
	if (game.end_x != 0 && game.end_x != 7) { //Si cette sortie n'est pas au bord de la grille selon x, sa position y doit l'�tre
		int temp = rand() % 2;
		if (temp == 0) game.end_y = 0;
		else game.end_y = 7;
	}
	else game.end_y = rand() % 8;
	while ((game.end_y == game.beginning_y) && (game.end_x == game.beginning_x)) InitGame();

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((game.tab[i][j]->x = game.beginning_x) && (game.tab[i][j]->y = game.beginning_y)) { //On rep�re le tuyau de d�part dans son code propre 
				game.tab[i][j]->start = 1;
				game.tab[i][j]->end = 0;
			}
			if ((game.tab[i][j]->x = game.end_x) && (game.tab[i][j]->y = game.end_y)) { //On rep�re le tuyau de fin dans son code propre 
				game.tab[i][j]->start = 0;
				game.tab[i][j]->end = 1;
			}
			else {
				game.tab[i][j]->start = 0;
				game.tab[i][j]->end = 0;
			}
		}
	}

	return game;
}
#endif
#ifdef intermediate
//Cr�ation du niveau
for (int i = 0; i < 15; i++) {
	for (int j = 0; j < 15; j++) {
		game.tab[i][j] = InitPipe();
		game.tab[i][j]->x = i;
		game.tab[i][j]->y = j;
	}
}

//Cr�ation du d�but du niveau
game.beginning_x = rand() % 15; //On cr�e la position en x de l'entr�e
if (game.beginning_x != 0 && game.beginning_x != 14) { //Si cette entr�e n'est pas au bord de la grille selon x, sa position y doit l'�tre
	int temp = rand() % 2;
	if (temp == 0) game.beginning_y = 0;
	else game.beginning_y = 14;
}
else game.beginning_y = rand() % 15;

//Cr�ation Fin du niveau
game.end_x = rand() % 15;//On cr�e la position en x de la sortie
if (game.end_x != 0 && game.end_x != 14) { //Si cette sortie n'est pas au bord de la grille selon x, sa position y doit l'�tre
	int temp = rand() % 2;
	if (temp == 0) game.end_y = 0;
	else game.end_y = 14;
}
else game.end_y = rand() % 15;
while ((game.end_y == game.beginning_y) && (game.end_x == game.beginning_x)) InitGame();

for (int i = 0; i < 15; i++) {
	for (int j = 0; j < 15; j++) {
		if ((game.tab[i][j]->x = game.beginning_x) && (game.tab[i][j]->y = game.beginning_y)) { //On rep�re le tuyau de d�part dans son code propre 
			game.tab[i][j]->start = 1;
			game.tab[i][j]->end = 0;
		}
		if ((game.tab[i][j]->x = game.end_x) && (game.tab[i][j]->y = game.end_y)) { //On rep�re le tuyau de fin dans son code propre 
			game.tab[i][j]->start = 0;
			game.tab[i][j]->end = 1;
		}
		else {
			game.tab[i][j]->start = 0;
			game.tab[i][j]->end = 0;
		}
	}
}

return game;
}
#endif

#ifdef hard

//Cr�ation du niveau
for (int i = 0; i < 20; i++) {
	for (int j = 0; j < 20; j++) {
		game.tab[i][j] = InitPipe();
		game.tab[i][j]->x = i;
		game.tab[i][j]->y = j;

	}
}

//Cr�ation d�but du niveau
game.beginning_x = rand() % 20; //On cr�e la position en x de l'entr�e
if (game.beginning_x != 0 && game.beginning_x != 19) { //Si cette entr�e n'est pas au bord de la grille selon x, sa position y doit l'�tre
	int temp = rand() % 2;
	if (temp == 0) game.beginning_y = 0;
	else game.beginning_y = 19;
}
else game.beginning_y = rand() % 20;

//Cr�ation Fin du niveau
game.end_x = rand() % 20; //On cr�e la position en x de la sortie
if (game.end_x != 0 && game.end_x != 19) { //Si cette sortie n'est pas au bord de la grille selon x, sa position y doit l'�tre
	int temp = rand() % 2;
	if (temp == 0) game.end_y = 0;
	else game.end_y = 19;
}
else game.end_y = rand() % 20;
while ((game.end_y == game.beginning_y) && (game.end_x == game.beginning_x)) InitGame();

for (int i = 0; i < 20; i++) {
	for (int j = 0; j < 20; j++) {
		if ((game.tab[i][j]->x = game.beginning_x) && (game.tab[i][j]->y = game.beginning_y)) { //On rep�re le tuyau de d�part dans son code propre 
			game.tab[i][j]->start = 1;
			game.tab[i][j]->end = 0;
		}
		if ((game.tab[i][j]->x = game.end_x) && (game.tab[i][j]->y = game.end_y)) { //On rep�re le tuyau de fin dans son code propre 
			game.tab[i][j]->start = 0;
			game.tab[i][j]->end = 1;
		}
		else {
			game.tab[i][j]->start = 0;
			game.tab[i][j]->end = 0;
		}
	}
}

return game;
}
#endif

void main() {
	srand(time(NULL));
	//TESTS
	Pipe* test = InitPipe();
	printf("Right is %d", test->direction[1]);
	printf("Left is %d", test->direction[3]);
	printf("Up is %d", test->direction[0]);
	printf("Down is %d\n", test->direction[2]);
	Game game_test = InitGame();
	printf("Les coordonn�es du tuyau d'entr�e sont [%d,%d]\n", game_test.beginning_x, game_test.beginning_y);
	printf("Les coordonn�es du tuyau d'entr�e sont [%d,%d]\n", game_test.end_x, game_test.end_y);
	//FIN TESTS
}