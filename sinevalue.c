//program that can give the sine of a value between 0 and 1.
#include<stdio.h>
#include<math.h>

int main(void)
{
    double angle,sine;
    printf("Enter an angle between 0 and 1:");
    scanf("%lf", &angle);

    if(angle>=0 && angle<=1){
        sine = sin(angle);
        printf("Sine of %lf is: %lf\n",angle,sine);
    } else{
        printf("Invalid input!(Angle must be between 0 and 1).\n");
    }
    return 0;
}