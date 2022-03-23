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
	int i = 0;
	int len = 0;
	char rev_str;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		rev_str = s[i];
		s[i++] = s[len];
		s[len] = rev_str;
	}
}
