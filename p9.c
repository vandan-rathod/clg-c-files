#include<stdio.h>

int main(){
    float dol,rup;
    printf("Enter rupees=");
    scanf("%f",&rup);
    dol=rup/48.0;
    printf("₹%.2f is $%.2f",rup,dol);    
    return 0;
}