#include <stdio.h>

int main()
{
    int seat_status;
    int booked = 0, empty = 0;

    for (int seat = 1; seat <= 40; seat++)
    {
        printf("Enter seat %d status (1=booked, 0=empty): ", seat);
        scanf("%d", &seat_status);

        if (seat_status == 1)
            booked++;
        else
            empty++;

        if (booked == 40)
        {
            printf("All seats booked!\n");
            break;
        }
    }

    printf("\nTotal booked seats = %d\n", booked);
    printf("Total empty seats = %d\n", 40 - booked);

    return 0;
}
