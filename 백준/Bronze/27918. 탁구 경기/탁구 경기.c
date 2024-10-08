#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    char b[a];
    int num_a = 0;
    int num_b = 0;
    for (int i = 0; i < a; i++){
        scanf(" %c", &b[i]);
        if (b[i] == 'D') {
            num_a++;
            if (num_a >= num_b + 2) break;
        }
        else {
            num_b++;
            if (num_b >= num_a + 2) break;
        }
    }
    printf("%d:%d", num_a, num_b);

    return 0;
}