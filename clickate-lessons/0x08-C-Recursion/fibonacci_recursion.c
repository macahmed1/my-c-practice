#include <stdio.h>
/**
 * main - main entry
 * Description: Using Fibonnaci recursion function.
 * Return: Always 0
 */

int fibo(int n);

int main()
{
	int n = 8;
	int i;

	printf("Fibonacci Sequence of %d is : ", n);

	for (i = 0; i < n; i++)
	{
		printf ("\n%d\n ", fibo(i));
	}
}

int fibo (int n)
{

	if (n == 0)
	{
	return 0;
	}

	else if (n == 1)
	{
	return 1;
	}

	else
	{
	return (fibo(n-1) + fibo(n-2));
	}

}

