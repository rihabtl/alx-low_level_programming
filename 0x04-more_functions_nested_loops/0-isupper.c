#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * Return: 1 is uppercase and 0 if not
 * @c: the character
 */

int _isupper(int c)
{

if (c >= 65 && c < 98)
return (1);
else
return (0);
}
