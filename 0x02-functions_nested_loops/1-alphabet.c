#include "main.h"

/**
 * print_alphabet - loop for to print all the lower alphabet
 */

void print_alphabet(void)
{
	char word;
	for(word='a';word<='z';word++){
		putchar(word);
	}
	putchar('\n');
}
