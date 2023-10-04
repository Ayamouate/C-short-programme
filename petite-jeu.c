/*Notre jeu consiste `a deviner un nombre tir ́e au hasard entre 1 et 100 par l’ordinateur.
Vous aurez jusqu’`a 10 tentatives pour trouver cette valeur. Chaque fois que vous entrez une
valeur vous aurez une indication comme quoi votre valeur est sup ́erieure ou inf ́erieure `a celle
tir ́ee au hasard par l’ordinateur.*/
#include<stdio.h>
#include<time.h>

int main()
{
    int n,m,comp=0;
    srand(time(NULL));
    n = rand() % 100+1;
    do
    {printf("Donner une valeur: ");
    scanf("%d",&m);
    if(m > n)
        printf("c'est mois!\n");
    if(m < n)
        printf("c'est plus!\n");
    if(m == n)
        printf("bravo vous avez trouver %d en %d essaie\n",n,comp);
        comp++;
    } while(comp < 10 || n!=m);
        if(n!=m) printf("en gagner %d comp\n",n);
    return 0;
}
