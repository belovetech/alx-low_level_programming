#include "main.h"

/**
* print_last_digit - Last digit of a given number
* @n: number
*
* Return: the value of n
*/

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
