#include <stdio.h>
int main(){
    int x,i = 1;
    printf("Number :");
    scanf("%d",&x);
    while (i <=  x)
        {
            printf("*");
            i++;
        }
    return 0;
}