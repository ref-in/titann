#include <stdio.h>

int Min(int n)
{
    int count_10 = 0, count_5 = 0, count_2 = 0, count_1 = 0;
    int x = n;
    
        if(n >= 10)
        {
            count_10 = count_10 + n / 10;
            n = n % 10;
        }
        if(n >= 5 && n < 10)
        {
            count_5  = count_5  + n / 5;
            n = n % 5;
        }
        if(n >= 2 && n < 5)
        {
            count_2  = count_2 + n / 3;
            n = n % 3;
        }
        count_1 = x - count_10 * 10 - count_5 * 5 - count_2 * 2;
    return count_10 + count_5 + count_2 + count_1;
}
int main()
{
    int n;
    printf("Nhap so tien: ");
    scanf("%d", &n);
    printf("So dong tien nho nhat: %d ", Min(n));
    return 0;
}