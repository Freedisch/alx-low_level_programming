#include "main.h"

/**
 * print_alphabet_x10 - print 10 times lower alphabet
 */
void print_alphabet_x10(void)
{
	for (int n = 0; n < 10; n++)
	{
		char word;
		
		for (word = 'a'; word <= 'z'; word++)
			putchar(word);
		putchar('\n');
	}
}
