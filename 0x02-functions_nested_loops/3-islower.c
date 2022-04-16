#include "main.h"

/**
* _islower - check if the character is lowercase or not
* @c: character
*
* Return: Always 1 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
