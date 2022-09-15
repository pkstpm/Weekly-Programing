#include <stdio.h>
int main ()
{
    int x = 0 , y = 0 , z  ;
    for ( int i = 0 ; i < 10 ; i+=2)
    {
        printf("Number %d : ",i+1);
        scanf("%d",&z);
        x += z;
        printf("Number %d : ",i+2);
        scanf("%d",&z);
        y += z;
    }
    z = x-y;
    printf("%d",z);
    return 0;
}