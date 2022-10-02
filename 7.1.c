#include <stdio.h>
int main()
{
    int x;
    printf("Number : ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j <= x - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (i * 2) - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}