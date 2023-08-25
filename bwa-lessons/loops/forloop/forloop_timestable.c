 #include <stdio.h>

/**
 * main - main entry
 * Description: Using for loops to create times table.
 * Return: Always 0
 */

int main()
{
	int num, mul;
	
	for (num = 1; num <= 10; num++)
	{
		for (mul = 1; mul <=10; mul++)
		{
			printf("\t%d", (num*mul));
		}

		printf("\n");
	}
}
