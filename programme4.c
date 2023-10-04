//programme qui d ́etermine si un entier saisi est pair ou impair.
#include<stdio.h>
int main ()
{
	int i ;
	printf("donner un entier\t");
	scanf("%d",&i);
	if(i%2==0)
	printf("le nombre est paire");
	else
	printf("le nombre est impaire");
}
