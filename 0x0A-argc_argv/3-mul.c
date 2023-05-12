#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 * main - ultiplies two numbers
 * @argc: counter odf argument
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
int x;
int z;
int y;

if (argc == 3)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
z = x *y;
printf("%d\n", z);
return (0);
}
printf("Error\n");
return (1);
}
