#include <stdio.h>
int main()
{
    int arr[4];

    for (int i = 0; i < 3; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < 3; ++i)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }

    printf("%d", arr[0]);

    return 0;
}
