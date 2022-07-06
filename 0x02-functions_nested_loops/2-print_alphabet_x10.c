#include "main.h"
/**
 * main - Entry point
 * print_alphabet_x10: prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
char a;
char x;
for (a = '0'; a < 10; a++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
