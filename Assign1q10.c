#include <stdio.h>

int main()
{
    float price, total = 0, discount;


    while (1)
    {
        printf("Enter product price (0 to stop): ");
        scanf("%f", &price);

        if (price == 0)
            break;

        total += price;
    }


    if (total > 2000)
        discount = total * 0.15;
    else
        discount = total * 0.05;

    printf("\nTotal bill before discount = %.2f\n", total);
    printf("Discount = %.2f\n", discount);
    printf("Total bill after discount = %.2f\n", total - discount);

    return 0;
}
