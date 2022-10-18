#include <unistd.h>
#include "main.h"
/**
 * _print_binary - function that print binnary
 * @binary_list: array
 *
 * Return: binary number
 */
int _print_binary(va_list binary_list)
{
	unsigned int i, count, Num, binary, arr[32];

	i = 0, count = 0;
	Num = va_arg(binary_list, int);

	if (Num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}
	else
	{
		while (Num > 0)
		{
			binary = Num % 2;
			Num /= 2;
			arr[count] = binary;
			count++;
		}
		i = count - 1;
		while (i > 0)
		{
			_putchar('0' + arr[i]);
			i--;
		}
		_putchar('0' + arr[i]);
	}
	return (count);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

