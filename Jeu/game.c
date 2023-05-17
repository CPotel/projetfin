#include "plomber.h"

void turn(Pipe* t)
{
    int temp = t->direction[3];  // Sauvegarde de la derni�re valeur

    for (int i = 3; i > 0; i--)
    {
         t->direction[i] = t->direction[i - 1];
    }

    t->direction[0] = temp;
}

Pipe* InitPipe() {

	Pipe* NewPipe;
	NewPipe = (Pipe*)malloc(sizeof(Pipe)); //Allocation de m�moire
	if (NewPipe == NULL || NewPipe->direction == NULL)
	{
		fprintf(stderr, "Allocation impossible");
		exit(EXIT_FAILURE);
	}
	int count = 0;
	/*while (count < 2) { //Tant que le tuyau n'est pas valide, on en reg�n�re un nouveau
		count = 0;
		NewPipe->direction[0] = rand() % 2; //Initialisation des sorties du tuyau
		NewPipe->direction[1] = rand() % 2; //Si 1 alors sortie, si 0 pas de sortie
		NewPipe->direction[2] = rand() % 2;
		NewPipe->direction[3] = rand() % 2;
		if (NewPipe->direction[0] == 1) count++;
		if (NewPipe->direction[1] == 1) count++;
		if (NewPipe->direction[2] == 1) count++;
		if (NewPipe->direction[3] == 1) count++;
	}*/
#ifdef test
	while (count != 2) { //Tant que le tuyau n'est pas valide, on en reg�n�re un nouveau
		count = 0;
		NewPipe->direction[0] = rand() % 2; //Initialisation des sorties du tuyau
		NewPipe->direction[1] = rand() % 2; //Si 1 alors sortie, si 0 pas de sortie
		NewPipe->direction[2] = rand() % 2;
		NewPipe->direction[3] = rand() % 2;
		if (NewPipe->direction[0] == 1) count++;
		if (NewPipe->direction[1] == 1) count++;
		if (NewPipe->direction[2] == 1) count++;
		if (NewPipe->direction[3] == 1) count++;
		//NewPipe->nbr_sorties = count;
	}
#endif
	return NewPipe;
}




