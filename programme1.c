/* programme donne le nombre de fois ou on obtient 
la somme minimale ( 1+ 1) et la valeur maximale ( 6 + 6).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i,MinSum = 0,MaxSum = 0,n1,n2,sum;
    srand(time(0));
    for (i = 0; i < 100; i++){
        n1 = rand() % 6 + 1; // Lancer du dé 1 (valeur entre 1 et 6)
        n2 = rand() % 6 + 1; // Lancer du dé 2 (valeur entre 1 et 6)
        sum = n1 + n2;
        if (sum == 2) {MinSum++;}
           else if (sum == 12) {MaxSum++;}
        printf("Lancer %d : De 1 = %d, De 2 = %d, Somme = %d\n", i+1,n1,n2,sum);
    }
    printf("Nombre de fois ou la somme minimale (1+1) a ete obtenue : %d\n",MinSum);
    printf("Nombre de fois ou la somme maximale (6+6) a ete obtenue : %d\n",MaxSum);
    return 0;
}