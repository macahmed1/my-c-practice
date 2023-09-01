#include <stdio.h>

/**
 * main - main entry
 * Description: Function parameter for addition.
 * Return: Always 0
 */

void function_calculate_addition(int num1, int num2)
{
	int calculate_addition = num1 + num2;
	printf("The sum of %d and %d is %d\n", num1, num2, calculate_addition);
}

int main()
{
	function_calculate_addition(8,7);

        return 0;
}

