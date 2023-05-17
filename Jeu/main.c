#include "plomber.h"
int main() {
    srand(time(NULL));
    int k = 0;
    Game testgame;
    testgame.size = 2;
    testgame.beginning = NULL;
    testgame.end = NULL;

    Pipe* pipe1 = (Pipe*)malloc(sizeof(Pipe));
    pipe1->direction[UP] = 0;
    // Initialisation des autres membres de pipe1
    pipe1->direction[DOWN] = 1;
    pipe1->direction[LEFT] = 0;
    pipe1->direction[RIGHT] = 0;
    pipe1->x = 0;
    pipe1->y = 0;
    pipe1->previous[UP] = NULL;
    pipe1->previous[DOWN] = NULL;
    pipe1->previous[LEFT] = NULL;
    pipe1->previous[RIGHT] = NULL;

    Pipe* pipe2 = (Pipe*)malloc(sizeof(Pipe));
    pipe2->direction[UP] = 1;
    // Initialisation des autres membres de pipe2
    pipe2->direction[DOWN] = 0;
    pipe2->direction[LEFT] = 0;
    pipe2->direction[RIGHT] = 1;
    pipe2->x = 0;
    pipe2->y = 1;
    pipe2->previous[UP] = pipe1;
    pipe2->previous[DOWN] = NULL;
    pipe2->previous[LEFT] = NULL;
    pipe2->previous[RIGHT] = NULL;


    Pipe* pipe3 = (Pipe*)malloc(sizeof(Pipe));
    pipe3->direction[UP] = 1;
    // Initialisation des autres membres de pipe3
    pipe3->direction[DOWN] = 0;
    pipe3->direction[LEFT] = 1;
    pipe3->direction[RIGHT] = 0;
    pipe3->x = 1;
    pipe3->y = 1;
    pipe3->previous[UP] = NULL;
    pipe3->previous[DOWN] = NULL;
    pipe3->previous[LEFT] = pipe2;
    pipe3->previous[RIGHT] = NULL;

    Pipe* pipe4 = (Pipe*)malloc(sizeof(Pipe));
    pipe4->direction[UP] = 0;
    // Initialisation des autres membres de pipe4
    pipe4->direction[DOWN] = 1;
    pipe4->direction[LEFT] = 0;
    pipe4->direction[RIGHT] = 0;
    pipe4->x = 1;
    pipe4->y = 0;
    pipe4->previous[UP] = NULL;
    pipe4->previous[DOWN] = pipe3;
    pipe4->previous[LEFT] = NULL;
    pipe4->previous[RIGHT] = NULL;
    // Assignation des pointeurs dans testgame.tab
    testgame.tab[0][0] = pipe1;
    testgame.tab[0][1] = pipe2;
    testgame.tab[1][1] = pipe3;
    testgame.tab[1][0] = pipe4;

    // Assignation des pointeurs beginning et end dans testgame
    testgame.beginning = pipe1;
    testgame.end = pipe4;

    if (solveGame(&testgame)) {
        printf("Le jeu a été résolu avec succès!\n");
    }
    else {
        printf("Aucune solution trouvée pour le jeu.\n");
    }

    // Libération de la mémoire
    free(pipe1);
    free(pipe2);
    free(pipe3);
    free(pipe4);

    return 0;
}
