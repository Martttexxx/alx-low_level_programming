#include "main.h"
/**
*print_binary - prints the binary representation of a number
*@n: binary number to be printed
*/

void print_binary(unsigned long int n)
{
	unsigned long int latest;
	int i, count;

	for (i = 63; i >= 0; i--)
	{
		latest = n >> i;

		if (latest & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		_putchar('0');
	}
	if (!count)
		_putchar('0');
}



