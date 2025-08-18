#include<stdio.h>

int main(){
    int l,b,a,p;
    printf("Enter length");
    scanf("%d",&l);
    printf("Enter breadth");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("the area=%d\n",a);
    printf("the perimeter=%d\n",p);
    return 0;
}