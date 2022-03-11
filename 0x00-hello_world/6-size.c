#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int i;
	long int sizeof1;
	long long sizeof2;
	char c;
	float f;

	printf("sizeof char %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("sizeof int %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("sizeof long int %lu byte(s)\n", (unsigned long)sizeof(sizeof1));
	printf("sizeof long long %lu byte(s)\n", (unsigned long)sizeof(sizeof2));
	printf("sizeof float %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
