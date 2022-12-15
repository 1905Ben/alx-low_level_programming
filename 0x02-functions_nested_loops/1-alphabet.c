#include <stdio.h>

/**
 * main - Prints the alhpabet
 * Return: Always (Success)
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);

}
