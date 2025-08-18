#include<stdio.h>

int main(){
    int gross;
    float net;
    printf("Enter gross sales=");
    scanf("%d",&gross);
    net =(float)gross-0.1*gross;
    printf("Net sales=%.2f",net);
    return 0;
}