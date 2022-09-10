#include <stdio.h>
int factorial(int);
int main()
{
    int x, fac, i;
    printf("Number : ");
    scanf("%d", &i);
    fac = factorial(i);
    printf("%d",fac);
    return 0;
}
int factorial(int i)
{
    int x, fac = 1;
    for (x = 1; x <= i; x++)
        fac *= x;
    return fac;
}
