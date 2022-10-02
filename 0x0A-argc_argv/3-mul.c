#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - program that prints its name, folloowed by a new line
 *@argc: arguments that contains argument input
 *@argv: argument that stores the strings in an array of char* (strings)
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = num1 *num2;
printf("%d\n", result);

return (0);
}
