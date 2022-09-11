#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 /** 
   * main - execution starts and ends with main 
   * Return: main returns 0 if successful 
   */ 
 int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
         if (n > 0) 
         { 
                 printf("%d is positive\n", n); 
         } 
         else if (n == 0) 
         { 
                 printf("%d is zero\n", n); 
         } 
         else if (n < 0) 
         { 
                 printf("%d is negative\n", n); 
         } 
         return (0); 
 }
