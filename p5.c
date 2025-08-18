#include<stdio.h>

int main(){
    int x,y;
    printf("enter value of x=");
    scanf("%d",&x);
    printf("enter value of y=");
    scanf("%d",&y);
    printf("the sum =%d\n",x+y);
    printf("the difference =%d\n",x-y);
    printf("the product =%d\n",x*y);
    printf("the quotient =%.2f\n",(float)x/y);
    return 0;
}