#include <stdio.h>
int main()
{
    int w1, w2, w3, avg;
    printf("Weight 1 : ");
    scanf("%d", &w1);
    printf("Weight 2 : ");
    scanf("%d", &w2);
    printf("Weight 3 : ");
    scanf("%d", &w3);
    avg = (w1 + w2 + w3) / 3;
    printf("Average Weight : %d", avg);

    return 0;
}