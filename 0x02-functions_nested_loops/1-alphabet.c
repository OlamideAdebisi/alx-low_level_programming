#include "main.h"
/**
 * main - Entry point
 *print_alphabet: 'print the lowercase of the alphabet'
 * Return: always return 0
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
return (0);
}
