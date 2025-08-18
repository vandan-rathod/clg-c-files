#include<stdio.h>

int main(){
    float kg,grams;
    printf("Enter weight in kg=");
    scanf("%f",&kg);
    grams=kg*1000;
    printf("%.2fkg=%.2fgrams",kg,grams);
    return 0;
}