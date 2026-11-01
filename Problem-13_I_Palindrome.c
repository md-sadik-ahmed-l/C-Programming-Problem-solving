#include<stdio.h>
#include<string.h>

int main()
{
    char s[1005];
    scanf("%s", s);

    int len = strlen(s);

    int x = 0;
    int y = len-1;
    int ans = 1;

    while (x < len)
    {
        if(s[x] != s[y]){
            ans = 0;
            break;
        }

        x++;
        y--;
    }
    if(ans == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}