#include<stdio.h>
main()
{
	int i=1,k=1,j=1;
	while(i<=5)
	{
		while(k<=5-i)
		{
			printf(" ");
			k++;
		}
		while(j<=i)
		{
			printf(" *");
			j++;
		}
		printf("\n");
		i++;
	}
}
