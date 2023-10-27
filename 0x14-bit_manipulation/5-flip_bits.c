#include "main.h"

/**
*flip_bits -  function that returns the number of bits
*@n: first number to compare
*@m: second number to compare
*Return: Always 0
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned long int ans;

	ans = n ^ m;

	for (count = 0; ans > 0;)
	{
		if ((ans & 1) == 1)
			count++;
		ans = ans >> 1;
	}
	return (count);
}

