#include <stdio.h>

int main()
{
    int a[2];
    int b[2];
    scanf("%d %d %d %d", &a[0], &a[1], &b[0], &b[1]);
    
    while(1){
        a[1] -= b[0];
        b[1] -= a[0];
        if (a[1] <= 0 && b[1] <= 0){
            printf("DRAW");
            break;
        }
        else if (a[1] <= 0 && b[1] > 0){
            printf("PLAYER B");
            break;
        }
        else if (a[1] > 0 && b[1] <= 0){
            printf("PLAYER A");
            break;
        }
    }
    
    return 0;
}