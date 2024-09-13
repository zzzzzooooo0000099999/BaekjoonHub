#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    int b[a][2];
    int c[2] = {0, 0};
    for (int i = 0; i < a; i++){
        scanf("%d %d", &b[i][0], &b[i][1]);
        if (b[i][0] > b[i][1]) c[0]++;
        else if (b[i][0] < b[i][1]) c[1]++;
    }
    
    printf("%d %d", c[0], c[1]);

    return 0;
}