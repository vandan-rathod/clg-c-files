#include<stdio.h>

int main(){
    float p,r,n,i;
    printf("Enter principal amount=");
    scanf("%f",&p);
    printf("Enter rate of interest in decimal=");
    scanf("%f",&r);
    printf("Enter number of years=");
    scanf("%f",&n);
    i=p*r*n/100.0;
    printf("installment a month=%.2f",i);
    return 0;
}