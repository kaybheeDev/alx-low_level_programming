#include "main.h"

/**
 * swap_int - swapping
 * @a: parameter a
 * @b: parameter b
 * Return: void
 */

void swap_int(int *a, int *b)
{
int s;

s = *a;
*a = *b;
*b = s;
}
