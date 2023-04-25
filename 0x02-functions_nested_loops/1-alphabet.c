#include "main.h"

/**
 * main - Entry point
 * code that prints the alphabets
 * Return: 0
 */

void print_alphabet(void)
{
char ch='a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
