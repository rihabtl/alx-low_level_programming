#include "main.h"

/**
 * _isalpha - checks alphabets
 * @c: is the variable
 * Return: 1 if alphabet if not 0
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
