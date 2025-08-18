#include<stdio.h>
#include<math.h>
 
int main(){
    float r,a;
    printf("Enter radius=");
    scanf("%f",&r);
    a=3.14*pow(r,2);
    printf("the area =%.2f",a);
    return 0;
}