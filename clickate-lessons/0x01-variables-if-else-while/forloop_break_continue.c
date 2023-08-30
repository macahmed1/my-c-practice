#include <stdio.h>

/**
 * main - main entry
 * Description: Using forloop break and continue.
 * Return: Always 0
 */

int main()
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		if (i == 6)
		{
			break; //replacing break with continue skips 6
		}
		
			printf("Number %d\n", i);
		}
	

        return 0;
}
