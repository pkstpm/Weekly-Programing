#include <stdio.h>
int main()
{
    int x[10], a = 0, b = 0, ans;
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d : ", i + 1);
        scanf("%d", &x[i]);
    }
    for (int j = 0; j < 10; j += 2)
    {
        a += x[j];
        b += x[j + 1];
    }
    ans = a - b;
    printf("%d", ans);

    return 0;
}