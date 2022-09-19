#include "main.h"

/**
 * puts_half - printing half
 * @str: parameter string
 * Return: void
 */

void puts_half(char *str)
{
int i, j, n;

for (i = 0; str[i] != '\0'; i++)
{
}
if (i % 2 == 0)
{
for (j = (i / 2); j < i; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
