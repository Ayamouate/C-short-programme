#include <stdio.h>
int main() {
    double base;
    int exposant;
    double resultat = 1.0;
    int i;

    printf("Entrez le nombre de base : ");
    scanf("%lf", &base);
    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);
    for (i = 0; i < exposant; i++) {
        resultat *= base;
    }
    printf("Le resultat de %.2f a la puissance %d est : %.2f\n", base, exposant, resultat);
    return 0;
}
