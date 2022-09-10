#include <stdio.h>
#include <string.h>
int main (){
    char str[50] , rev ;
    int i , j , check;
    scanf("%s",&str);
    check = strlen(str);
    j = check-1;
    for ( i = 0 ; i < j ; i++ )
    {
        rev = str[i];
        str[i] = str[j];
        str[j] = rev;
        j--;
    }
    printf("%s",str);


    return 0;
}