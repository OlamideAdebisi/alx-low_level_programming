#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 * @c - digits zero to nine
 * Return: return 1 if a digit and 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
