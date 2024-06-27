#include<stdio.h>
int main ()
{
	float celsius,fehrenheit;
	printf("Enter temperature in fahrenheit :");
	scanf("%f",&fehrenheit);
	
	celsius = (fehrenheit-32)*5/9;
	
	printf("%.2f fehrenheit = %.2f celsius",fehrenheit,celsius);
	
	return 0;
}
