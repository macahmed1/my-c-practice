#include <stdio.h>

/**
 * main - main entry
 * Description: Function return type returns value to be used in another function
 * Description: It is not void..
 * Return: Always 0
 */

int function_calculate_add (int num1, int num2)
{
	int calculate_add = (num1 + num2);
	return calculate_add;
}

int main()
{
	int num1 = 13;
	int num2 = 17;
	int result = function_calculate_add (num1, num2);
	printf("The addition of %d and %d is: %d\n", num1, num2, result);
        return 0;
}

