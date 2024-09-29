#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d", &a);
    char b[a][21];
    for (int i = 0; i < a; i++){
        scanf("%s", b[i]);
        int c = strlen(b[i]);
        for (int j = 0; j < c; j++){
            if (b[i][j] >= 'A' && b[i][j] <= 'Z'){
                b[i][j] -= ('A' - 'a');
            }
        }
    }
    
    for (int i = 0; i < a; i++){
        printf("%s\n", b[i]);
    }
    

    return 0;
}