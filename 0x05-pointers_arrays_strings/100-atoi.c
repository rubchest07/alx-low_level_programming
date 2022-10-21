#include "main.h"

/**
 * _atoi - A C function that convert a string to an integer.
 *
 * Prototype: int _atoi(char *s);
 * The number in the string can be preceded by
 * an infinite number of characters
 * You need to take into account all
 * the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * We will use the -fsanitize=signed-integer-overflow
 * gcc flag to compile your code.
 *
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	m = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (n);
}
