#include <stdio.h>
int main()
{
    int x;
    printf("Number : ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= (x * 2) - 1; j++)
        {
            if (i == 1 && j == x)
            {
                printf("*");
            }
            else if (j > x - i && j < x + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}