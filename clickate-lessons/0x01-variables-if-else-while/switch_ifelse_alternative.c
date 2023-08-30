#include <stdio.h>

/**
 * main - main entry
 * Description: Using switch in place of if else statement.
 * Return: Always 0
 */

int main()
{
	char grade;

	printf("Enter your grade for remark: ");
	scanf("%c", &grade);

	switch (grade) 
	{
		case 'A':
		printf("You have an excellent score\n");
		break;

		case 'B':
		printf("You have a good score\n");
		break;

		case 'C':
		printf("You passed\n");
		break;

		default:
		printf("No remark\n");
		break;
	}

        return 0;
}
