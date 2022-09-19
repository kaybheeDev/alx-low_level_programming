#include "main.h"

/**
 * print_rev - print in reverse
 * @s: parameter s
 * Return: void
 */

void print_rev(char *s)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
}
for (j = i; j >= 0; j--)
{
if (s[j] != '\0')
{
_putchar(s[j]);
}
}
_putchar('\n');
}
