#include <stdio.h>
/**
 * main - main entry
 * Description: C Recursion.
 * Return: Always 0
 */

int sum(int n);

int main()
{
	int number, result;

	printf("Please enter a positive number : ");
	scanf("%d", &number);

	result = sum(number);
	printf("sum = %d\n", result);
	
	return 0;
}


int sum(int n) 
{
	if (n != 0) {
	// function sum() is calling itself
	return n + sum(n-1);

	}

	else
	{
		return n;
	}

}

