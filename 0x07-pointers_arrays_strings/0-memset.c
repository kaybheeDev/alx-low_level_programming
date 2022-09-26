#include "main.h"

/**
 * _memset - fill with a constant byte
 * @s: the pointer
 * @b: what s points at
 * @n: size in bytes
 * Return: a char as success
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
*(s + i) = b;
return (s);
}
