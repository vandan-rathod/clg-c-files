#include<stdio.h>

int main(){
    float grms,kg;
    printf("Enter grams=");
    scanf("%f",&grms);
    kg=grms/1000.0;
    printf("%.2fgrams=%.2fkgs",grms,kg);
    return 0;
}