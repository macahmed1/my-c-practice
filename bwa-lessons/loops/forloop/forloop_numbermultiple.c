#include <stdio.h>

/**
 * main - main entry
 * Description: Using for loops to create multiple of numbers using a prompt.
 * Return: Always 0
 */

int main()
{
	int num, mul;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (mul = 1; mul <= 10; mul++)
	{
		printf("%d\n", (num*mul));
	}

	return 0;
}
