#include <stdio.h>
#include <math.h>

int Expression(int n)
{
    int mau = 1;
    for(int i = 1; i <= n; i++)
    {
        mau = mau * i;
    }
    return mau;
}

int main()
{
    double x;
    printf("Nhap gia tri cua x: ");
    scanf("%lf", &x);
    double S = 0;
    for(int i = 0; i <= 10; i++)
    {
        S = S + pow(x, i) / Expression(i);
    }
    printf("gia tri e^2 dung khai trien maclaurin toi bac 10: %lf", S);
    return 0;
}