#include <stdio.h>
main() 
{
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);

    if (num1 == num2) 
	{
        printf("The two integers are equal.\n");
    } 
	else 
	{
        printf("The two integers are not equal.\n");
    }
}

