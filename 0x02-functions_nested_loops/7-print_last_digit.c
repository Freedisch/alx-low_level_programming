#include "main.h"
/**
 * print_last_digit - hehehe
 * Return: hfhfhfhf
 * @n: jfjfjf
 **/

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;
	putchar(a + '0');

	return (a);
}
