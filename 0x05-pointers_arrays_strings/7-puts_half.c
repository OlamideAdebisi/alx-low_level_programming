#include "main.h"
#include <string.h>
/**
 * puts_half - function to print half of a character
 * @str: parameter
 */
void puts_half(char *str)
{
int x, y, i;
x = strlen(str);
if (x % 2 == 1)
y = x / 2 + 1;
else
y = x / 2;
for (i = y; i < x; i++)
_putchar(str[i]);
_putchar('\n');
}
