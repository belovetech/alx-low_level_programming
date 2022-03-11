#include <stdio.h>

/**
* main - Print alphabet in lower case
*
* Return: Always (0) success
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != EOF)
			putchar(ch);
		else
			putchar('\n');
	return (0);
}
