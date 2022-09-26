#include "main.h"

/**
 * _strspn - string prefix check
 * @s : destination to check
 * @accept: accept string
 * Return: return integer
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, k;

k = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
if (accept[j] == s[i])
{
k++;
break;
}
if (s[i] != accept[j])
break;
}

return (k);
}
