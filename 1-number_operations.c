#include "holberton.h"
/**
 * print_d - Print decimal (Base 10)
 * @ar_list: Store the value of arguments
 * Return: Counter print numbers
 */
int print_d(va_list ar_list)
{
	unsigned int num_Absolute, aux_Num, count_Zero, numbers, count;

	count = 1;

	numbers = va_arg(ar_list, int);

	if (numbers < 0)
	{
		_putchar(45);
		num_Absolute = (numbers * -1);
		count++;
	}
	else
	{
		num_Absolute = numbers;
	}

	aux_Num = num_Absolute;
	count_Zero = 1;

	while (aux_Num > 9)
	{
		aux_Num /= 10;
		count_Zero *= 10;
		count++;
	}

	while (count_Zero >= 1)
	{
		_putchar(((num_Absolute / count_Zero) % 10) + '0');
		count_Zero /= 10;
	}
	return (count);
}
/**
 * print_i - Print the integers
 * @ar_numlist: Store list numbers
 * Return: Number print
 */
int print_i(va_list ar_numlist)
{
	return (print_d(ar_numlist));
}