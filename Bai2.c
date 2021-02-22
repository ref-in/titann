// Solve equation 2

#include <stdio.h>
#include <math.h>

void Solve(double a, double b, double c)
{
    double delta = b*b - 4*a*c;
    double x1, x2;
    if(a == 0)
    {
        if(b == 0 && c == 0)
        {
            printf("Phuong trinh co vo so nghiem!");
        }
        else if(b == 0 && c != 0)
        {
            printf("Phuong trinh vo nghiem!");
        }
        else printf("Nghiem cua phuong trinh bang %lf", -c / b);
    }
    else
    {
    if(delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %lf \n", x1);
        printf("x2 = %lf", x2);
    }
    else if(delta == 0)
    {
        x1 = -b / (2*a);
        printf("Phuong trinh co nghiem kep");
        printf("x1 = x2 = %lf", x1);
    }
    else
    {
        printf("Phuong trinh vo nghiem!");
    }
    }
}

int main()
{
    double a, b, c;
    printf("Nhap he so a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    Solve(a, b, c);
    return 0;
}