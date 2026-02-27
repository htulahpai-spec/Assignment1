#include <stdio.h>

int main()
{
    int pin;
    int attempts = 0;
    int correct_pin = 5555;

    while (attempts < 3)
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correct_pin)
        {
            printf("Access Granted\n");
            break;
        }
        else
        {
            printf("Wrong PIN\n");
            attempts++;
        }
    }

    if (attempts == 3)
    {
        printf("Account Locked\n");
    }

    return 0;
}
