#include "main.h"
/**
 * _isalpha - checksfor alphabetic character
 * @c: single letter input
 * Return: return 1 if lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
