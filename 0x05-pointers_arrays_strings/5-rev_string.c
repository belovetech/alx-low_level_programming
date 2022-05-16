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

	/* Length of the string */
	while (*(str + len))
		len++;

	/* Initialize begin_ptr & and end_ptr to point to basse address*/
	begin_ptr = str;
	end_ptr = str;

	/* Move end_ptr to the last address of the element */
	for (i = 0; i < len - 1; i++)
		end_ptr++;

	for (i = 0; i < len / 2; i++)
	{
		/* Swap character */
		tmp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = tmp;
	
		/* update pointer */
		begin_ptr++;
		end_ptr--;
	}
}


