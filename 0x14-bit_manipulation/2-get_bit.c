#include "main.h"

/**
*get_bit - returns the value of a bit at an index
*@n: number to search
*@index: index of the bit
*Return: the value of the bit at index index or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}

