#include <stdio.h>
/**
 * main - 6-size.c
 * description - Write a C program that prints,
 * the size of int,char,float,long int and long long int
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n",sizeof(char));
printf("Size of a int: %zu byte(s)\n",sizeof(int));
printf("Size of a long int: %zu byte(s)\n",sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n",sizeof(long long int));
printf("Size of a float: %zu byte(s)\n",sizeof(float));
return (0);
}
