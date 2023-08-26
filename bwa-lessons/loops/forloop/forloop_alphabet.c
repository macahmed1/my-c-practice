#include <stdio.h>

/**
 * main - main entry.
 * Description: Printing Alphabet from a to z using for loop.
 * Return: Always 0
 */

int main()
{
	char ch;

	for (ch = 'A'; ch <='Z'; ch++)
	{
		printf("%c\n", ch);
	}

	return 0;
}
