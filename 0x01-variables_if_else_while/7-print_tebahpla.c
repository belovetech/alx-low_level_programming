#include <stdio.h>

/**
* main - print alphabet in reverse order
*
* Return: Always (0) success
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	return (0);
}
