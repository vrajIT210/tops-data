#include <stdio.h>
main() 
{
    float costPrice, sellingPrice, profitLoss;		//program to find if product made profit, loss or nothing


    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    profitLoss = sellingPrice - costPrice;

    if (profitLoss > 0) 		//condition
	{
        printf("You made a profit of %.2f\n", profitLoss);
    } 
	else if (profitLoss < 0) 
	{
        printf("You incurred a loss of %.2f\n", -profitLoss);
    } 
	else 
	{
        printf("There is no profit or loss.\n");
    }

}

