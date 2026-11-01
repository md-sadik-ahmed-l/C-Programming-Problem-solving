#include<stdio.h>
#include<string.h>

int main()
{
    char a[11];
    char b[11];
    scanf("%s%s", a, b);

    int lenA = strlen(a);
    int lenB = strlen(b);

    printf("%d %d\n", lenA, lenB);
    printf("%s%s\n", a, b);
    
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    printf("%s %s", a, b);

    return 0;
}