#include <stdio.h>

/**
 * main - main entry
 * Description: Nested Loop.
 * Return: Always 0
 */

int main()
{
	int i, j;

	for (i = 0; i <= 4; i++)
	{
		printf("STARTING OF OUTER LOOP %d\n", i);

		for (j = 0; j <= 4; j++)
		{
			printf("\tINNER LOOP, NUMBER %d\n", j);
		}
		printf("ENDING OF OUTER LOOP %d\n\n", i);
	}
        return 0;
}

