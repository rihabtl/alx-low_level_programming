#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: the width
 * @height: the height
 * Return: array of strings
 */

int **alloc_grid(int width, int height)
{

int **grid;
int row = 0;
int col;

if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
while (row < height)
{
grid[row] = malloc(sizeof(int) * width);
if (grid[row] == NULL)
{
while (row > 0)
free(grid[--row]);
free(grid);
return (NULL);
}
col = 0;
while (col < width)
grid[row][col++] = 0;
row++;
}
return (grid);
}
