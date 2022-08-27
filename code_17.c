#include <stdio.h>
int main()
{
    char c;
    int x, y;
    printf("Enter an Operator :");
    scanf("%c", &c);
    printf("Input First Number :");
    scanf("%d", &x);
    printf("Input Second Number :");
    scanf("%d", &y);
    switch (c)
    {
    case '+':

        printf("%d + %d = %d", x, y, x + y);
        break;

    case '-':

        printf("%d - %d = %d", x, y, x - y);
        break;

    case '*':

        printf("%d * %d = %d", x, y, x * y);
        break;

    case '/':

        printf("%d / %d = %d", x, y, x / y);
        break;
    default:
        printf("Error");
    }

    return 0;
}