#include <stdio.h>

/**
 * main - main entry
 * Description: if-else lesson
 * Return: Always 0
 */

int main()
{
	int age = 10;

	if (age < 10)
	{
		printf("You are not eligible yet to start secondary school\n");
	}

	else if (age >= 10 && age < 21)
	{
		printf("You can start school\n");
	}

	else 
	{
		printf("You are no more eligible!\n");
	}

}


