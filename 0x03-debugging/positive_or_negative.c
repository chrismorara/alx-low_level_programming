#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/* more headers goes there */
/**
* main - entry point
*
* Return: Always 0 (Success):wiq
*/
int main(void)
{int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}