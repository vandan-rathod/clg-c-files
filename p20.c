#include<stdio.h>

int main(){
    float h,l,a;
    printf("Enter height=");
    scanf("%f",&h);
    printf("Enter length=");
    scanf("%f",&l);
    a=h*l/2.0;
    printf("area=%.2f",a);
    return 0;
}