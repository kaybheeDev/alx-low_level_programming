#include "main.h"

/**
*_isupper - checks if a character is upeercase or not
*@c: character to be tested
*Return: 1 wether it is, 0 ptherwise
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
