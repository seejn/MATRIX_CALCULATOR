#include<stdio.h>

struct matrix
{
    int row, col;
    int elm[50][50];
}m[2];

void display()
{
    int i, j;

    printf("####    Displaying the elements of the matrices ####\n\n");


    printf("Elements [%d] of matrix1[%d * %d]: \n", m[0].row * m[0].col, m[0].row, m[0].col);
    for(i = 0; i < m[0].row; i++)
    {
        for(j = 0; j < m[0].col; j++)
            printf("%d\t", m[0].elm[i][j]);
        printf("\n");
    }

    printf("\n\n");

    printf("Elements [%d] of matrix2[%d * %d]: \n", m[1].row * m[1].col, m[1].row, m[1].col);
    for(i = 0; i < m[1].row; i++)
    {
        for(j = 0; j < m[1].col; j++)
            printf("%d\t", m[1].elm[i][j]);
        printf("\n");
    }
}

void input()
{
    int i, j;
    //Taking the rows and columns for the matrices
    printf("####    Enter Row and Column for the matrices   ####\n");

    printf("Matrix 1\n");
    printf("Enter row: ");
    scanf("%d", &m[0].row);
    printf("Enter column: ");
    scanf("%d", &m[0].col);
    printf("\n\n");

    printf("Matrix 2\n");
    printf("Enter row: ");
    scanf("%d", &m[1].row);
    printf("Enter column: ");
    scanf("%d", &m[1].col);
    printf("\n\n");
    //Taking the elements of matrices

    printf("Enter [%d] elements of matrix1: \n", m[0].row * m[0].col);
    for(i = 0; i < m[0].row; i++)
    {
        for(j = 0; j < m[0].col; j++)
            scanf("%d", &m[0].elm[i][j]);
    }

    printf("Enter [%d] elements of matrix2: \n", m[1].row * m[1].col);
    for(i = 0; i < m[1].row; i++)
    {
        for(j = 0; j < m[1].col; j++)
            scanf("%d", &m[1].elm[i][j]);
    }


    display();
}
void main()
{
    input();
}
