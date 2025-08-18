#include <stdio.h>

int main(){
    float rup,dol;
    printf("Enter dollars=");
    scanf("%f",&dol);
    rup=dol*48.0;
    printf("$%.2f is \u2089%.2f",dol,rup);
    return 0;
}