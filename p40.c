#include<stdio.h>

int main(){
    int n,fact=1;
    printf("Enter N=");
    scanf("%d",&n);

    for (int i = n; i >0 ; i--)
    {
        fact*=i;
        if (i>1)
        {
            printf("%d*",i);
        }else if (i==1)
        {
            printf("%d",i);
        }
        
        
    }
    printf("=%d",fact);
    return 0;
}