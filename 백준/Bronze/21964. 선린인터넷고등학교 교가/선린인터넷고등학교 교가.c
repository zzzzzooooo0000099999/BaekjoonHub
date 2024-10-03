#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    char b[a];
    scanf("%s", b);
    
    printf("%c%c%c%c%c", b[a-5], b[a-4], b[a-3], b[a-2], b[a-1]);

    return 0;
}