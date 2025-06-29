#include <stdio.h>
void main()
{
    /*int c[]={3,8,9,4,9};

    printf("%lu",sizeof (c));*/

    int k[]={6,8,9,7,3,2};
    printf("%lu",sizeof k/sizeof k[3]);
}
