#include<stdio.h>

int main(){
    int gross;
    float allowance,deduction,net;
    printf("Enter gross salary=");
    scanf("%d",&gross);
    allowance=0.1*gross;
    deduction=0.03*gross;
    net=gross+allowance-deduction;
    printf("the net salary=%.2f",net);
    return 0;
}