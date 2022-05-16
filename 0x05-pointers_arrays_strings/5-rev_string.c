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

/**
 * rev_str  - Reverse string using pointer
 * @str: string to reverse
 */

void rev_str(char *str)
{
	int i, len = 0;
	char tmp, *begin_ptr, *end_ptr;

	while (*(str + len))
		len++;

	begin_ptr = str;
	end_ptr = str;

	for (i = 0; i < len - 1; i++)
		end_ptr++;

	for (i = 0; i < len / 2; i++)
	{
		tmp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = tmp;

		begin_ptr++;
		end_ptr--;
	}
}


