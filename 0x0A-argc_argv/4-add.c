#include<stdio.h>
#include"main.h"
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

/**
 * check_num - cheks if the string is a digit
 * @str: string
 * Return: 0
 */

int check_num(char *str)
{
unsigned int c;
for (c = 0; c < strlen(str); c++)
{
if (!isdigit(str[c]))
{
return (0);
}
}
return (1);
}
/**
 * main - prints the name of the program
 * @argc: counter od argument
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int c;
int S;
int convert;

for (c = 1; c < argc; c++)
{
if (check_num(argv[c]))
{
convert = atoi(argv[c]);
S = S + convert;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", S);
return (0);
}
