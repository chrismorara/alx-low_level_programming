#include "main.h"

/**
* rev_string - a function which reverses a string
 * @s: letter being tested
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j, k;
	char z;

	for (i = 0; s[i] != '\0'; i++)

	j = 0;

	k = i / 2;
	while (k--)
	{
		z = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = z;
		j++;

	}

}
