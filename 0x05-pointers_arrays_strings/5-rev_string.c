#include "main.h"

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
			printf("%c", s[i]);
		s++;
}
