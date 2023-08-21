#include <stdio.h>

/**
 * main - main
 * Description: Conditions with user input.
 * Return: Always 0
 */

int main()
{

// USER INPUT USING &&
/*
	int age; //declare a variable called age

	
	printf ("1-Enter your age: \n");
	scanf ("%d", &age);

	if (age > 14 && age < 36) // This picks only eligible ages
	{
		printf("You can proceed to the next step\n\n");
	}

	else
	{
		printf("Sorry, you are not eligible. Only ages 15 to 35\n\n");
	}

*/

// ALTERNATIVE METHOD TO THE ABOVE SOLUTION

	int age2; //declare a variable called age

	printf ("2-Enter your age: \n");
	scanf ("%d", &age2);

	if (age2 < 15 || age2 > 35) // This excludes non-eligible ages
	{
		printf("Sorry only ages 15 to 35 are eligible.\n");
	}

	else if (age2 == 20)
	{
		printf("Welcome, you deserve special attention\n");
	}

	else if (age2 == 30)
	{
		printf("Please take this program seriously\n");
	}

	else if (age2 == 34 || age2 == 35)
	{
		printf("Please take this seriously\n");
	}

	else 
	{
		printf("You are all welcome onboard\n");
	}


	return 0;

}
