#include<stdio.h>
void main()
{
    int month;
    for(;;)
    {
        printf("enter month no(1to12),or 0 to exit \n=");
        scanf("%d",&month);
        if(month==0)
            printf("program ended");
        break;
    }
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        printf("31 days");
    else if(month==9 || month==4 || month==6 || month==11)
        printf("30days");
    else if(month==2)
        printf("28 or 29");
    else
    printf("invalid month");
}
