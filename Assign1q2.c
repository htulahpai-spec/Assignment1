#include <stdio.h>

int main()
{
    int total_classes, attended_classes;
    float attendance;
    int needed_classes;

    // Input
    printf("Enter total classes: ");
    scanf("%d", &total_classes);

    printf("Enter attended classes: ");
    scanf("%d", &attended_classes);

    attendance = (attended_classes * 100.0) / total_classes;

    if (attendance >= 75)
    {
        printf("Allowed to sit in exam\n");
    }
    else
    {
        printf("Not allowed\n");

        needed_classes = (0.75 * total_classes) - attended_classes;

        printf("Need %d more classes to reach 75%%\n", needed_classes);
    }

    return 0;
}
