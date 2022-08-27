#include <stdio.h>
int main()
{
    int x, y;
    printf("First Number :");
    scanf("%d", &x);
    printf("Second Number :");
    scanf("%d", &y);
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);

    return 0;
}