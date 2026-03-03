// muhammad Qadeer khan
etea id 06067
#include <stdio.h>

int main()
{
    int num1, num2;   // Declare two integer variables

    // Ask user to enter first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Ask user to enter second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Compare the two numbers
    if (num1 == num2)   // Check if both numbers are equal
    {
        printf("Both numbers are equal.\n");
    }
    else if (num1 > num2)   // Check if first number is greater
    {
        printf("First number is greater than second number.\n");
    }
    else   // Otherwise first number is smaller
    {
        printf("First number is less than second number.\n");
    }

    return 0;   // End of program
}/*write code for the program then compile and run then take two number from the user then ist number are either equall less and greater than second number 

