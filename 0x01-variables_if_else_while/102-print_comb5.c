#include <stdio.h>
/**
 *main - this is the main function
 *Return: 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int first_digit_i = i / 10;
			int second_digit_i = i % 10;
			int first_digit_j = j / 10;
			int second_digit_j = j % 10;

			if (i != j)

			{
				putchar('0' + first_digit_i);
				putchar('0' + second_digit_i);
				putchar(' ');
				putchar('0' + first_digit_j);
				putchar('0' + second_digit_j);

				if (!(i == 98 && j == 99))

				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
