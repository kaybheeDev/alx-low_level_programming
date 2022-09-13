#include <stdio.h> 
/** 
* main - body ofbthe functions 
* Return: returns 0 if successful 
*/ 
int main(void) 
 { 
         char i; 
  
         i = 'a'; 
         while (i <= 'z') 
         { 
                 if ((i != 'q') && (i != 'e')) 
                 { 
                         putchar(i); 
                 } 
                 i++; 
         } 
         putchar('\n'); 
         return (0); 
 }
