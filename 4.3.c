#include <stdio.h>

long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
int main()  
{  
  int number;  
  long fac;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
   
  fac = factorial(number);
  printf("%ld",fac);
  return 0;  
}  