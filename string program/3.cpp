#include <stdio.h>
main() 
{
    char str[100]; 		//program to print the *reverse* individual char's of a string

    printf("Enter a string: ");
    scanf("%[^\n]", str); 
	printf("Individual characters in reverse order: ");
    for (int i = 0; str[i] != '\0'; i++);
    {
    	i--;
	}
    while (i >= 0) 
	{
        printf("%c ", str[i]);
        i--;
    }
    printf("\n");
}

