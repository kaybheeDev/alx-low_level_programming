#include <stdio.h>

/**
 * main - printds the number of arguments passed to it
 *@argc: number of arguments
 *@argv: argument vector of pointers to strings
 *
 *Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
