#include <stdio.h>

/**
* main - pfints the largest prime factor
* of a number
*
* Return: returns 0
*/

int main(void)
{
long number = 612852475143;
int inc;

while (inc++ < number / 2)
{
if (number % inc == 0)
{
number / 2;
continue;
}

for (line = 3; inc < number / 2; inc += 2)
{
if (number % inc == 0)
number /= inc;
}
}
printf("%1d\n", number);
return (0);
}
