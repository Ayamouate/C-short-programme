/*programme qui resout dans l’ensemble des r eels l’ ́equation  ́
ax2 + bx + c = 0, puis un programme C qui r ́esout dans l’ensemble des complexes l’equation
ax2 + bx + c = 0.*/
#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,delta,x1,x2;
    printf("Entre les coefficients de l'equation ax^2+bx+c=0 :\n");
    printf("a =");
    scanf("%lf",&a);
    printf("b =");
    scanf("%lf",&b);
    printf("c =");
    scanf("%lf",&c);
    delta = b*b - 4*a*c;
    if(delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x1 = (-b - sqrt(delta)) / (2 * a);
        printf("les solution sont: x1= %.2lf et x2= %.2lf",x1,x2);}
    else if(delta==0) {
        x1 = -b / (2 * a);
        printf("la solution est : x1= %lf",x1);}
    else {
        printf("l'equation n'est pas de solution reells.\n");}
    return 0;
}
