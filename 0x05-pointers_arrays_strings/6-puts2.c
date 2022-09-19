#include "main.h"

/**
 * puts2 - printing some
 * @string: perimeter string
 * Return: void
 */

void puts2(char *str)
{
int i = 0, j = 0;

while (str[i++]) j++;

for (i = 0; i < j; i += 2)
_putchar(str[i]);

_putchar('\n');
}
