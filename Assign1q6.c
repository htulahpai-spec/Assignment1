#include <stdio.h>

int main()
{
    int hours, total = 0, below2 = 0;
    float average;


    for (int day = 1; day <= 7; day++)
    {
        printf("Enter study hours for day %d: ", day);
        scanf("%d", &hours);

        total += hours;
        if (hours < 2)
            below2++;
    }

    average = total / 7.0;

    printf("\nTotal study hours = %d\n", total);
    printf("Average study hours = %.2f\n", average);
    printf("Days with less than 2 hours = %d\n", below2);

    return 0;
}
