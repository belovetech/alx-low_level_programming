#include <stdio.h>

/**
* main - print all alphabet in lowercase except e and q
*
* Return: Always (0) success
*/

int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
			continue;
		else if (ch == 'q')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
