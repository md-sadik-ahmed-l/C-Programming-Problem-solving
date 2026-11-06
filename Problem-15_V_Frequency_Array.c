
#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= k; i++)
    {
        
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[j] == i)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
