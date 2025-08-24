#include<stdio.h>

int main(){
    int gross, net, discount;
    printf("Enter the gross sales=");
    scanf("%d",&gross);
    if (gross>20000)
    {
        discount=0.15*gross;
        if (gross>10000)
        {
            discount=0.1*gross;
        }
    }
    else
    {
        discount=0.05*gross;
    }
    net=gross-discount;
    printf("net sales=%d",net);
    return 0;
}