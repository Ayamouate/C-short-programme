/*un programme complet qui gére un tableau de valeurs entieres Le programme doit comprendre un menu avec la possibilité de
changer les valeurs du tableau sans sortir du programme. Le programme doit réaliser les
taches suivantes selon le choix de l’utilisateur
1. Afficher les valeurs du tableau.
2. Calculer la somme et la moyenne des valeurs du tableau.
3. Afficher les valeurs paires.
4. Afficher les valeurs impaires.
5. Calculer le maximum et afficher ces indices.
6. Calculer le minimum et afficher ces indices.
7. Tirer les valeurs du tableau dans l’ordre croissant.
8. Chercher une valeur dans le tableau.
9. Remplacer une valeur du tableau.
10. Supprimer une valeur du tableau.
11. Ajouter une valeur au tableau.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 15
int main()
{
    int tableau[MAX_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int taille = MAX_SIZE;
    int i,j,choix,som = 0,max = tableau[0],min = tableau[0],moy,ajj,temp,rech,supp;
    while (1) {
        printf("Menu :\n");
        printf("1. Afficher les valeurs du tableau\n");
        printf("2. Calculer la somme et la moyenne des valeurs du tableau\n");
        printf("3. Afficher les valeurs paires\n");
        printf("4. Afficher les valeurs impaires\n");
        printf("5. Calculer le maximum et afficher ces indices\n");
        printf("6. Calculer le minimum et afficher ces indices\n");
        printf("7. Trier les valeurs du tableau dans l'ordre croissant\n");
        printf("8. Chercher une valeur dans le tableau\n");
        printf("9. Remplacer une valeur du tableau\n");
        printf("10. Supprimer une valeur du tableau\n");
        printf("11. Ajouter une valeur au tableau\n");
        printf("0. Quitter le programme\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                for (i = 0; i < taille; i++) {
                    printf("%d ",tableau[i]);
                } printf("\n");
                break;
            case 2:
                for (i = 0; i < taille; i++) {
                    som += tableau[i];}
                moy = (float) som / taille;
                printf("Som = %d\n",som);
                printf("Moy = %d\n",moy);
                break;
            case 3:
                for (i = 0; i < taille; i++) {
                    if (tableau[i] % 2 == 0) {printf("%d ",tableau[i]);}
                } printf("\n");
                break;
            case 4:
                for (i = 0; i < taille; i++) {
                    if (tableau[i] % 2 == 1) {printf("%d ",tableau[i]);}
                } printf("\n");
                break;
            case 5:
                for (i = 1; i < taille; i++) {
                    if (tableau[i] > max) {max = tableau[i];}
                }
                printf("Maximum = %d\n", max);
                printf("Indices : ");
                for (i = 0; i < taille; i++) {
                    if (tableau[i] == max) {printf("%d ",i);}
                } printf("\n");
                break;
            case 6:
                for (i = 1; i < taille; i++) {
                    if (tableau[i] < min) {min = tableau[i];}
                }
                printf("Min = %d\n", min);
                printf("Indices : ");
                for (i = 0; i < taille; i++) {
                    if (tableau[i] == min) {printf("%d ",i);}
                } printf("\n");
                break;
            case 7:
                for (i = 0; i < MAX_SIZE - 1; i++) {
                  for (j = i + 1; j < MAX_SIZE; j++) {
                   if (tableau[j] < tableau[i]) {temp = tableau[i];tableau[i] = tableau[j];tableau[j] = temp;}
                   }
                } printf("Tableau trie : ");
                    for (i = 0; i < MAX_SIZE; i++) {
                       printf("%d ", tableau[i]);
                } printf("\n");
                break;
            case 8:
                printf("Entrez une valeur a chercher : "); scanf("%d",&rech);
                for (i = 0; i < taille; i++) {
                    if (tableau[i] == rech) {printf("%d trouve a l'indice %d\n",rech,i); break;}
                }
                if (i == MAX_SIZE) {printf("%d n'est pas dans le tableau\n",rech);}
                break;
            case 9:
                printf("Entrez l'indice de la valeur a remplacer : "); scanf("%d",&i);
                if (i < 0 || i >= MAX_SIZE) {printf("Indice invalide\n"); break;}
                printf("Entrez la nouvelle valeur : "); scanf("%d",&ajj);
                tableau[i] = ajj;
                printf("Valeur remplacee\n");
                break;
            case 10:
                printf("Entrez l'indice de la valeur a supprimer : "); scanf("%d",&i);
                if (i < 0 || i >= taille) {printf("Indice invalide\n"); break;}
                supp = tableau[i];
                for (j = i; j < taille - 1; j++) {
                    tableau[j] = tableau[j + 1];
                } taille--;
                printf("Valeur %d supprimer\n",supp);
                break;
            case 11:
                if (MAX_SIZE == taille) {printf("Tableau plein\n"); break;}
                printf("Entrez la valeur a ajouter : "); scanf("%d",&ajj);
                printf("Entrez l'indice ou la valeur doit etre ajouter : "); scanf("%d",&i);
                if (i < 0 || i > taille) {printf("Indice invalide\n"); break;}
                for (j = taille; j > i; j--) {
                    tableau[j + 1] = tableau[j];
                }
                tableau[i] = ajj;
                taille++;
                printf("Valeur %d ajoute a l'indice %d\n",ajj,i);
                break;
            case 0:
                printf("Au revoir !\n");
                exit(0);
            default:
                printf("Choix invalide\n");
                break;
            }
        }
        return 0;
}
