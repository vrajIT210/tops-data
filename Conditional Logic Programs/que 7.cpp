#include <stdio.h>
main() 
{
    float marks;

    printf("Enter marks: ");
    scanf("%f", &marks);

    if (marks >= 40) 
	{
        printf("Pass\n");
    } 
	else 
	{
        printf("Fail\n");
    }
}

