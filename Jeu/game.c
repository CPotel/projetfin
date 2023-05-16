#include "plomber.h"

void turn(Pipe* t)
{
    int temp = t->direction[3];  // Sauvegarde de la dernière valeur

    for (int i = 3; i > 0; i--)
    {
         t->direction[i] = t->direction[i - 1];
    }

    t->direction[0] = temp;
}
