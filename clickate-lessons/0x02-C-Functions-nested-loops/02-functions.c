#include <stdio.h>

/**
 * main - main entry
 * Description: Functions in C.
 * Return: Always 0
 */

void greetings() // Void shouldn't print out or return value.
{
	printf("Hello Functions here\n");
}

int main() // Function will be called here and return value.
{
	greetings();
	greetings();
	greetings();
	greetings();

	printf("End of greetings functions\n");

        return 0;
}

