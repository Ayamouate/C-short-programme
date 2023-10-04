/*programme qui calcule le p ́erim`etre d’un cercle, la
surface d’un disque et le volume d’une sph`ere dont on connaˆıt les rayons.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float pi=3.14;
    float r,p,s,v; //r: rayon - p : perimetre - s : surface - v : volume
    printf("Donner le rayon :");
    scanf("%f",&r);
    p=2*pi*r;
    s=2*pi*r*r;
    v=(4*pi*r*r*r)/3;
    printf("le perimetre est : %f\n",p);
    printf("la surface du disque est : %f\n",s);
    printf("le volume du sphere est : %f",v);
}
