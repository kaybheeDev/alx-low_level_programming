#imclude "main.h"

/**
 * _puts_recursion - print string with recursion
 * @s: string to print
 */

void _puts_recursiom(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
