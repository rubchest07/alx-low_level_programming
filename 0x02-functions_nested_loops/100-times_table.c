#include "main.h"

void custom_print(int n);
int count_digits(int cd);

/**
 * print_times_table - a function that prints
 * n times table, starting with 0.
 *
 * Prototype: void print_times_table(int n);
 *
 * @n: number indicating the termiation point of timestable
 */
void print_times_table(int n)
{
if ((n >= 0) && (n <= 15))
{
	int i, j, ans;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			ans = i * j;
			if ((j > 0))
			{
				_putchar(',');
				if (ans < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (ans < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			custom_print(ans);
		}
		_putchar('\n');
	}
}
}

/**
 * custom_print - Print without libraries
 * @n: number argument
 */
void custom_print(int n)
{
	int count = 0;
	int number = n;
	int loop, k, j;

	do {
		n /= 10;
		++count;
	} while (n != 0);

	if (count <= 1)
	{
		_putchar(number + '0');
	}
	else
	{
			loop = 10;
		for (k = 2; k < count; k++)
		{
			loop *= 10;
		}
		for (j = (count - 1); j >= 0; j--)
		{
			int temp_number;

			temp_number = number / loop;
			if (temp_number != 0)
			{
				_putchar((temp_number % 10) + '0');
				loop /= 10;
			}
		}
	}
}

/**
 * count_digits - count digs
 * @cd: arg
 * Return: number of digits in the provided number
 */
int count_digits(int cd)
{
	int count = 0;

	do {
		cd /= 10;
		++count;
	} while (cd != 0);
	return (count);
}
