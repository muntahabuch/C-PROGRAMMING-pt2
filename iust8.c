#include<stdio.h>
void main()
{
    int day;
    printf("enter a no(1 to 7)=");
    scanf("%d",&day);
    if (day==1)
    {
        printf("monday");
    }
    else if(day==2)
    {
        printf("tuesday");
    }
    else if(day==3)
    {
        printf("wed");
    }
    else if(day==4)
    {
        printf("thu");
    }
    else if(day==5)
    {
        printf("fri");
    }
    else if(day==6)
    {
        printf("sat");
    }
    else if(day==7)
    {
        printf("sun");
    }
    else
    {
        printf("invalid input! enter 1 to 7");
    }

}
