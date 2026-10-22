#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch < 'z'){
        ch = ch + 1;
        printf ("%c", ch);
    }else{
        char A = ch - 25;
        printf("%c", A);
    }
    return 0;
}