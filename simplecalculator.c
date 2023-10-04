// C Program to make a Simple Calculator
#include<stdio.h>
#include<math.h>

int main(void)
{
    double n1,n2;
    char op,rep;

        ptintf("premier nombre:");
        scanf("%f",&n1);
        printf("operateur:");
        scanf(" %c",&op);
        printf("deuxieme nombre:");
        scanf("%f",&n2);

    switch(op){
        case'+':
        printf("resultat=%f\n",n1+n2);
        break;
        case'-':
        printf("resultat=%f\n",n1-n2);
        break;
        case'*':
        printf("resultat=%f\n", n1*n2);
        break;
        case'/':
          if(n2==0){printf("Erreur:division par zero\n");}
            else{printf("resultat=%f\n", n1/n2);}
        break;
        case'%':
          if(n2==0){printf("Erreur:division par zero\n");}
            else {printf("resultat=%d\n", n1%n2);}
        break;
        default:
            printf("Error! please write a valid operator\n");
        }
        printf("\n");
    return 0;
}
