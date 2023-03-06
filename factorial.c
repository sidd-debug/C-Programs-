#include<stdio.h>
int factorial(int n)  
{  
  if (n <=1)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
void main()  
{  
  int number = 5;    
//   printf("Enter a number: ");  
//   scanf("%d", &number);   
     
printf("Factorial of %d is %d\n", number, factorial(number));  
  
}  