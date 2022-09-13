#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints the first 98
 * Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * The numbers must be separated by comma,
 * followed by a space ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long first, last, f, fr, l, lr;
unsigned long int divisor = 1000000000;

first = 1;
last = 2;

printf("1");
for (i = 1; i < 91; i++)
{
printf(", %lu", last);
last = first + last;
first = last - first;
}

f = first / divisor;
fr = first % divisor;
l = last / divisor;
lr = last % divisor;
for (i = 90; i < 97; i++)
{
printf(", %lu", l + (lr / divisor));
printf("%lu", lr % divisor);
l = l + f;
f = l - f;
lr = lr + fr;
fr = lr - fr;
}


printf("\n");
return (0);
}
