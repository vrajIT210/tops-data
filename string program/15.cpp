#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

main() 
{
    char str[MAX_WORDS][MAX_LENGTH], largest[MAX_LENGTH], smallest[MAX_LENGTH];
    int i, n;
    int largest_length = 0, smallest_length = MAX_LENGTH;

    printf("Enter a string: ");
    scanf("%[^\n]", str[0]);

    // Count the number of words in the string
    n = 1;
    for (i = 0; str[0][i] != '\0'; i++) 
	{
        if (str[0][i] == ' ') 
		{
            n++;
        }
    }

    // Separate words from the string
    i = 0;
    char *token = strtok(str[0], " ");
    while (token != NULL && i < MAX_WORDS) 
	{
        strcpy(str[i], token);
        token = strtok(NULL, " ");
        i++;
    }

    // Find the largest and smallest words
    for (i = 0; i < n; i++) 
	{
        if (strlen(str[i]) > largest_length) 
		{
            strcpy(largest, str[i]);
            largest_length = strlen(str[i]);
        }
        if (strlen(str[i]) < smallest_length) 
		{
            strcpy(smallest, str[i]);
            smallest_length = strlen(str[i]);
        }
    }

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}

