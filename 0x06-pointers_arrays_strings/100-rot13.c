#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 *  * rot13 - encodes letter using rot13
 *   *
 *    * @n: string
 *     * Return: string
 *      */

char *rot13(char *n)
{
	int length = strlen(n);
	int value, ascii_val, i;

	for (i = 0; i < length; i++)
	{
		ascii_val = n[i];

		while (isalpha(n[i]))
		{
			if (isupper(ascii_val))
			{
				value = n[i] - 65;
				n[i] = (value + 13) % 26 + 65;
			}
			else
			{
				value = n[i] - 97;
				n[i] = (value + 13) % 26 + 97;
			}
			break;
		}
	}
	return (n);
}
