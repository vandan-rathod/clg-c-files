#include<stdio.h>

int main(){
    float hours,mins;
    printf("Enter hours=");
    scanf("%f",&hours);
    mins=hours*60;
    printf("%.2f hours are %.2f in mins",hours,mins);
    return 0;
}