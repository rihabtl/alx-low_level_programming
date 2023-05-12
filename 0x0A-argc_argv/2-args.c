#include<stdio.h>
#include"main.h"

/**
 * main - prints all arguments it recieves
 * @argc: counter argument
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