Game InitGame() {
	Game game;
	//game.points = 0;

#ifdef test
	//Cr�ation du niveau
	for (int i = 0; i < 2; i++) { //Grille de 8x8
		for (int j = 0; j < 2; j++) {
			game.tab[i][j] = InitPipe();
			game.tab[i][j]->x = i;
			game.tab[i][j]->y = j;
			//game.points += game.tab[i][j]->nbr_sorties;
		}
	}
	game.size = 4;

	//Cr�ation du d�but du niveau
	int begin_x;
	int begin_y;
	int end_x;
	int end_y;
	begin_x = rand() % 2; //On cr�e la position en x de l'entr�e
	begin_y = rand() % 2;

	//Cr�ation Fin du niveau
	end_x = rand() % 2; //On cr�e la position en x de la sortie
	end_y = rand() % 2;
	while ((end_y == begin_y) && (end_x == begin_x)) InitGame();

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if ((game.tab[i][j]->x == begin_x) && (game.tab[i][j]->y == begin_y)) { //On rep�re le tuyau de d�part dans son code propre 
				game.beginning = game.tab[i][j];
			}
			if ((game.tab[i][j]->x == end_x) && (game.tab[i][j]->y == end_y)) { //On rep�re le tuyau de fin dans son code propre 
				game.end = game.tab[i][j];
			}
		}
	}

	return game;
}
#endif
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
	int begin_x;
	int begin_y;
	int end_x;
	int end_y;
	begin_x = rand() % 8; //On cr�e la position en x de l'entr�e
	if (begin_x != 0 && begin_x != 7) { //Si cette entr�e n'est pas au bord de la grille selon x, sa position y doit l'�tre
		int temp = rand() % 2;
		if (temp == 0)
		{
			begin_y = 0;
		}
		else {
			begin_y = 7;
		}
	}
	else {
		begin_y = rand() % 8;
	}

	//Cr�ation Fin du niveau
	end_x = rand() % 8; //On cr�e la position en x de la sortie
	if (end_x != 0 && end_x != 7) { //Si cette sortie n'est pas au bord de la grille selon x, sa position y doit l'�tre
		int temp = rand() % 2;
		if (temp == 0) {
			end_y = 0;
		}
		else {
			end_y = 7;
		}
	}
	else {
		end_y = rand() % 8;
	}
	while ((end_y == begin_y) && (end_x == begin_x)) InitGame();

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((game.tab[i][j]->x == begin_x) && (game.tab[i][j]->y == begin_y)) { //On rep�re le tuyau de d�part dans son code propre 
				game.beginning = game.tab[i][j];
			}
			if ((game.tab[i][j]->x == end_x) && (game.tab[i][j]->y == end_y)) { //On rep�re le tuyau de fin dans son code propre 
				game.end = game.tab[i][j];
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
int begin_x;
int begin_y;
int end_x;
int end_y;
begin_x = rand() % 15; //On cr�e la position en x de l'entr�e
if (begin_x != 0 && begin_x != 14) { //Si cette entr�e n'est pas au bord de la grille selon x, sa position y doit l'�tre
	int temp = rand() % 2;
	if (temp == 0) {
		begin_y = 0;
	}
	else {
		begin_y = 14;
	}
}
else {
	begin_y = rand() % 15;
}

//Cr�ation Fin du niveau
end_x = rand() % 15;//On cr�e la position en x de la sortie
if (end_x != 0 && end_x != 14) { //Si cette sortie n'est pas au bord de la grille selon x, sa position y doit l'�tre
	int temp = rand() % 2;
	if (temp == 0) {
		end_y = 0;
	}
	else {
		end_y = 14;
	}
}
else {
	end_y = rand() % 15;
}
while ((end_y == begin_y) && (end_x == begin_x)) InitGame();

for (int i = 0; i < 15; i++) {
	for (int j = 0; j < 15; j++) {
		if ((game.tab[i][j]->x == begin_x) && (game.tab[i][j]->y == begin_y)) { //On rep�re le tuyau de d�part dans son code propre 
			game.begin = game.tab[i][j];
		}
		if ((game.tab[i][j]->x == end_x) && (game.tab[i][j]->y == end_y)) { //On rep�re le tuyau de fin dans son code propre 
			game.end = game.tab[i][j];
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
int begin_x;
int begin_y;
int end_x;
int end_y;
begin_x = rand() % 20; //On cr�e la position en x de l'entr�e
if (begin_x != 0 && begin_x != 19) { //Si cette entr�e n'est pas au bord de la grille selon x, sa position y doit l'�tre
	int temp = rand() % 2;
	if (temp == 0) {
		begin_y = 0;
	}
	else {
		begin_y = 19;
	}
}
else {
	begin_y = rand() % 20;
}

//Cr�ation Fin du niveau
end_x = rand() % 20; //On cr�e la position en x de la sortie
if (end_x != 0 && end_x != 19) { //Si cette sortie n'est pas au bord de la grille selon x, sa position y doit l'�tre
	int temp = rand() % 2;
	if (temp == 0) {
		end_y = 0;
	}
	else {
		end_y = 19;
	}
}
else {
	end_y = rand() % 20;
}
while ((end_y == begin_y) && (end_x == begin_x)) InitGame();

for (int i = 0; i < 20; i++) {
	for (int j = 0; j < 20; j++) {
		if ((game.tab[i][j]->x = begin_x) && (game.tab[i][j]->y = begin_y)) { //On rep�re le tuyau de d�part dans son code propre 
			game.begin = game.tab[i][j];
		}
		if ((game.tab[i][j]->x == end_x) && (game.tab[i][j]->y == end_y)) { //On rep�re le tuyau de fin dans son code propre 
			game.end = game.tab[i][j];
		}
	}
}

return game;
}
#endif 