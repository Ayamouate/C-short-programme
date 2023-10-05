/*programme determine Le nombre de jours de difference entre les deux dates donner*/

#include <stdio.h>

int EstAnneeBissextile(int annee)
{
    if ((annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int NombreDeJoursMois(int mois, int annee)
{
    int joursMois[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mois == 2 && EstAnneeBissextile(annee)) {
        return 29;
    } else {
        return joursMois[mois];
    }
}

int CalculerNombreDeJours(int jour1, int mois1, int jour2, int mois2, int annee)
{
    int nbJours = 0;

    if (mois1 == mois2) {
        nbJours = jour2 - jour1;
    } else {
        nbJours += NombreDeJoursMois(mois1, annee) - jour1;

        for (int i = mois1 + 1; i < mois2; i++) {
            nbJours += NombreDeJoursMois(i, annee);
        }
        // Adjust for leap years if mois1 in February
        if (mois1 == 2 && EstAnneeBissextile(annee)) {
        nbJours += 1;
    }

        nbJours += jour2;
    }

    return nbJours;
}

int main()
{
    int jour1, mois1, annee1;
    int jour2, mois2, annee2;

    printf("Entrez la premiere date (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jour1, &mois1, &annee1);

    printf("Entrez la deuxieme date (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jour2, &mois2, &annee2);

    int nbJours = CalculerNombreDeJours(jour1, mois1, jour2, mois2, annee1);

    printf("Le nombre de jours de difference entre les deux dates est : %d\n", nbJours);

    return 0;
}
