
// C program to demonstrate explicit type casting 
#include<math.h>  
#include<stdio.h> 

int main() 
{

    double d = 500000000.98888;
    int a;
    a = d;
    printf("%d\n",a);


    int n = 144;
    double sqr = sqrt((double)n);

    printf("%f squre root of %d\n",sqr, n);


    double x = 1.2; 
  
    // Explicit conversion from double to int 
    int sum = (int)x + 1; 
  
    printf("sum = %d", sum); 
  
    return 0; 
} 

