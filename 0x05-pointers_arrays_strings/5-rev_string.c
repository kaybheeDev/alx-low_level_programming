#include "main.h"

/**
 * rev_string - reverse string
 * @s : parameter s
 * Return: returns void
 */

void rev_string(char *s)
{
int i, j, n;

for (i = 0; s[i] != '\0'; i++)
{
}
for (j = 0; j < i / 2; j++)
{
n = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = n;
}
}
