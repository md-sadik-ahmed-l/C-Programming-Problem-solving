#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[n + 1];
    scanf("%s", a);

    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += a[i] - '0';
    }
    printf("%d\n", sum);

    return 0;
}