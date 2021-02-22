#include <stdio.h>

void InputMatrix(double a[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
}

void Permutation(double a[][100], double b[][100], int row, int col) 
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            b[j][i] = a[i][j];
        }
    }
}
void OutputMatrixA(double a[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%.1lf ", a[i][j]);
        }
        printf("\n");
    }
}

void OutputMatrixB(double b[][100], int row, int col)
{
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row; j++)
        {
            printf("%.1lf ", b[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    double a[100][100], b[100][100];
    int row, col;
    printf("Nhap hang & cot: ");
    scanf("%d%d", &row, &col);
    InputMatrix(a, row, col);
    
    printf("Ma tran nhap vao: \n");
    OutputMatrixA(a, row, col);
    Permutation(a, b, row, col);
    printf("Ma tran sau khi hoan vi: \n");
    OutputMatrixB(b, row, col);
    return 0;
}