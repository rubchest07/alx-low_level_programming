#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - add diagonal lines of a square matrix
 * @a: square matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int lfrg = 0, rglf = size - 1;
	int valuelfrg = 0, valuerglf = 0;
	int *p = a;

	for (; lfrg <= size * size; lfrg += (size + 1), rglf += (size - 1))
	{
		valuelfrg += *(p + lfrg);
		valuerglf += *(p + rglf);
	}
	printf("%d, %d\n", valuelfrg, valuerglf);
}
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: value to overide
 * @to: value to copy
 *
 *
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
