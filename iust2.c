#include<stdio.h>
void main()
{
    int b;
    printf("enter value of b:");
    scanf(" %d",&b);
    if(b>0)
    {
        printf("b is a positive number\n");
    }
    else
    {
      printf("b is not a positive number\n");
    }
    getchar();
}
