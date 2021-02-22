#include <stdio.h>

void Print(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2*n - 1; j++)
        {
            if(j <= n - i)
            {
                printf(" ");
            }
            else if(j >= n + i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%d", &n);
    printf("\n");
    Print(n);
    return 0;
}