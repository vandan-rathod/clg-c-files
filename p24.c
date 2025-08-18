#include<stdio.h>

int main(){
    int x,y,t;
    printf("enter value of x=");
    scanf("%d",&x);
    printf("enter value of y=");
    scanf("%d",&y);
    t=y;
    y=x;
    x=t;
    printf("X=%d",x);
    printf("Y=%d",y);
    return 0;
}

int main(int argc, char const *argv[])
{
    int x,y,t;
    printf("enter value of x=");
    scanf("%d",&x);
    printf("enter value of y=");
    scanf("%d",&y);
    printf("X=%d",y);
    printf("Y=%d",x);
    return 0;
}
