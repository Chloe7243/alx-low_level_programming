#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - A function that prints the letters of the alphabet
  * Return: Returns an integer value => "0"
*/
int main(void)
{
int i = 0;
int j = 0;
while (i < 26)
{
putchar(i + 97);
i++;
}
while (j < 26)
{
putchar(j + 65);
j++;
}
putchar('\n');
return (0);
}
