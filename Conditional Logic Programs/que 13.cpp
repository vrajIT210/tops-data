#include <stdio.h>
main() 
{
    int num1, num2, num3, max;		//program to find the minimum number among 3 numbers

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    max = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);


    printf("The min number among %d, %d, and %d is %d.\n", num1, num2, num3, max);

}

