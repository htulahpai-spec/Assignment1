#include <stdio.h>

int main()
{
    int age, day;
    int ticket;
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter day type (1=weekend, 0=weekday): ");
    scanf("%d", &day);

    if (age < 10)
    {
        ticket = 60;
    }
    else if (age >= 10 && age <= 25)
    {
        if (day == 0)
        {
            ticket = 100;
        }
        else
        {
            ticket = 120;
        }
    }
    else
    {
        if (day == 0)
        {
            ticket = 140;
        }
        else
        {
            ticket = 160;
        }
    }

    printf("Ticket price = %d\n", ticket);

    return 0;
}
