#include<stdio.h>
#include"main.h"

/**
 * main - prints a number
 * @argc: counter argument
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);
return (0);
}
