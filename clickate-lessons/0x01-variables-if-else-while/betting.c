 #include <stdio.h>

/**
 * main - main entry
 * Description: Using if else statement for betting program.
 * Return: Always 0
 */

int main(void)
{
	int age;

	printf("Enter your age: \n");
	scanf("%d", &age);

	if (age >= 18)
	{
		printf("You can go and bet\n");
	}

	else if (age >= 0 && age < 18)
	{
		printf("Sorry, you cannot bet\n");
	}

	else if (age < 0)
	{
		printf("You are not born yet\n");
	}

	else
	{
		printf("We do not recognize you\n");
	}

	return (0);
}
