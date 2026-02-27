#include <stdio.h>

int main()
{
    int num, sum = 0, odd_count = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (num > 0)
    {
        digit = num % 10;
        sum += digit;

        if (digit % 2 != 0)
            odd_count++;

        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Number of odd digits = %d\n", odd_count);

    return 0;
}
