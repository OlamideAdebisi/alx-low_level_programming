#include "main.h"
/**
 * swap_int - function that swaps the value of two inters
 * @a: integer one
 * @b: integer two
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
