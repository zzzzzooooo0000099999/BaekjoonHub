#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    if (a % 2 == 1) printf("Goose");
    else printf("Duck");

    return 0;
}