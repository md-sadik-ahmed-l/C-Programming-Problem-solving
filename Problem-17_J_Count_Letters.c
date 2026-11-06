#include<stdio.h>

int main()
{
    char s[10000005];
    scanf("%s", s);

    for (int i = 0; i != '\0'; i++)
    {
        int count = 0;
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            count ++;
        }
        printf("%d : %d", s[i], count);

        
    }

    return 0;
}