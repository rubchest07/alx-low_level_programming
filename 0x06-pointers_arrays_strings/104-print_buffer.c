#include "main.h"
#include <stdio.h>

/**
 * print_line - A C a function that prints a buffer.
 *
 * Prototype: void print_buffer(char *b, int size);
 * The function must print the content of size
 * bytes of the buffer pointed by b
 * The output should print 10 bytes per line
 * Each line starts with the position of the
 * first byte of the line in hexadecimal (8 chars), starting with 0
 * Each line shows the hexadecimal content (2 chars)
 * of the buffer, 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer.
 * If the byte is a printable character, print the letter, if not, print .
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 * You are allowed to use the standard library
 * The output should look like the following example,
 * and formatted exactly the same way:
 *
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
int j, k;
for (j = 0; j <= 9; j++)
{
if (j <= s)
printf("%02x", c[l * 10 + j]);
else
printf("  ");
if (j % 2)
putchar(' ');
}
for (k = 0; k <= s; k++)
{
if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
putchar(c[l * 10 + k]);
else
putchar('.');
}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i;
for (i = 0; i <= (size - 1) / 10 && size; i++)
{
printf("%08x: ", i * 10);
if (i < size / 10)
{
print_line(b, 9, i);
}
else
{
print_line(b, size % 10 - 1, i);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
