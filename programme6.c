//programme détermine s'il s'agit d'un année bissextile ou non
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Entrer une annee:");
    scanf("%d", &a);
    if(a%4 == 0 && a%100!=0 && a%400 == 0)
    printf("%d cette annee est bissextile",a);
    else
    printf("%d cette annee n'est pas bissextile",a);
    return 0;
}
