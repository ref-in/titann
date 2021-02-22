//find max min in array
#include <stdio.h>

void InputArray(double a[], int size);
double MinOfArray(double a[], int size);
double MaxOfArray(double a[], int size);

void InputArray(double a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
}

double MinOfArray(double a[], int size)
{
    double min = a[0];
    for(int i = 1; i < size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

double MaxOfArray(double a[], int size)
{
    double max = a[0];
    for(int i = 0; i < size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int main()
{
    double a[1001];
    int size;
    printf("Nhap kich thuoc cua day so: ");
    scanf("%d", &size);
    InputArray(a, size);
    printf("Gia tri nho nhat cua day so: %lf \n", MinOfArray(a, size));
    printf("Gia tri lon nhat cua day so: %lf \n", MaxOfArray(a, size));
    return 0;
}