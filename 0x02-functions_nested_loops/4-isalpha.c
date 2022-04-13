#include "main.h"

/**
 *_isalpha - return 1 if c is a lower or uppercase
 *@c: character check
 *Return - 1 or 0
 */

int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

