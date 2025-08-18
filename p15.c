#include<stdio.h>

int main(){
    float fer, cel;
    printf("Enter degrees in fahernheit=");
    scanf("%f",&fer);
    cel=(fer-32)*5/9.0;
    printf("%.2fF=%.2fC",fer,cel);
    return 0;
}