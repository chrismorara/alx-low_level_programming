#include <stdio.h>
/**
 * main - main block
 * Description: Print Fizz and Buzz for multiple of 3 and 5 respectively
 * Print FizzBuzz for multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j = 100;

	i = 1;
	while (i <= j)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		printf(" ");
	i++;
	}
	printf("\n");
	return (0);
}
