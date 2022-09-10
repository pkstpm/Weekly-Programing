#include <stdio.h>
int main ()
{   
    int w[4] , x = 0 , avg ;
    for ( int i = 0 ; i < 3 ; i++)
    {
        printf("Weight %d : ",i+1);
        scanf("%d",&w[i]);
    }
    for(int j = 0 ; j < 3 ; j++)
    {
        x+=w[j];
    }
    avg = x/3;
    printf("Avergae Weight : %d",avg);


    return 0;
}