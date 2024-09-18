#include <stdio.h>
#include <string.h>

int main()
{
    char a[51];
    scanf("%s", a);
    
    int num = strlen(a);
    
    int cnt = 10;
    for (int i = 1; i < num; i++){
        if (a[i] == a[i-1]) cnt += 5;
        else cnt += 10;
    }

    printf("%d", cnt);

    return 0;
}