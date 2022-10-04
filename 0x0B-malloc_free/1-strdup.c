#include "main.h"

/**
 * _strlen - Calc str length
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
}

return (i);
}

/**
 *_strcpy - str copy
 * @st1: string 1
 * @st2: string 2
 * Return: string
 */

char *_strcpy(char *st1, char *st2)
{
int j;

for (j = 0; st2[j] != '\0'; j++)
st1[j] = *(st2 + j);
st1[j] = '\0';
return (st1);
}

/**
 * _strdup - create memory and copy strings
 * @str: string to copy
 * Return: return a pointer to duplicated str
 */

char *_strdup(char *str)
{
unsigned int size;
char *st3;

if (str == 0)
return (NULL);
size = _strlen(str) + 1;
ifr (size == 0)
return (NULL);

st3 = (char *) malloc(sizeof(char) * size);
if (st3 == 0)
return (NULL);
_strcpy(st3, str);
return (st3);
}
