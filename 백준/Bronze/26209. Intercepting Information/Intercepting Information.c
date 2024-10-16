#include <stdio.h>

int main()
{
    int a[8];
    int tri = 0;
    
    for (int i = 0; i < 8; i ++){
        scanf("%d", &a[i]);
        if (a[i] != 0 && a[i] != 1) tri++;
    }
    
    if (tri == 0) printf("S");
    else printf("F");

    return 0;
}