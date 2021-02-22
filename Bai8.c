//Sort Array by SelectionSort

#include <stdio.h>


void InputArray(double a[], int size);
void OutputArray(double a[], int size);
void SelectionSort(double a[], int size);



void InputArray(double a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
}

void SelectionSort(double a[], int size)
{
    int index_min;
    for(int i = 0; i < size - 1 ; i++)
    {
        index_min = i;
        for(int j = i + 1; j < size; j++)
        {
            if(a[j] > a[index_min])
            {
                index_min = j;
            }
        }
        double v = a[index_min];
        a[index_min] = a[i];
        a[i] = v;
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
    int size;
    scanf("%d", &size);
    double a[1001];
    InputArray(a, size);
    SelectionSort(a, size);
    OutputArray(a, size);
    return 0;
}