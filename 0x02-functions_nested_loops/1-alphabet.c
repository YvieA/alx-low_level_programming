#include "main.h"

/**
 * prints the lowercase alphabets a-z
 *
 * Description: print alphabets in lowercase
 * characters a-z followed by a new line
 * from the "main.h" file
 *
 * Return void (nothing)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
