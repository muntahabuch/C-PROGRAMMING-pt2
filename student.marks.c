#include <stdio.h>

int main()
{
    int marks[5];
    int i;
    float sum = 0, average;
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }


    printf("\nMarks entered:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }


    average = sum / 5;
    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}
