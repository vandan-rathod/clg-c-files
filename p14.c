#include<stdio.h>

int main(){
    float fer,cel;
    printf("enter degree in celcius");
    scanf("%f",&cel);
    fer=9/5.0*cel+32;
    printf("%.2fF = %.2fC",fer,cel);
    return 0;
}