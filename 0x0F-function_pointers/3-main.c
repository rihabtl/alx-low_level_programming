#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of operations
 * @argc: counter arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int a, b;
char *operation;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
operation = argv[2];
b = atoi(argv[3]);
if (!get_op_func(operation) || operation[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*operation == '/' && b == 0) || (*operation == '%' && b == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(operation)(a, b));
return (0);
}
