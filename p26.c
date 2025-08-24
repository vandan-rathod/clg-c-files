#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter value of X=");
    scanf("%d",&x);
    printf("Enter value of Y=");
    scanf("%d",&y);
    printf("Enter value of Z=");
    scanf("%d",&z);
    if (x>=y && x>=z)
    {
        printf("X is largest\n");
        if (y>=z)
        {
            printf("z is smallest\n");
        }
        else
        {
            printf("y is smallest\n");
        }
        
    }
    else if (y>=x && y>=z)
    {
        printf("Y is largest\n");
        if (x>=z)
        {
            printf(" is smallest\n");
        }
        else
        {

        }
        
    }
    else
    {
        /* code */
    }
    
    return 0;
}