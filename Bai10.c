#include <stdio.h>

void Encoder(char s[], int n);

void Encoder(char s[], int n)
{
for(int i = 0; s[i] != '\0'; i++)
    {
		char ch = s[i];
		
		if(ch >= 'a' && ch <= 'z')
        {
			ch = ch + n;
			
			if(ch > 'z')
            {
				ch = ch - 'z' + 'a' - 1;
			}
			
			s[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z')
        {
			ch = ch + n;
			
			if(ch > 'Z')
            {
				ch = ch - 'Z' + 'A' - 1;
			}
			
			s[i] = ch;
		}
	}
	printf("Encode:  %s \n", s);
}

int main()
{
    char s[1001];
    printf("Nhap chuoi: ");
    gets(s);
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);
    Encoder(s, n);
    
    return 0;
}