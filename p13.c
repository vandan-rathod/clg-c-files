#include<stdio.h>

int main(){
    float bytes,kb,mb,gb;
    printf("Enter bytes=");
    scanf("%f",&bytes);
    kb=bytes/1024;
    mb=kb/1024;
    gb=mb/1024;
    printf("%.2f bytes = %.2f kb\n",bytes,kb);
    printf("%.2f kb = %.2f mb\n",kb,mb);
    printf("%.2f mb = %.2f gb\n",mb,gb);
    return 0;
}