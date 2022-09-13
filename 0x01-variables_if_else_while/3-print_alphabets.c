#include <stdio.h> 
/** 
* main - the body of the program 
* Return: returns 0 if succesful 
*/ 
int main(void) 
 { 
         char i; 
  
         i = 'a'; 
         while (i <= 'z') 
         { 
                 putchar(i); 
                 i++; 
         } 
         i = 'A'; 
         while (i <= 'Z') 
         { 
                 putchar(i); 
                 i++; 
         } 
         putchar('\n'); 
         return (0); 
 }
