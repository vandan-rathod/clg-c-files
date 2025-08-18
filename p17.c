#include<stdio.h>
#include<math.h>

int main(){
    int l;
    float a,p;
    printf("Enter length=");
    scanf("%d",&l);
    a=pow(l,2);
    p=4*l;
    printf("The area = %.2f\n",a);
    printf("The perimeter = %.2f\n",p);

    return 0;
}