#include "main.h"
 /**
  * jack_bauer - hehehe
  */

void jack_bauer(void)
{
	int i;
	int j;
	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
		}
	}
}
