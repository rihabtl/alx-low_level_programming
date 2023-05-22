#include<stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: 0
 */

int main(void)
{
printf("%s", __FILE__);
printf("\n");
return (0);
}
