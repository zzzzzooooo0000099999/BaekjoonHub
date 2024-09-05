#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b[a][3];
    int c[a];
    for (int i = 0; i < a; i++){
        scanf("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
        c[i] = b[i][0]*(b[i][2] - 1) + b[i][1];
    }
    
    for (int i = 0; i < a; i++){
        printf("%d\n", c[i]);
    }

    return 0;
}