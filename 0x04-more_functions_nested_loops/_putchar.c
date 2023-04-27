#include <unistd.h>

/**
 * _putchar - write the character to stdout
 * the character to print is ch
 * Return: 1 (success)
 */

int _putchar(char ch)
{

return (write(1, &ch, 1));
}
