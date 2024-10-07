#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a >= b) printf("%d", b*50);
    else printf("%d", a*50);

    return 0;
}