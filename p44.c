#include<stdio.h>

int main(){
    int n,sum=0;
    float mean;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number=");
        scanf("%d",&n);
        sum+=n;
    }
    mean=sum/10.0;
    printf("sum =%d\n",sum);
    printf("mean =%.2f",mean);
    return 0;
}