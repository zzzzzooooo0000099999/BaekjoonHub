#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    int b[a];
    for (int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
    for (int i=0; i<a; i++){
        printf("%d %d\n", b[i], b[i]);
    }

    return 0;
}