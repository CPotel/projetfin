#include "plomber.h"

bool isConnected(int side, Pipe* tuyau,Pipe* tab[])
{
	switch (side)
	{
		case RIGHT:
			if (tuyau->direction[3] == 0 || tab[tuyau->x + 1][tuyau->y].direction[3] == 1)	return true;
			break;
		case LEFT:
			if (tuyau->direction[1] == 0 || tab[tuyau->x - 1][tuyau->y].direction[1] == 1)	return true;
			break;
		case UP:
			if (tuyau->direction[0] == 0 || tab[tuyau->x][tuyau->y + 1].direction[2] == 1)	return true;
			break;
		case DOWN:
			if ((tuyau->direction[2] == 0 || tab[tuyau->x][tuyau->y - 1].direction[0] == 1))	return true;
			break;
	}
	return false;
}

bool isAtValidPlace(Pipe tuyau, Pipe* tab[]) {
	if (isConnected(RIGHT, &tuyau, tab) && isConnected(LEFT, &tuyau, tab) && isConnected(UP, &tuyau, tab) && isConnected(DOWN, &tuyau, tab)) return true;
	return false;
}

//bool isNextTo(Pipe tuyauA, Pipe tuyauB){''


bool isGameEnd(Pipe* tab[]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (!isAtValidPlace(tab[i][j], tab)) return false;
		}
	}
	return true;
}

/*void solution(Pipe* tab[], Pipe first) {
	while (!isGameEnd) {
		int turnTry = 0;
		while (!isAtValidPlace(first, tab) {
			turn(&first);

		}
	}
}
*/