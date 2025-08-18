#include<stdio.h>

int main(){
    float dol,pou;
    printf("Enter dollars=");
    scanf("%f",&dol);
    pou=dol*(48/70.0);
    printf("%.2f pounds",pou);  
    return 0;
}