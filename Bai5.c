// calculate sum and average of array
#include <stdio.h>

void InputArray(double a[], int size);
double SumOfArray(double a[], int size);
double AverageOfArray(double a[], int size);


void InputArray(double a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
}

double SumOfArray(double a[], int size)
{
    double S = 0;
    for(int i = 0; i < size; i++)
    {
        S = S + a[i];
    }
    return S;
}

double AverageOfArray(double a[], int size)
{
    return SumOfArray(a, size) / size;
}

int main()
{
    double a[1001];
    int size;
    printf("Nhap kich thuoc cua day so: ");
    scanf("%d", &size);
    InputArray(a, size);
    printf("Sum and Average of Array: %lf %lf", SumOfArray(a, size), AverageOfArray(a, size));
    return 0;
}