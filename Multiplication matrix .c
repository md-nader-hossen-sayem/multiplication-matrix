//Multiplication Matrix by Array
#include<stdio.h>
int main()
{
    int matrixNoOne[10][10], matrixNoTwo[10][10], resultMatrix[10][10];
    int row_1, row_2, col_1, col_2, num, sum=0;

    //Row and col for the first Matrix
    printf("Enter Rows number for first matrix: ");
    scanf("%d",&row_1);
    printf("Enter cols number for the first matrix: ");
    scanf("%d",&col_1);

    printf("\n");

    //Row and col for the second Matrix
    printf("Enter Rows number for second matrix: ");
    scanf("%d",&row_2);
    printf("Enter cols number for the second matrix: ");
    scanf("%d",&col_2);

    while(row_1 != col_2)
    {
        printf("\n");
        printf("Error!! Try again -_- \n");

    //Row and col for the first Matrix
    printf("Enter Rows number for first matrix: ");
    scanf("%d",&row_1);
    printf("Enter cols number for the first matrix: ");
    scanf("%d",&col_1);

    printf("\n");

    //Row and col for the second Matrix
    printf("Enter Rows number for second matrix: ");
    scanf("%d",&row_2);
    printf("Enter cols number for the second matrix: ");
    scanf("%d",&col_2);
    }

    printf("\n");

    //Take input from user for the first matrix
    printf("Enter value for Matrix No One---\n");
    for(int i=0; i<row_1; i++)
    {
        for(int j=0; j<col_1; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&matrixNoOne[i][j]);
        }
        printf("\n");
    }

    //Take input from user for the second matrix
    printf("Enter value for Matrix No two---\n");
    for(int i=0; i<row_2; i++)
    {
        for(int j=0; j<col_2; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&matrixNoTwo[i][j]);
        }
        printf("\n");
    }

    //Multiplication of Matrix
    for(int i=0; i<row_1; i++)
    {
        for(int j=0; j<col_2; j++)
        {
            for(int k=0; k<col_1; k++)
            {
                sum = sum + matrixNoOne[i][k] * matrixNoTwo[k][j];
            }
                resultMatrix[i][j] = sum;
                sum =0;
        }
    }

    //print Matrix one
    printf("\n Matrix No One---\n");
    for(int i=0; i<row_1; i++)
    {
        for(int j=0; j<col_1; j++)
        {
            printf(" %d  ",matrixNoOne[i][j]);
        }
        printf("\n");
    }

    //print Matrix two
    printf("\n Matrix No Two---\n");
    for(int i=0; i<row_2; i++)
    {
        for(int j=0; j<col_2; j++)
        {
            printf(" %d  ",matrixNoTwo[i][j]);
        }
        printf("\n");
    }

    //print result matrix
    printf("\n Multiplication of Matrix---\n");
    for(int i=0; i<row_1; i++)
    {
        for(int j=0; j<col_2; j++)
        {
            printf(" %d  ",resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
