#include <stdio.h>

int main()
{
    char ch;


    for (int row = 1; row <= 4; row++)
    {
        ch = 'A';
        for (int col = 1; col <= row; col++)
        {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}
