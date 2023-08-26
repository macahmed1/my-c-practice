#include <stdio.h>

/**
 * main - main entry
 * Description: Using Do While Loop to program age input
 * Return: Always 0
 */ 

int main()
{
	int age;


	do 
	{
		printf("Enter Your Age: \n");
		scanf("%d", &age);
	}


	while (age > 14 && age < 36); // && includes all the age ranges
	//while (age < 15 || age > 35); // || excludes ages outside ranges

	return 0;
}
