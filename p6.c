#include<stdio.h>

int main(){
    int hours,mins,n;
    printf("Enter minutes=");
    scanf("%d",&mins);
    if (mins>=60)
    {
        n=mins%60;
        hours=mins/60;
        printf("%d hrs and %d mins",hours,n);
    }
    else
    {
        printf("%d mins",mins);
    }
    
    
    return 0;
}