#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int x = 0;
    int y = n-1;

    int flag = 1;

    while (x < y)
    {
        if(a[x] != a[y])
        {
            flag = 0;
            break;
        }
        x++;
        y--;
    }

    if(flag == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}