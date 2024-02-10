#include<stdio.h>

int main()
{
    int a=5;
    int *b=&a;
    int **c=&b;
   
    printf("%d %d %d",a,*b,**c);
}