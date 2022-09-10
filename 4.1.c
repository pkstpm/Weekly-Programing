#include <stdio.h>
int main()
{
    int x, fac;
    printf("Number : ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        fac *= i;
    }
    printf("%d", fac);

    return 0;
}