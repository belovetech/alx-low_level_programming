#include "main.h"
#include <string.h>

/**
* rev_string - Reverse string
* @s: string
*
* Return: void
*/

void rev_string(char *s)
{
	int i, len = 0;

	len = strlen(s);

		for (i = len - 1; i >= 0; i--)
			_putchar(s[i]);
		s++;
}
