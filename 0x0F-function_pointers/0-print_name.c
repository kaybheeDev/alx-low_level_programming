#include <stdlib.h>
#include "function_pointer.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer pointing to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
if (name || !f)
return;
f(name);
}
