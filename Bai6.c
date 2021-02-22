#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    gets(s);
    printf("%s\n", s);
    int count = 1; // count dùng để đếm số từ 
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == ' ')
        {
            count++;
        }
    }
    for(char i = 'a'; i <= 'z'; i++)
    {
        int count = 0;
        for(int j = 0; j < strlen(s); j++)
        {
            if(s[j] == i)
            {
                count++;
            }
        }
        if(count != 0)
        {
        printf("Co %d ki tu %c \n", count, i);
        }
    }
    printf("%s co %d tu",s, count);
    return 0;
}