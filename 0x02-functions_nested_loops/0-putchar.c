#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * A C program that prints _putchar, followed by a new line.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *s = "_putchar";
unsigned long i = 0;
while (i < sizeof(s))
{
	_putchar(s[i++]);
}
_putchar('\n');

return (0);
}
