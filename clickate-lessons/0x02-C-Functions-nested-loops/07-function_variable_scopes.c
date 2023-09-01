#include <stdio.h>

/**
 * main - main entry
 * Description: Function variable scopes include local variables
 * (variables declared inside a function) 
 * and global variables 
 * (variables defined outside a function, on top of the program.
 * Return: Always 0
 */

/* Global Variables */

int g = 10;

int main()
{
	/* Local Variables */
	int a = 3, b = 6;

	printf("Variable a = %d, b = %d, and g = %d\n", a, b, g);
        return 0;
}

