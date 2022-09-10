#include <stdio.h>
#include <string.h>
int main(){
    char str[10];
    scanf("%s",&str);
    strrev(str);
    printf("%s",str);

    return 0;
}