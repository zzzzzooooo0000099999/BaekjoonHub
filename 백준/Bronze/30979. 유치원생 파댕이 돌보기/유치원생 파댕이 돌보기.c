#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int c[b];
    int sum = 0;
    for (int i = 0; i < b; i++){
        scanf("%d", &c[i]);
        sum += c[i];
    }
    
    if (a > sum) printf("Padaeng_i Cry");
    else printf("Padaeng_i Happy");

    return 0;
}