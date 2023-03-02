#include "main.h"

/**
 * rot13 - encodes letter using rot13
 *
 * @n: string
 * Return: string
 */

char *rot13(char *n)
{
	int length = strlen(n);
	int value, ascii_val, i;

	for (i = 0; i < length; i++)
	{
		ascii_val = n[i];

		while (ascii_val > 64 && ascii_val < 91 || ascii_val > 96 && ascii_val < 123)
		{
			if (ascii_val > 64 && ascii_val < 91)
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
