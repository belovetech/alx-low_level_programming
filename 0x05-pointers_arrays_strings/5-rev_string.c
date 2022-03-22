#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - Reverse string
* @s: string
*
* Return: void
*/

void rev_string(char *s)
{
	int i, len;

        len = strlen(s);

        for (i = len - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
