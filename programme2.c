//Simulateur Pile ou Face
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lancers[1000];
    int countPile = 0, countFace = 0;
    float probPile, probFace;
    int i,resultat;
    srand(time(NULL));
    // Simuler les lancers de la piéce et stocker les résultats dans le tableau
    for (i = 0; i < 1000; i++) {
        resultat = rand() % 2; // 0 pour pile, 1 pour face
        lancers[i] = resultat;
        if (resultat == 0) {countPile++;}
          else {countFace++;}}
    probPile = (float)countPile / 1000;
    probFace = (float)countFace / 1000;
    // Afficher les r�sultats
    printf("Nombre de fois ou Pile a ete obtenu : %d\n", countPile);
    printf("Probabilite d'obtenir Pile : %.2f\n", probPile);
    printf("Nombre de fois ou Face a ete obtenu : %d\n", countFace);
    printf("Probabilite d'obtenir Face : %.2f\n", probFace);
    return 0;
}