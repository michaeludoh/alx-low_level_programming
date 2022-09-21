#include "main.h"
/**
 * rev_string - reverse a string
 * @s: input string
 *
 * Return: Always (0)
 */

void rev_string(char *s)
{
	int j, i, half;
	char temp;

	for (j = 0; s[j] != '\0'; j++)
		;
	i = 0;
	half = j / 2;

	while (half--)
	{
		temp = s[j - i  - 1];
		s[j - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
