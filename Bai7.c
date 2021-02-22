#include <stdio.h>

void InputArray(double a[], int size);
void SortArray(double a[], int size);
void OutputArray(double a[], int size);

void InputArray(double a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
}


void SortArray(double a[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(a[i] > a[j])
            {
               double v = a[i];
               a[i] = a[j];
               a[j] = v;
            }
        }
    }
}


void OutputArray(double a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%lf ", a[i]);
    }
}


int main()
{
    double a[1001];
    int size;
    printf("Nhap kich thuoc cua day so: ");
    scanf("%d", &size);
    InputArray(a, size);
    SortArray(a, size);
    OutputArray(a, size);
    return 0;
}