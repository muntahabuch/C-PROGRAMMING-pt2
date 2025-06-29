#include <stdio.h>
void main()
{
    int a=1234;
    int rev=0;
    int remainder;
    while(a!=0)
    {
    remainder=a%10;
        rev=rev*10+remainder;
        a/=10;
    }
    printf("%d",rev);

}
