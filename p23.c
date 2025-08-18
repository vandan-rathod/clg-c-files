#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter value of a=");
    scanf("%d",&a);
    printf("Enter value of b=");
    scanf("%d",&b);
    printf("Enter value of c=");
    scanf("%d",&c);
    int sum=a+b+c;
    float avg=(float)sum/3.0;
    printf("the sum=%d\n",sum);
    printf("the avg=%.2f",avg);
    return 0;
}