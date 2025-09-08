#include<stdio.h>

int main(){
    int n,sum=0;
    for (int i = 0; i <=100 ; i++)
    {
        if (i%13==0)
        {
            sum+=i;
        }
        
    }
    printf("%d",sum);
    return 0;
}