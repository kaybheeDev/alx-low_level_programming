#include "main.h"

/**
 * _strncpy - frunction to copy a string
 * @dest: string to copy to
 * @src: string being copied
 * @n: number of bytes
 *
 * Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && *(src + 1))
{
*(dest + 1) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
