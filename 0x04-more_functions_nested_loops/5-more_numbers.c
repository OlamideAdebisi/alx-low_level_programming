#include "main.h"
/**
 * more_numbers - print from zero to fourteen ten times
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
}
