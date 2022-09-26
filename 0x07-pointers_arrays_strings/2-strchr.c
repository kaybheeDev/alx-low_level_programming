#include "main.h"

/**
 * _strchr - search character
 * @s: string s
 * @c: character to search
 * Return: return at first discovery
 */

char *_strchr(char *s, char c)
{
int i;

i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return (s);
i++;
}

if (s[i] == c)
return (s);

return (0);
}
