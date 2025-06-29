#include <stdio.h>

int main()
 {
    int i, j;
    int rows = 5;

    for (i = 1; i <= rows; i++)
        {
        for (j = 1; j <= i; j++)
        {

            if (j == 1 || j == i || i == rows)
                printf("1 ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
