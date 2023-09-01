#include <stdio.h>

/**
 * main - main entry
 * Description: Function declaration does not contain the body part of the function.
 * While the function defination contains the body part of the function.
 * Return: Always 0
 */

/* Function Declaration - Function Prototype */
int function_calculate_add (int num1, int num2);

int main()
{
        int num1 = 13;
        int num2 = 17;
        int result = function_calculate_add (num1, num2);
        printf("The addition of %d and %d is: %d\n", num1, num2, result);
        return 0;
}

/* Function Defination - Function Prototype */
int function_calculate_add (int num1, int num2)
{
        int calculate_add = (num1 + num2);
        return calculate_add;
}
