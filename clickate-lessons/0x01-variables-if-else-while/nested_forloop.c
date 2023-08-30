#include <stdio.h>

/**
 * main - main entry
 * Description: Using nested for loop.
 * Return: Always 0
 */

int main()
{
	int i, j;

	for (i = 0; i <= 3; i++)
	{
		printf("Start of outer loop %d\n", i);

		for (j = 0; j <= 5; j++)
		{
			printf("\tInner Loop %d\n", j);
		}

		printf("End of outer loop %d\n\n", i);
	}


	return 0;
}
