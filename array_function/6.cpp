#include<stdio.h>

main()
{
    int rows, cols;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);
    
    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    printf("Enter the elements of the first matrix:\n");
    for (int i=0;i<rows;i++) 
	{
        for (int j=0;j<cols;j++) 
		{
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter the elements of the second matrix:\n");
    for (int i=0;i<rows;i++) 
	{
        for (int j=0;j<cols;j++) 
		{
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Result of addition:\n");
    for (int i=0;i<rows;i++) 
	{
        for (int j=0;j<cols;j++) 
		{
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("Result of subtraction:\n");
    for (int i=0;i<rows;i++) 
	{
        for (int j=0;j<cols;j++) 
		{
            result[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

   
    if (cols == rows) 
	{
        printf("Result of multiplication:\n");
        int mulResult[rows][cols];
        for (int i=0;i<rows;i++) 
		{
            for (int j=0;j<cols;j++) 
			{
                mulResult[i][j] = 0;
                for (int k=0;k<cols;k++) 
				{
                    mulResult[i][j] = mat1[i][k] * mat2[k][j];
                }
                printf("%d ", mulResult[i][j]);
            }
            printf("\n");
        }
    } 
	else 
	{
        printf("Matrix multiplication is not possible with the given matrices.\n");
    }
}

