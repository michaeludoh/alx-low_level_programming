#include "main.h"

/**
 * print_alpabet - Entry point
 * Description: A function that prints the alphabets
 * in lowercase follwed with new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
