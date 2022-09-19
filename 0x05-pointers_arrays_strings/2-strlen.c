#include "main.h"
/**
 * _strlen - returns the length of string
 *@s: paremeter
 * Return: The length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
