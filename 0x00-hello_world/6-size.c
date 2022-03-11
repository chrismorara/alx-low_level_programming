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

	printf("size of a char %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int %lu byte(s)\n", (unsigned long)sizeof(sizeof1));
	printf("size of a long long %lu byte(s)\n", (unsigned long)sizeof(sizeof2));
	printf("size of a float %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
