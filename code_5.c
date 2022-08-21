#include <stdio.h>
int main(){
    int x;
    printf("Number :");
    scanf("%d",&x);
    for( int i = 1; i <=x ; i++ )
    {
        printf("*");
    }

    return 0;
}