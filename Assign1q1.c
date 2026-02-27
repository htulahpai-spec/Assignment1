
#include <stdio.h>

int main()
{
    int battery;
    int charger;

    printf("Enter battery percentage: ");
    scanf("%d", &battery);

    printf("Charger connected? (1=yes 0=no): ");
    scanf("%d", &charger);

    if (battery < 20 && charger == 0)
    {
        printf("Connect charger immediately\n");
    }
    else if (battery >= 20 && battery <= 80)
    {
        printf("Battery level normal\n");
    }
    else if (battery > 80 && charger == 1)
    {
        printf("Unplug charger to save battery health\n");
    }

    return 0;
}
