#include "main.h"

/**
 * _strstr - string check
 * @haystack: destination
 * @needle: what to find
 * Return: return string
 */

char *_strstr(char *haystack, char *needle)
{
char *str;
char *str0;

while (*haystack != '\0')
{
str = needle;
str0 = haystack;
while (*haystack != '\0' && *str != '\0' && *haystack == *str)
{
haystack++;
str++;
}
if (*str == '\0')
return(str0);
}
haystack = str0 + 1;
}
return (0);
}
