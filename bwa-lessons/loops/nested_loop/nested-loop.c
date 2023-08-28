#include <stdio.h>

/**
 * main - main entry
 * Description: Nested loop pattern
 * Return: Always 0
 */

int main()
{
	int i, j;

	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
		{
			printf("\t*");
		}
		printf("\n\n");
	}
}
