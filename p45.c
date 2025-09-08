#include<stdio.h>

int main(){
    int n,m,sum=0;
    float mean;
    printf("Enter N=");
    scanf("%d",&m);
    for (int i = 0; i <=m-1; i++)
    {
        printf("Enter a number=");
        scanf("%d",&n);
        sum+=n;
    }
    mean=(float)sum/m;
    printf("sum =%d\n",sum);
    printf("mean =%.2f",mean);
    return 0;
}