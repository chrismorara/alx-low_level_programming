#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times
 * Return: no return
 */

void more_numbers(void)
{
	int y, z;

	for (y = 0; y < 10; y++)
	{
		for (z = 0; z < 15; z++)
		{
			if (z >= 10)
				_putchar((z / 10) + 48);
			_putchar((z % 10) + 48);
		}
		_putchar('\n');
	}
}
