#include <stdio.h>
#include "08-2-addheader.h"

/**
 * main - main entry
 * Header file has an extension h which contains c functions
 * declaration and definition to be shared among several source files
 * Return: Always 0
 */

int main()
{
	int result = add(4,6);

	printf("The Result is %d\n", result);

        return 0;
}



