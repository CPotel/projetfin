#include "plomber.h"

bool isConnected(int side, Pipe* tuyau,Pipe* tab[])
{
    switch (side)
    {
    case RIGHT:
        if (tuyau->x < SIZE - 1 && (tuyau->direction[RIGHT] == 0 || tab[tuyau->x - 1][tuyau->y].direction[LEFT] == 1))
            return true;
        break;
    case LEFT:
        if (tuyau->x >= 0 && (tuyau->direction[LEFT] == 0 || tab[tuyau->x + 1][tuyau->y].direction[RIGHT] == 1))
            return true;
        break;
    case UP:
        if (tuyau->y < SIZE - 1 && (tuyau->direction[UP] == 0 || tab[tuyau->x][tuyau->y - 1].direction[DOWN] == 1))
            return true;
        break;
    case DOWN:
        if (tuyau->y >= 0 && (tuyau->direction[DOWN] == 0 || tab[tuyau->x][tuyau->y + 1].direction[UP] == 1))
            return true;
        break;
    }

	return false;
}

bool isAtValidPlace(Pipe tuyau, Pipe* tab[]) {
	if (isConnected(RIGHT, &tuyau, tab) && isConnected(LEFT, &tuyau, tab) && isConnected(UP, &tuyau, tab) && isConnected(DOWN, &tuyau, tab)) return true;
	return false;
}


bool isGameEnd(Pipe* tab[]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (!isAtValidPlace(tab[i][j], tab)) return false;
		}
	}
	return true;
}

bool solveGameDFS(Pipe* current, Pipe* tab[]) {
    int i = 0;
    if (isGameEnd(tab)) {
        // Le jeu est terminé, une solution a été trouvée
        return true;
    }

    // Parcours de toutes les directions possibles
    for (int i = 0; i < 4; i++) {
        if (current->direction[i] && current->previous[i] == NULL) {
            // Si le tuyau est ouvert dans cette direction et le chemin précédent est libre
            Pipe* next = &tab[current->x][current->y];
            if (isConnected(i, next, tab)) {
                // Si le tuyau suivant est connecté
                current->previous[i] = next;
                next->previous[(i + 2) % 4] = current;

                // Appel récursif pour continuer l'exploration
                if (solveGameDFS(next, tab)) {
                    return true;
                }

                // Si la solution n'a pas été trouvée, réinitialise les chemins précédents
                current->previous[i] = NULL;
                next->previous[(i + 2) % 4] = NULL;
            }
        }
    }

    return false;
}

bool solveGame(Game* game) {
    // Appelle l'algorithme de résolution en profondeur (DFS)
    return solveGameDFS(game->beginning, game->tab);
}