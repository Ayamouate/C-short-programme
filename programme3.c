/*programme qui converti une temp ́erature exprim ́ee en Celsius,
en Kelvin et en Fahrenheit.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float C,K,F;
    printf("Enter la valeur de tempurateur en celsius:");
    scanf("%d",&C);
    F=(C*1.8)+32;
    K=C+279;
    printf("votre tempurateur en celsius:%.2f \t 
    votre tempurateur en fahrenheit:%.2f \t 
    votre temperateur en kelvin:%.2f",C,F,K);
    return 0;
}