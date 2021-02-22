#include <stdio.h>

void InputMatrixA(double a[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
}

void InputMatrixB(double b[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%lf", &b[i][j]);
        }
    }
}

void OutputMatrix(double a[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%lf ", a[i][j]);
        }
        printf("\n");
    }
}

void OutputMatrixA(double a[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%lf ", a[i][j]);
        }
        printf("\n");
    }
}

void OutputMatrixB(double b[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%lf ", b[i][j]);
        }
        printf("\n");
    }
}

void AddMatrix(double a[][100], double b[][100], double c[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void SubMatrix(double a[][100], double b[][100], double c[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void AreaMatrix(double a[][100], double b[][100], double c[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            double S = 0;
            for(int k = 0; k <= j; k++)
            {
                S = S + a[i][k] * b[k][j];
            }
            c[i][j] = S;
        }
    }
}

void OutputMatrixC(double c[][100], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%lf ", c[i][j]);
        }
        printf("\n");
    }
}



int main()
{
    int rowA, colA, rowB, colB;
    double a[100][100], b[100][100], c[100][100];

    printf("Nhap hang & cot ma tran A: ");
    scanf("%d %d", &rowA, &colA);
    InputMatrixA(a, rowA, colA);
    OutputMatrix(a, rowA, colA);

    printf("Nhap hang & cot ma tran B: ");
    scanf("%d %d", &rowB, &colB);
    InputMatrixB(b, rowB, colB);
    OutputMatrix(b, rowB, colB);

    printf("\n");
    printf("Tong cua hai ma tran A va B\n");
    AddMatrix(a, b, c, rowA, colA);
    OutputMatrixC(c, rowA, colB);
    
    printf("\n");
    printf("Hieu cua hai ma tran A va B\n");
    SubMatrix(a, b, c, rowA, colA);
    OutputMatrixC(c, rowA, colB);
    
    if(colA == rowB)
    {
    printf("\n");
    printf("Tich cua hai ma tran A va B\n");
    AreaMatrix(a, b, c, rowA, colA);
    OutputMatrixC(c, rowA, colB);
    }
    else
    {
        printf("Khong ton tai tich A va B")
    }
    return 0;
}