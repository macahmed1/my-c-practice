#include <stdio.h>

/**
 * main - main entry
 * Description: Dowhile loop. Do this while performing the condition.
 * Return: Always 0
 */

int main()
{
	int i = 0;

	do 
	{
		printf("%d\n", i);
		i++;
	}

	while (i < 5);
	
	return 0;

}
