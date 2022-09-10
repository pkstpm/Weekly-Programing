#include <stdio.h>
int main(){
    int  i,j,k;
    printf("Number 1 : ");
    scanf("%d",&i);
    printf("Number 2 : ");
    scanf("%d",&j);
    printf("Number 3 : ");
    scanf("%d",&k);
    if ( i > j && i > k)
    {
        printf("%d",i);
    }
    else if ( j > i && j > k)
    {
        printf("%d",j);
    }
    else if ( k > i && k > j)
    {
        printf("%d",k);
    }
    else if ( i == j && i > k)
    {
        printf("%d",i);
       
    }
    else if ( j == k && j > i)
    {
        printf("%d",j);
        
    }
    else if ( i == k && i > j)
    {
        printf("%d",i);
        
    }
    else if ( i == j && i == k)
    {
        printf("%d",i);
        
    }


    return 0;
}