#include "main.h"

/**
 * _puts - printing strings
 * @str : parameter strings
 * Return: return void
 */

void _puts(char *str)
{
int n;

for (n = 0; str[n] != '\0'; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
