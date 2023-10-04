/*programme qui donne un nombre minimum de billets et de pieces, ´
selon une somme que l’utilisateur a saisi au clavier.*/
#include <stdio.h>
int main()
{
	int n,s;
	printf("Entrer une somme d'argent: ");
	scanf("%d",&s);
    printf("\nResultat : \n");
    n = s / 200;
	s = s % 200;
	if(n >= 0){if(n == 0) printf("Billets 200 DH: %d\n",n);
        else printf("Billets 200 DH: %d\n",n);}
	n = s / 100;
	s = s % 100;
	if(n >= 0){if(n == 0) printf("Billets 100 DH: %d\n",n);
        else printf("Billets 100 DH: %d\n",n);}
	n = s / 50;
	s = s % 50;
	if(n >= 0){if(n == 0) printf("Billets 50 DH: %d\n",n);
        else printf("Billets 50 DH: %d\n",n);}
	n = s / 20;
	s = s % 20;
	if(n >= 0){if(n == 0) printf("Billets 20 DH: %d\n",n);
        else printf("Billets 20 DH: %d\n",n);}
	n = s / 10;
	s = s % 10;
	if(n >= 0){if(n == 0) printf("Pieces 10 DH: %d\n",n);
        else printf("Pieces 10 DH: %d\n",n);}
    n = s / 5;
	s = s % 5;
	if(n >= 0){if(n == 0) printf("Pieces 5 DH: %d\n",n);
		else printf("Pieces 5 DH: %d\n",n);}
    n = s / 2;
	s = s % 2;
	if(n >= 0){if(n == 0) printf("Pieces 2 DH: %d\n",n);
		else printf("Pieces 2 DH: %d\n",n);}
	if(s >= 0){if(s == 0) printf("Pieces 1 DH: %d\n",s);
		else printf("Pieces 1 DH: %d\n",s);}
}
