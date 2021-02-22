//Calculate Sum, Subtract, Area of 2 Complex Numbers ~.~

#include <stdio.h>

ComplexNumber Sum(ComplexNumber a, ComplexNumber b);
ComplexNumber Subtract(ComplexNumber a, ComplexNumber b);
ComplexNumber Area(ComplexNumber a, ComplexNumber b);

typedef struct ComplexNumber
{
    double real; // real part
    double imaginary; // imaginary part
} ComplexNumber;

ComplexNumber Sum(ComplexNumber a, ComplexNumber b)
{
    ComplexNumber total;
    total.real = a.real + b.real;
    total.imaginary = a.imaginary + b.imaginary;
    return total;
}

ComplexNumber Subtract(ComplexNumber a, ComplexNumber b)
{
    ComplexNumber total;
    total.real = a.real - b.real;
    total.imaginary = a.imaginary - b.imaginary;
    return total;
}

ComplexNumber Area(ComplexNumber a, ComplexNumber b)
{
    ComplexNumber total;
    total.real = a.real * b.real - a.imaginary * b.imaginary;
    total.imaginary = a.real * b.imaginary + a.imaginary * b.real;
    return total;
}

int main()
{
    ComplexNumber a, b, result_sum, result_subtract, result_area;
    printf("Nhap so thu nhat: ");
    scanf("%lf %lf", &a.real, &a.imaginary);
    printf("Nhap so thu hai: ");
    scanf("%lf %lf", &b.real, &b.imaginary);
    
    result_sum = Sum(a, b);
    printf("Sum = %.2lf + %.2lfi \n", result_sum.real, result_sum.imaginary);

    result_subtract = Subtract(a, b);
    printf("Subtract = %.2lf + %.2lfi \n", result_subtract.real, result_subtract.imaginary);

    result_area = Area(a, b);
    printf("Area = %.2lf + %.2lfi ", result_area.real, result_area.imaginary);
    return 0;
}