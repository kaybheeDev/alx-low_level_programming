#include "main.h"

/**
*_isdigit - checks whether a character is a digit or not
*Return: 1 if is, 0 otherwise
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 58))
{
return (1);
}
return (0);
}