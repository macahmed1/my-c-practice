#include <stdio.h>

/**
 * main - main entry
 * Description: Function parameters to accept values.
 * Return: Always 0
 */

void number_square (int num) // Function parameter to accept values.
{
	int number_square = num * num;
	printf("The square of %d is %d\n", num, number_square);
}

int main()
{
	number_square(7);

        return 0;
}

