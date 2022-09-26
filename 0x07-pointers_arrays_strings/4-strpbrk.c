#include "main.h"

/**
 * _strpbrk - string break
 * @s: string s
 * @accept: string to accept for check
 * Return: return string
 */

char *_strpbrk(char *s, char *accept)
{
int j;

while (*s != '\0')
{
for (j = 0; accept != '\0'; j++)
if (*s == accept[j])

return (s);
s++;
}
return (0);
}
