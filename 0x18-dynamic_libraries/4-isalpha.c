#include <ctype.h>
#include "main.h"

/**
* _isalpha - check if a character is alphabet or not
* @c: character
*
* Return: Always 1 (success)
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
