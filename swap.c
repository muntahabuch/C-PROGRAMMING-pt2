#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter your 1st no \n");
    scanf("%d",&a);
    printf("enter your 2nd no \n");
    scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf("after swapping,a=%d",a);
   printf("after swapping,b=%d",b);
}
