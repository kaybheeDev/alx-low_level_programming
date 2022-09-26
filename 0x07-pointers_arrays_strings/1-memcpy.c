#include "main.h"

/**
 * _memcpy - copy buffers
 * @dest: copy to
 * @src: copy from
 * @n: buffer size
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
