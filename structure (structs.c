#include <stdio.h>
struct myname
{
int a;
char b;
};
struct hello
{
    int c;
    char d;
};
int main()
{

struct myname s1;
struct hello b1;
s1.a=43;
s1.b='h';
b1.c=45;
b1.d='k';
printf("%d\n",s1.a);
printf("%c\n",s1.b);
printf("%d\n",b1.c);
printf("%c\n",b1.d);



}
